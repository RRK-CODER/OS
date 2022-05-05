#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{
int id1, id2;
id1=fork();
id2=fork();
if(id1>0 && id2>0)
{
    printf("\nParent process id=%d \n",getpid());
    }
    else if(id1==0 && id2>0)
    {
        printf("\n Child process one \n");
        execlp("/bin/pwd","pwd",NULL);
    }
    else if(id1>0 && id2==0)
{
    printf("\n Child Process two\n");
    execlp("/bin/ls","ls",NULL);
    }
    else{
        printf("\nFork Failed\n");
        }
        return 0;
}