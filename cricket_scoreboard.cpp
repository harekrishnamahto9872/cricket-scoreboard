#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i=0,j=0;
	int run_sum1=0,run_sum2=0;
	int m;
	int pid[30],teamid[30];
	float btavg[30];
	int n,run[30];
	printf("\n\t************************************WELCOME TO BCCI WORLD CUP****************************************\n\n\n");
	printf("\n****************** Enter First team details:************************%\n");
	printf("\nEnter How many players u want: ");
	scanf("%d",&n);
	fflush(stdin);
	for(i=0;i<n;i++)
	{
		
		printf("\n Enter Player_ID of player: ");
		scanf("%d",&pid[i]);
		fflush(stdin);
		printf("\n Enter Team_ID of  Player(1 for first team/ 2 for second team): ");
		scanf("%d",&teamid[i]);
		fflush(stdin);
		printf("\n Enter Batting AVG: ");
		scanf("%d",&btavg[i]);
		fflush(stdin);
		printf("\nEnter Number of Runs scored by player: ");
		scanf("%d",&run[i]);
		fflush(stdin);
		
		run_sum1=run_sum1+run[i];
	
	}
	system("cls");
	printf("\n************************Enter Second  team details:****************************\n");
	printf("\nEnter How many players u want: ");
	scanf("%d",&m);
	fflush(stdin);
	for(j=i;j<m+n;j++)
	{
		printf("\n Enter Player_ID of player: ");
		scanf("%d",&pid[j]);
		fflush(stdin);
		printf("\n Enter Team_ID of Player(1 for first team/ 2 for second team): ");
		scanf("%d",&teamid[j]);
		fflush(stdin);
		printf("\n Enter Batting AVG: ");
		scanf("%d",&btavg[j]);
		fflush(stdin);
		printf("\nEnter Number of Runs scored by player: ");
		scanf("%d",&run[j]);
		
			run_sum2=run_sum2+run[j];
		
	}
	int k=0;
	system("cls");
	printf("\n\n\t\t****************Details for Team A******************\n\n");
	printf("\n\tPlayer_ID\tTEAM_ID\t\tRUNS_SCORED\n");
	for(k=0;k<n;k++)
	{
		printf("\t  %d",pid[k]);
		printf("\t\t  %d",teamid[k]);
		printf("\t\t  %d",run[k]);
		printf("\n");
	}
	
	printf("\n\n\t\t*****************Details for Team B*********************\n\n");
	printf("\n\tPlayer_ID\tTEAM_ID\t\tRUNS_SCORED\n");
	for(int x=k;x<m+n;x++)
	{
		printf("\t  %d",pid[x]);
		printf("\t\t  %d",teamid[x]);
		printf("\t\t  %d",run[x]);
		printf("\n");
	}
	getch();
	system("cls");
	if(run_sum1>run_sum2)
	printf("\n\n\n\n\n\n\n\n\n\n\n\t\t**********Team A won by %d runs****************\n\n\n\n\n\n\n",run_sum1-run_sum2);
	else if(run_sum1==run_sum2)
	printf("\n\n\n\n\n\n\n\n\n\t\t***************Match Draw**************\n\n\n\n\n\n");
	else 
	printf("\n\n\n\n\n\n\n\n\n\t\t*************Team B won by %d runs*****************\n\n\n\n\n\n\n\n\n",run_sum2-run_sum1);
}
