#include "MicroBit.h"
#define TABLE_NUM 1

MicroBit mbit;


void flash_display() {
	while(true) {
		mbit.display.print("||||", 100);
		mbit.sleep(100);
	}

}



void listener(MicroBitEvent event) {
	PacketBuffer rx = mbit.radio.datagram.recv();
	
	while(true) {
		if(rx[0] == TABLE_NUM) {
			// table is ready alert
			flash_display();
		}

	}

}

int main() {
	mbit.init();
	mbit.radio.enable();
	while(true) {
		mbit.messageBus.listen(MICROBIT_ID_RADIO, MICROBIT_RADIO_EVT_DATAGRAM, listener);
	}

}
