#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	
	int c = 0; //�����ٰ���

	while (c < 5) {
		int i = 0; //���κ�����

		while (i <= c) {
			
			printf("*");
			i++;
		}
		printf("\n");
		c++;
	}
}