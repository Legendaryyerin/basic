#include <stdio.h>

int i;
int num;

int main() {
	
	scanf("%d", &num);

	for (i = 2; i < num; i++) {
		if (num % i == 0) {
			printf("소수가 아닙니다.");
			return 0;
		}
		else{
			return 1;
		}
	}
}
