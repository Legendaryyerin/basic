#include <stdio.h>
#include <string.h>
#include <ctype.h> /*c언어 표준 라이브러리, 문자들을 조건에 맞는지 검사하고 변환함.
여기서는 소문자 <->대문자 변환하려고 사용*/

int main() {
    FILE* fp = fopen("file.txt", "r");
    char str[100];
    fgets(str, sizeof(str), fp);
    for (int i = 0; i < strlen(str); i++) {
        if (isupper(str[i]))
            printf("%c", tolower(str[i]));
        else if (islower(str[i]))
            printf("%c", toupper(str[i]));
    }
    return 0;
}