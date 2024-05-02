#include<stdio.h> 
int findFactorial(int); 
int main() 
{ 
int i,BIO,n,r; 
printf("Enter the value of n and r: "); 
scanf("%d%d",&n,&r); 
BIO = findFactorial(n)/( findFactorial(n)* findFactorial(n-r)); printf("Value of BIO is %d:",BIO); 
return 0; 
} 
int findFactorial(int num) 
{ 
int i,f=1; 
for(i=1;i<=num;i++) 
f=f*i; 
return f; 
} 
