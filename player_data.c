// Program to sort players in descending order of their batting average. #include<stdio.h> 
#include<conio.h> 
#include<string.h> 
struct Player 
{ 
char playerName[10]; 
char teamName[10]; 
int battingAvg; 
}; 
void main() 
{ 
struct Player p[10],temp; 
int n,i,j; 
clrscr(); 
printf("Enter no of Players:\n"); 
scanf("%d",&n); 
for(i=0;i<n;i++) 
{ 
printf("Enter Player Name :\n"); 
scanf("%s",&p[i].playerName); 
printf("Enter Team Name :\n"); 
scanf("%s",&p[i].teamName); 
printf("Enter batting average of player :\n"); 
scanf("%d",&p[i].battingAvg); 
} 
for(i=0;i<n-1;i++) 
{ 
for(j=i+1;j<n;j++) 
{ 
if(p[i].battingAvg<p[j].battingAvg) 
{ 
temp=p[i]; 
p[i]=p[j]; 
p[j]=temp; 
} 
} 
} 
printf("\nAfter Sorting:\n"); 
printf("Player Name\t Team Name\t Batting Average\n"); printf("----------------------------------------------------------------\n"); for(i=0;i<n;i++) 
{ 
printf("%s\t\t",p[i].playerName); 
printf("%s\t\t",p[i].teamName); 
printf("%d\n",p[i].battingAvg); 
}
getch(); 
} 
