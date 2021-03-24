from microbit import *
import radio

radio.on()

east_side = 0
west_side = 25

while True:
    if(button_a.is_pressed()):
        east_side += 1
        if(east_side > 25):
            display.scroll("side done!")
        else:
            display.scroll(east_side)
            radio.send(str(east_side))
    elif(button_b.is_pressed()):
        west_side += 1
        if(west_side > 60):
            display.scroll("side done!")
        else:
            display.scroll(west_side)
            radio.send(str(west_side))
