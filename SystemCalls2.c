#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdio.h>
int main()
{
    int fd, n;
    char buff[50];
    printf("/n Enter the text to write in file");
    n=read(0,buff,50);
    fd=open("f1",O_CREAT | O_RDWR, 0777);
    write(fd,buff,n);
    write(1,buff,n);
    close(fd);
    return 0;
}