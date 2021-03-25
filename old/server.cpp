#include "MicroBit.h"

MicroBit mbit;

int main() {
	mbit.init();
	
	// radio needs to be turned on manually
	mbit.radio.enable();

	// 2 sides in lunchroom: 1-25 and 26-60
	// 2 separate lines for each side
	// both must start 1 below, incremented before displaying
	int side_one = 0;
	int side_two = 25; 

	PacketBuffer buffer(1);
	
	while(true) {
		buffer[0] = 0;
		if(mbit.buttonA.isPressed()) {
			side_one++;
			if(side_one > 25) {
				mbit.display.scroll("side done!");
			} else {
				mbit.display.scroll(side_one);
				buffer[0] = side_one;
				mbit.radio.datagram.send(buffer);
				mbit.display.clear();
			}
		}
		else if(mbit.buttonB.isPressed()) {
			side_two++;
			if(side_two > 60) {
				mbit.display.scroll("side done!");
			} else {
				mbit.display.scroll(side_two);
				buffer[0] = side_two;
				mbit.radio.datagram.send(buffer);
				mbit.display.clear();
			}	
		}
	}
	

	release_fiber();

}



