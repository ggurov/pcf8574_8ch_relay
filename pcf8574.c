#include <wiringPi.h>
#include <pcf8574.h>


int main (int argc, char **argv) {
	int i;


	pcf8574Setup ( 64, 0x20);

	while (1) {

	for(i=0;i<8;i++) {
		digitalWrite(64+i, LOW);
		usleep(50000);
		digitalWrite(64+i, HIGH);
		usleep(50000);

	}
	}
}
