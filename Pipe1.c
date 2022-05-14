#include <stdio.h>
#include <unistd.h>

int main(){
    int pipefds[2],returnstatus,pid;
    char writemessage[2][20]={"Hi","Hello"};
    char readmessage[20];
    returnstatus=pipe(pipefds);
    if(returnstatus==-1){   
        printf("Unable to create pipe\n");
    return 1;
    }
 
    pid=fork();
    if(pid==0)
    {
        close(pipefds[1]);
        read(pipefds[0],readmessage,sizeof(readmessage));
        printf("Child Process-Reading from pipe-Message1 is %s \n",readmessage);
     }
     else{
         printf("Parent Process-Writing to pipe-message1 is %s\n",writemessage[0]);
         close(pipefds[0]);
         write(pipefds[1],writemessage[0],sizeof(writemessage[0]));
     }
     return 0;

}