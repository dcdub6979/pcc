/* Program to perform sorting and to display largest and second largest elements in the list */ # include <stdio.h> 
# include<conio.h> 
void main( ) 
{ 
int i, n,temp; 
int x[20]; 
printf("\n Enter numbers of elements :"); 
scanf(“%d ”,&n); 
printf("\n Enter Numbers in any order : \n"); 
for(i=0; i<n; i++) 
{ 
 scanf(“%d”,&x[i]); 
} 
for(i=0;i<n-1;i++) 
{ 
for(j=0;j<n-1;j++) 
{ 
if(x[j]>x[j+1]) 
{ 
temp=x[j]; 
x[j]=x[j+1]; 
x[j+1]=temp; 
} 
} 
} 
printf("\n Largest Element is : %d“,x[n-1]); 
printf("\n Second largest Element is : %d",x[n-2]); 
getch( ); 
} 
