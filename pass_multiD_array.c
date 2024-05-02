#include<stdio.h>  
#include<conio.h>  
#include<math.h>  
void main()  
{  
int a[3][3],i,j,s=0,r,c;  
clrscr();  
printf("Enter how many rows:");  
scanf("%d",&r);  
printf("Enter how many columns:");  
scanf("%d",&c);  
if(r==c)  
{  
printf("Enter the numbers:");  
for(i=0;i<r;i++)  
{  
for(j=0;j<c;j++)  
{  
scanf("%d",&a[i][j]);  
}  
}  
/*show the matrix elements*/  
printf("The matrix is : ");  
for(i=0;i<r;i++)  
{  
for(j=0;j<c;j++)  
{  
printf("%3d ",a[i][j]);  
}  
}  
/*show the sum of non diagonal elements*/  
printf(" Sum of non diagonal elements are: ");  for(i=0;i<r;i++)  
{  
for(j=0;j<c;j++)  
{  
if(i!=j)  
s=s+a[i][j];  
}  
} 
}  
printf("%d",s); 
getch(); 
} 
