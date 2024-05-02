#include<stdio.h> 
#include<conio.h> 
void swap(int *,int *); 
void main() 
{ 
int a,b; 
clrscr(); 
printf("CALL BY Address\n"); 
printf("Enter two numbers "); 
scanf("%d%d",&a,&b); 
printf("BEFORE CALLING : \n"); 
printf("A : %d B : %d\n",a,b); 
 /* swap( ) is called by passing the addresses of two variables whose values are to be  interchanged. */ 
swap(&a,&b); 
printf("AFTER CALLING : \n"); 
printf("A : %d B : %d",a,b); 
getch(); 
} 
// swap( ) function exchange the value of two integer variables using call by address. void swap(int *x,int *y) 
{ 
int t; 
t=*x; 
*x=*y; 
*y=t; 
} 
