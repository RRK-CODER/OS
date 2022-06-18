#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int main()
{
int n,fd,fd1;
char buf[300];
fd=open("Practice.c",O_RDONLY);
n=read(fd,buf,300);
fd1=open("target", O_CREAT| O_WRONLY, 0642);
write(fd1,buf,n);
}




/*
open
int open(const char* pathname, int flags, [mode_t mode])
Open the file pathname according to mode, which a set of flags containing exactly one of 
O_RDONLY (open for reading), 
O_WRONLY (open for writing), and 
O_RDWR (open for both reading and writing), as well as other optional flags. 
Returns a file descriptor for the open file, or -1 on error.

O_CREAT: Create the file if it does not exist, using the mode argument to set the file’s initial permissions. 
(Typically the mode argument will be 0660 or S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP, which allows the current 
user and group to read or write the file.
O_CREAT | O_EXCL: Create the file and fail if the file already exists.
O_APPEND: Open the file in append mode: every write automatically jumps to the end of the file and makes the 
file longer.
O_TRUNC: Truncate the file to length 0.
*/