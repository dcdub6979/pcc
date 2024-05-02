# include<stdio.h> 
void main() 
{ 
int a, add, sub, mul, mod, div, x, y; 
printf("enter a number : "); 
scanf("%d",&x); 
printf("enter another number : "); 
scanf("%d",&y); 
printf("1=addition") 
printf("2=subtraction"); 
printf("3=multiplication"); 
printf("4=division"); 
printf("5=Modulus"); 
printf("enter tour choice\n :"); 
scanf("%d",&a); 
switch(a) 
{ 
case 1: add=x+y; 
printf("addition of %d and %d is =%d\n",x,y,add); 
 break; 
case 2: sub=x-y; 
 printf("subtraction of %d and %d is =%d\n",x,y,sub);  break; 
case 3: mul=x*y; 
 printf("multiplication of %d and %d is =%d\n",x,y,mul);  break; 
case 4: div=x/y; 
 printf("division of %d and %d is =%d\n",x,y,div); 
 break; 
case 5: mod=x%y; 
printf("division of %d and %d is =%d\n",x,y,mod); 
 break; 
default :printf("wrong choice"); 
} 
} 
