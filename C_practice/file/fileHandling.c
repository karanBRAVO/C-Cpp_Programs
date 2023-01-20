#include <stdio.h>

int main()
{
    char text[] = "this is text file created using C language.";
    int len = sizeof(text) / sizeof(text[0]);

    FILE *writeFilePtr = fopen("./file/1.txt", "w");
    fwrite(text, 1, len - 1, writeFilePtr);
    fclose(writeFilePtr);

    FILE *readFilePtr = fopen("./file/1.txt", "r");
    char data[len];
    fread(data, 1, len - 1, readFilePtr);
    printf("data = %s", data);

    return 0;
}