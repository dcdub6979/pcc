#include<stdio.h> 
#include<conio.h> 
void main () 
{ 
float f, c; 
clrscr(); 
printf(“Enter Temperature in Celsius: ”); scanf(“%f”,&c); 
f=1.8*c+32; 
printf(“Temperature in Fahrenheit: %f”,f); getch(); 
} 
