#!/bin/bash

for x in $*; 
do 
echo $x;
done;

declare -i x;

server="$1"
echo "server is " $server;
#while [ $x -gt 100 ]
#do
	hping3 $server -a $2 -p 80 $3 -d $4  -c 100 &
#	let x=$x-1;
#done
