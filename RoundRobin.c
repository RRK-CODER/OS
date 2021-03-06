#include<stdio.h>
 int main()
{
      int i, n, completion_time = 0, x, counter = 0, time_quantum;
      int wait_time = 0, turnaround_time = 0, arrival_time[10], burst_time[10], temp[10];
      float average_wait_time, average_turnaround_time;
      printf("\nEnter Number of Processes:\t");
      scanf("%d", &n);
      x = n;
      for(i = 0; i < n; i++)
      {
            printf("\nEnter Details of Process[%d]\n", i + 1);
 
            printf("Arrival Time:\t");
 
            scanf("%d", &arrival_time[i]);
 
            printf("Burst Time:\t");
 
            scanf("%d", &burst_time[i]);
 
            temp[i] = burst_time[i];
      }
 
      printf("\nEnter Time Quantum:\t");
      scanf("%d", &time_quantum);
      printf("\nProcess ID\ttBurst Time\t Turnaround Time\t Waiting Time\n");
      for(completion_time = 0, i = 0; x != 0;)
      {
            if(temp[i] <= time_quantum && temp[i] > 0)
            {
                  completion_time = completion_time + temp[i];
                  temp[i] = 0;
                  counter = 1;
            }
            else if(temp[i] > 0)
            {
                  temp[i] = temp[i] - time_quantum;
                  completion_time = completion_time + time_quantum;
            }
            if(temp[i] == 0 && counter == 1)
            {
                  x--;
                  printf("\nProcess[%d]\t%d\t %d\t %d", i + 1, burst_time[i], completion_time - arrival_time[i], completion_time - arrival_time[i] - burst_time[i]);
                  wait_time = wait_time + completion_time - arrival_time[i] - burst_time[i];
                  turnaround_time = turnaround_time + completion_time - arrival_time[i];
                  counter = 0;
            }
            if(i == n - 1)
            {
                  i = 0;
            }
            else if(arrival_time[i + 1] <= completion_time)
            {
                  i++;
            }
            else
            {
                  i = 0;
            }
      }
 
      average_wait_time = wait_time * 1.0 / n;
      average_turnaround_time = turnaround_time * 1.0 / n;
      printf("\nAverage Waiting Time:\t%f", average_wait_time);
      printf("\nAvg Turnaround Time:\t%f\n", average_turnaround_time);
      return 0;
}
