#include <stdio.h> 
int find_gcd(int,int); 
int find_lcm(int,int); 
int main() 
{ 
int num1,num2,gcd,lcm; 
printf("\nEnter two numbers:\n "); 
scanf("%d %d",&num1,&num2); 
gcd=find_gcd(num1,num2); 
printf("\n\nGCD of %d and %d is: %d\n\n",num1,num2,gcd); if(num1>num2) 
lcm = find_lcm(num1,num2); 
else 
lcm = find_lcm(num2,num1); 
printf("\n\nLCM of %d and %d is: %d\n\n",num1,num2,lcm); return 0; 
} 
int find_gcd(int n1,int n2) 
{ 
while(n1!=n2) 
{ 
if(n1>n2) 
return find_gcd(n1-n2,n2); 
else 
return find_gcd(n1,n2-n1); 
} 
return n1; 
} 
int find_lcm(int n1,int n2) 
{ 
static int temp = 1; 
if(temp % n2 == 0 && temp % n1 == 0) 
return temp; 
temp++; 
find_lcm(n1,n2); 
return temp; 
}
