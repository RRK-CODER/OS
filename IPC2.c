#include <unistd.h>
#include <stdio.h>
#include <string.h>
int main()
{
    FILE *rd;
    char buffer[50];
    rd=popen("ls", "r");
    fread(buffer, sizeof(char), 20, rd);
    write(1,buffer,20);
    printf("\n");
    pclose(rd);
}