#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	
	int c = 0; //세로줄갯수

	while (c < 5) {
		int i = 0; //가로별갯수

		while (i <= c) {
			
			printf("*");
			i++;
		}
		printf("\n");
		c++;
	}
}