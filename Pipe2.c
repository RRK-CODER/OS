#include <sys/ipc.h>
#include <sys/shm.h>
#include <stdio.h>

int main()
{
    char a[50];
    key_t key = ftok("shmfile",65);
    int shmid=shmget(key,1024,0666| IPC_CREAT);
    char *str =(char*)shmat(shmid,(void*)0,0);
    printf("Write Data: ");
    fgets(a,50,stdin);
    printf("Data written in memory: %s\n",a);
    shmdt(a);
    return 0;
}