#!/bin/bash

for x in "$@"; 
do 
echo $x;
done;

sudo hping3 $x;
