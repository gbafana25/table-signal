# Lunch Table Signalling System

A common problem at lunch this year has been that since tables aren't called in order, some are often forgotten about.  This can cause some frustration during lunch, as it is hard for the lunch prefects to see which tables haven't gotten their food yet.  This system uses a microbit to signal lunch tables when it is their turn to join the lunch line.

## How it Works
### Server
The server uses the two buttons on the microbit to call up tables from both sides of the lunch room (there are 2 lines).  When the prefect presses one of the buttons, it sends out a radio signal with the table number that can join the line.  
### Client
The client listens for the number broadcasted by the server, and then lights up the leds when it receives it number.

## Setup
- Run `setup.sh` to change the table number for the client device (before uploading)
- Create a hex file for both programs with the [Mu editor](https://codewith.mu/en/download) or the [microbit python web editor](https://python.microbit.org/v/2)
- Drag and drop `.hex` files onto microbit

