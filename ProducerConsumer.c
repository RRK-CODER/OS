#include <stdio.h>
#include <semaphore.h>
#include <pthread.h>
#include <stdlib.h>
#define buffersize 5

pthread_mutex_t mutex;
pthread_t tidp,tidc;
sem_t full, empty;
int counter;
int buffer[buffersize];

void intialize()
{
    pthread_mutex_init(&mutex,NULL);
    sem_init(&full,1,0);
    sem_init(&empty,1,buffersize);
    counter=0;
}
void *producer(void *param){
    int i,item;
    item=rand()%5;
    sem_wait(&empty);
    pthread_mutex_lock(&mutex);
    printf("\n producer item %d",item);
    buffer[counter++]=item;
    pthread_mutex_unlock(&mutex);
    sem_post(&full);
    }
    void *consumer(void *param)
    {
        int i,item;
        item=rand()%5;
        sem_wait(&full);
        pthread_mutex_lock(&mutex);
        item=buffer[--counter];
        printf("\n consumer item %d",item);
        pthread_mutex_unlock(&mutex);
        sem_post(&empty);
    }
    int main(){
        intialize();
        pthread_create(&tidp,NULL,producer,NULL);
        pthread_create(&tidc,NULL,consumer,NULL);
        pthread_join(tidp,NULL);
        pthread_join(tidc,NULL);
        exit(0);
    }