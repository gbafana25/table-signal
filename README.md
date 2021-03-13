# Lunch Table Signalling System

	A common problem at lunch this year has been that since tables aren't called in order, some are often forgotten about.  This can cause some frustration during lunch, as it is hard for the lunch prefects to see which tables haven't gotten their food yet.  This system uses a microbit to signal lunch tables when it is their turn to join the lunch line.

## How it Works
### Server
	The server uses the two buttons on the microbit to call up tables from both sides of the lunch room (there are also 2 lines).  When the prefect presses one of the buttons, it sends out a radio signal with the table number that can join the line.  
### Client
	The client listens for the number broadcasted by the server, and then prints "READY" on the display

## Setup
- follow the instructions on the [microbit runtime website](https://lancaster-university.github.io/microbit-docs/offline-toolchains//)
- in both the `client` and `server` directories, run `yt build`
- copy `server-combined.hex` from `table-signal/server/build/bbc-microbit-classic-gcc/source/` onto the microbit you want to use as the server (the one that the lunch prefect will use)
- copy `client-combined.hex` from `table-signal/client/build/bbc-microbit-classic-gcc/source/` onto each of the client microbits (the one's that will be at the tables)

