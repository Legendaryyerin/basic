#define _CRT_SECURE_NO_WARNINGS    // strcpy ���� ���� ���� ������ ���� ����
#include <stdio.h>
#include <string.h>

int main(void)
{
	char origin[] = "hello everyone~";
	char dest[20];

	strcpy(dest, origin);

	printf("�λ� : %s\n", dest);
	return 0;
}