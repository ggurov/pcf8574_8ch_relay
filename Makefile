all: pcf8574 ch_control

pcf8574: pcf8574.c 
	gcc -o pcf8574 pcf8574.c -lwiringPi

ch_control: ch_control.c 
	gcc -o ch_control ch_control.c -lwiringPi
