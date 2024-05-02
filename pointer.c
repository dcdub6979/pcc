 #include<stdio.h> 
#include<conio.h> 
#define SIZE 10 
void main() 
{ 
int a[SIZE],*ptr,i,n; 
clrscr(); 
printf("\nEnter the number of elements: "); 
scanf("%d",&n); 
printf("\nEnter the elements of an array :\n"); 
for(i=0;i<n;i++) 
{ 
scanf("%d",&a[i]); 
} 
ptr=a+n-1; 
printf("\nThe elements in reverse order are : \n"); 
for(i=0;i<n;i++) 
{ 
printf("%d ",*ptr); 
ptr--; 
} 
getch(); 
} 
