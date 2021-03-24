from microbit import *
import radio

TABLE_NUM = 2
radio.on()

def flash_display():
    while True:
        display.scroll("READY")

while True:
    recv = radio.receive()
    if recv == str(TABLE_NUM):
        flash_display()
