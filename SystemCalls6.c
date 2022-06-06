#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char * argv[])
{
    int pid;
    pid=fork();
    printf("%s",argv[1]);
    if(pid<0)
    {
        fprintf(stderr,"Fork Failed");
    return 1;
    }
    else if(pid==0)
    {
        execv("/bin/cp",argv);
    }
    else{
        sleep(10);
        printf("\n Child Process completed");

    }
    return 0;

}
