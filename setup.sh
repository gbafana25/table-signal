#!/bin/bash
#
# setup script
# runs build command in both directories
# updates table number in client program
# (this is currently hardcoded)
# this must be left in the project's base directory
# usage: ./setup.sh <option>
project_home=$HOME/table-signal

change_client_num() {
	cd client/source/
	read -p "New table number: " num
	sed -i "s|^#define TABLE_NUM.*|#define TABLE_NUM $num|" client.cpp
	cd $project_home
	build_all
}

build_all() {
	cd client/ && yt build
	cd ..
	cd server/ && yt build
	cd ..
	cp client/build/bbc-microbit-classic-gcc/source/client-combined.hex bin/ 
	cp server/build/bbc-microbit-classic-gcc/source/server-combined.hex bin/
}

read -p "Build both components (1)
change hardcoded client id, then build (2)
> " choice

if [ $choice == 1 ]
then
	build_all
elif [ $choice == 2 ]
then
	change_client_num
fi


