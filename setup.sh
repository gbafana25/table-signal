#!/bin/bash
#
# usage: ./setup.sh <num> (between 1 and 60)
# changes the TABLE_NUM variable in client.py

#read -p "New table number: " num
sed -i "s|^TABLE_NUM.*|TABLE_NUM = $1|" client.py


