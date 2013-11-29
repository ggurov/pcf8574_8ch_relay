#include <stdio.h>
#include <wiringPi.h>
#include <pcf8574.h>

#define BASEPIN	64

int main (int argc, char **argv) {
	int i;
	int ch;
	int action;


	if (argc == 3) {
		ch = atoi(argv[1]);
		action = atoi(argv[2]);

	} else {
		printf("%s <ch> <action>\n", argv[0]);
		printf("ch = 1 - 8\n");
		printf("action: 1 = ON ( LOW )\n");
		printf("        0 = OFF ( HIGH )\n");
		return 0;
	}

	pcf8574Setup ( BASEPIN, 0x20);

	if (ch > 8 || ch < 1)  {
		printf("ch out of range\n");
		return 0;
	}

	if (action != 0 && action != 1) {
		printf("action out of range\n");
		return 0;
	}

	if (action == 1) {
		digitalWrite(BASEPIN+ch-1, LOW);
	} else if (action == 0) {
		digitalWrite(BASEPIN+ch-1, HIGH);
	}

}
