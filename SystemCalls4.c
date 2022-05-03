#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

int main(){
int pid;
pid=fork();
if(pid<0){/*error occured */
fprintf(stderr, "Fork Failed");
return 1;
}
else if (pid==0){ /*child process*/
execlp("/bin/ls","ls", NULL);
}
else{ /*parent process */
/*parent will wait for the child to complete */
sleep(3);
printf("Child Complete");

}
return 0;
}
