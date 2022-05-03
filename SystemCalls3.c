#include <stdio.h>
#include <unistd.h>
int main()
{
    int id;
    id=fork();
    if(id>0)
    {
        printf("parent process: id=%d\n",getpid());
    }
    else if(id==0)
    {
        printf("New process : id=%d\n", getpid());
        printf("Parent process: id=%d\n",getppid());
    }
    else
    {
        printf("fork not created");
     }
     return 0;
}