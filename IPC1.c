#include <stdio.h>
#include <string.h>

int main()
{
    FILE *rd;
    char buffer[50];
    sprintf(buffer, "namr here first");
    rd=popen("wc -c", "w");
    fwrite(buffer, sizeof(char), strlen(buffer), rd);
    pclose(rd);
}