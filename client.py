from microbit import *
import radio
import utime

TABLE_NUM = 3
radio.on()

all_on = Image(
    "99999:"
    "99999:"
    "99999:"
    "99999:"
    "99999"
)


def flash_display():
    while True:
        display.show(all_on)

while True:
    recv = radio.receive()
    if recv == str(TABLE_NUM):
        flash_display()

