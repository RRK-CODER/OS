#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
void *thread_function(void *arg);
 int i,j;
 int main() {
 pthread_t a_thread;  //thread declaration 
 pthread_create(&a_thread, NULL, thread_function, NULL); 
//thread is created
 printf("Inside Main Program\n");
 for(j=20;j<25;j++)
 pthread_join(a_thread, NULL); //process waits for thread to finish . 
 {
 printf("%d\n",j);
 sleep(1);
 }
 }
void *thread_function(void *arg) {    
// the work to be done by the thread is defined in this function
 printf("Inside Thread\n");
 for(i=0;i<5;i++)
 {
 printf("%d\n",i);
 sleep(1);
 }
 }