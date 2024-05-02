#include<stdio.h> 
#include<conio.h> 
#include<math.h> 
main() 
{ 
float A , B , C , root1 , root2; 
float realp , imgp , disc; 
clrscr(); 
printf(" Enter the values of A , B and C\n"); 
scanf("%f%f%f" , &A , &B , &C); 
if(A==0 || B==0 || C==0) 
{ 
printf(" Error: Roots cannot be determined\n"); 
} 
else 
{ 
dis = (B * B) - (4 * A * C); 
if(disc<0) 
{ 
printf(" Imaginary Roots\n"); 
realp = -B/(2*A); 
imagp = sqrt(abs(disc))/(2*A); 
printf(" Root1 = %f + i%f\n" , realp , imagp); 
printf(" Root2 = %f - i%f\n" , realp , imagp); 
} 
else if( disc == 0) 
{ 
printf(" Roots are real and equal\n"); 
root1 = -B/(2 * A); 
root2 = Root1; 
printf(" Root1 = %f\n" , root1); 
printf(" Root2 =%f\n" , root2); 
} 
else if(disc>0) 
{ 
printf(" Roots are real and distinct\n"); 
root1 = (-B + sqrt(disc))/(2*A); 
root2 = (-B - sqrt(disc))/(2*A); 
printf(" Root1 = %f\n" , root1); 
printf(" Root2 = %f\n" , root2); 
} 
} 
}
