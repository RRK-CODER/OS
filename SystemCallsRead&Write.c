#include <unistd.h>
int main()
{
    int n;

    char buffer[30];
    n=read(0,buffer,30); //read()  attempts  to  read  up to count bytes from
    // file descriptor fd into the buffer starting at buf.
    write(1,buffer,n); // write() writes up to count bytes from the buffer
     //starting at buf to the file referred to by the file descriptor fd.
     //0, 1, and 2 are the file descriptor versions of stdin, stdout, and stderr, respectively
}