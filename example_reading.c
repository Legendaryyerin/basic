#include <stdio.h>
//#include <string.h>

int main()
{
    FILE* fp = fopen("example.bin", "rb");
    char contents[20];
    fread(contents, 10, 1, fp);
    for (int i = 0; i < 10; i++)
        printf("%x", (contents[i] & 0xFF));
    fclose(fp);
    return 0;
}