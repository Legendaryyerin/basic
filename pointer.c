#include <stdio.h>

int main() {
	int* p = NULL;
	int i = 10;
	p = &i;

	printf("���� i�� �ּҰ� : %p \n", &i);
	printf("������ p�� �� : %p \n", p);
	printf("������ p�� ����Ű�� �� : %d \n", *p);

	return 0;
}

