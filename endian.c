#include <stdio.h>

int main(void) {

	long  i = 3;
	short *ip = &i;		// ip points to i, which contains 3

	short s = 3;
	short *sp = &s;		// sp points to s, which contains 3

	if (*ip == *sp) {
		printf("Match!\n");
	} else {
		printf("No match!\n");
	}
}

// On a Linux_x86 system it should print match
// On a power_aix system it should print no Match