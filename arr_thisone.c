#include <stdio.h>
#include <string.h>

int main() {

	int arr[5] = { 1,2,3,4,5 };
	printf("length = %d\n", strlen(arr));
	for (int i = 0; i < strlen(arr); i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}
//170p
