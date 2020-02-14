/*Program to implement FCFS and to calculate the Total Waiting Time, Total Turnaround Time,
 Average Waiting Time and Average Turnaround Time.*/

#include<stdio.h>
int main()
{
    	int process,i;
    	float awt,atat;
    	printf("\n\nEnter the number of processes:");
    	scanf("%d",&process);
    	int bt[10],wt[10],tat[10];
    	for(i=0;i<process;i++)
    		{
            	printf("\nEnter burst time of process %d: ",i+1);
            	scanf("%d",&bt[i]);
    		}
    	wt[0]=0;
    	tat[0]=wt[0]+bt[0];
    	for(i=1;i<process;i++)
    	{
            	wt[i]=tat[i-1];
            	tat[i]=bt[i]+wt[i];
    	}
    	printf("\nProcess\t\tBurst time\n");
    	for(i=0;i<process;i++)
    	{
            	printf("  P%d\t\t  %d\n",(i+1),bt[i]);
    	}
    	printf("\nTotal waiting time\tTotal turn around time\n");
    	for(i=0;i<process;i++)
    		{
            		printf("\t%d\t\t\t%d\n",wt[i],tat[i]);
    		}
    		for(i=0;i<process;i++)
    		{
            		awt=awt+wt[i];
            		atat=atat+tat[i];
    		}
printf("\nAverage waiting time:%f\nAverage turn around  time:%f\n",(awt/process),(atat/process));
return 0;
}

