#include<stdio.h> 
#include<conio.h> 
#include<string.h> 
void main() 
{ 
 char fnm[10], mnm[10], lnm[10], name[30];  clrscr(); 
printf("enter First name :-> "); 
 scanf("%s", fnm); 
 printf("enter Middle name :-> ");  scanf("%s", mnm); 
 printf("enter Last name name :-> ");  scanf("%s", lnm); 
 strcpy(name,fnm); 
 strcat(name," "); 
 strcat(name,mnm); 
 strcat(name," "); 
 strcat(name,lnm); 
 printf("Your complete name-> %s", name);  getch(); 
} 
