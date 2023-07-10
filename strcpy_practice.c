#define _CRT_SECURE_NO_WARNINGS    // strcpy 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h>

int main(void)
{
	char origin[] = "hello everyone~";
	char dest[20];

	strcpy(dest, origin);

	printf("인삿말 : %s\n", dest);
	return 0;
}