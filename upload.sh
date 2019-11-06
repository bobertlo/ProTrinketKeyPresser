#!/bin/sh

HEXFILE=${1:-ProTrinketKeyPresser.ino.arduino_eightanaloginputs.hex}

echo Uploading $HEXFILE
avrdude -c usbtiny -p m328p -U "flash:w:$HEXFILE"
