#include <stdio.h>
#include <string.h>
#include <ctype.h> /*c��� ǥ�� ���̺귯��, ���ڵ��� ���ǿ� �´��� �˻��ϰ� ��ȯ��.
���⼭�� �ҹ��� <->�빮�� ��ȯ�Ϸ��� ���*/

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