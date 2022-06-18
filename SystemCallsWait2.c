#include <unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include <stdio.h>
int main()
{
    int id;
    printf("Before Fork\n");
    id=fork();
    if(id==0) // child1 process
    {
        printf("I am first child having Pid %d\n", getpid());
        printf("My Parent's pid is %d\n",getppid());
    }
    else if(id>0) //Parent process
    {
        int id1=fork();
        if(id1==0)//CHild2 process
        {
            printf("I am Second Child having Pid %d\n",getpid());
            printf("Second child's Parent Pid is %d\n", getppid());
        }
        else {
       waitpid(id1,NULL,0);
        printf("I am parent having id=%d\n",getpid());
        printf(" My first child's pid is %d\n",id);
        printf("My Second child's PID is %d\n",id1);
        }
        
    }
    else
    {
        printf("fork not created");
     }
     return 0;
}