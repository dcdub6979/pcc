#include<stdio.h> 
#include<conio.h> 
void main() 
{ 
int n,sum=0,i=1,dec; 
clrscr(); 
printf("Enter num"); 
scanf("%d",&dec); 
do 
{ 
rem=dec%2; 
sum=sum+(i*rem); 
dec = dec/2; 
i=i*10 
}while (dec > 0); 
printf("\n the binary equivalent is",sum); getch(); 
} 
