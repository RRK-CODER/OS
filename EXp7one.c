#include <pthread.h>
#include <stdio.h>

void *display(void *arg){
    int *data=(int*)arg;
    int sqr=(*data)*(*data);
    printf("\n The square is %d",sqr);
   return NULL;
}

int main(void){
    pthread_t thread_ID;
    int value=5;
    pthread_create(&thread_ID,NULL, display, &value);
    pthread_join(thread_ID,NULL);
    return 0;
}