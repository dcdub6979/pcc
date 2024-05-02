#include<stdio.h>  
#include<stdbool.h>  
void strReverse(char str[],char strRev[])  
{  
int i,j;  
for(i=0;str[i]!='\0';i++) ;  
i--; 
for(j=0;i>=0;i--,j++)  
strRev[j]=str[i];  
strRev[j]='\0';  
}  
bool isPallindrome(char str[],char strRev[])  {  
bool flag=true;  
for(int i=0;str[i]!='\0';i++)  
{  
if(str[i]!=strRev[i])  
{  
flag=false;  
break;  
}  
}  
return flag;  
}  
int main() 
{  
char str[50],strRev[50];  
strRev[0]='\0';//Initializing strRev as a null string  printf("\nEnter a string: ");  
scanf("%[^\n]",str);  
strReverse(str,strRev);  
printf("\reversed string: %s",strRev);  
if(isPallindrome(str,strRev))  
printf("\nIt is a pallindrome.");  
else  
printf("\nIt is not a pallindrome.");  
return 0;  
} 
