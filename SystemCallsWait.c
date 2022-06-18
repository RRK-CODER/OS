#include <unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include <stdio.h>
int main()
{
    int id;
    printf("Before Fork\n");
    id=fork();
    if(id>0) //Parent process
    {
        wait(NULL);
        printf("parent process: id=%d\n",getpid());
    }
    else if(id==0) // child process
    {
        printf("New process : id=%d\n", getpid());
        printf("Parent process: id=%d\n",getppid());
    }
    else
    {
        printf("fork not created");
     }
     printf("Common\n ");
     return 0;
}