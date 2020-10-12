/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

// The main function starts here.
int main(int argc, char* argv[]) {
	
	if (argc != 2) {
		printf("Usage: ./sqrt input\n");
		exit(-1);
	}

	// Checking whether input is a number or not.
	int len = strlen(argv[1]);
	for (int i = 0; i<len; i++) {
		if (!isdigit(argv[1][i])) {
			printf("Input is not a valid number.\n");
			exit(-1);
		}
	}

	int input = atoi(argv[1]);
	printf("Sqrt of %d is %f\n",input,sqrt(input));
	printf("End of program. Exiting.\n");
	return(0);

} // end main
