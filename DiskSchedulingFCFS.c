#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void main()
{
int queue[20],n,head,i,j,k,seek=0,max,diff;
float aver;
printf("enter the max range of disk");
scanf("%d",&max);
printf("enter the size of queue request");
scanf("%d",&n);
printf("enter the queue");
for(i=1;i<=n;i++)
{scanf("%d",&queue[i]);}
printf("enter the initial head position");
scanf("%d",&head);
queue[0]=head;
for(j=0;j<=n-1;j++)
{
diff=abs(queue[j+1]-queue[j]);
seek+=diff;
printf("move is from %d to %d with seek %d\n",queue[j],queue[j+1],diff);
}
printf("total seek time is%d\n",seek);
aver=seek/(float)n;
printf("avrage seek time is %f\n",aver);
}
