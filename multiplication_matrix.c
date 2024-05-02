#include <stdio.h> 
#include <conio.h> 
void main () 
{ 
int i , j , k ; 
int set1[3][3] , set2[3][3] , multi[3][3] ; 
printf(" Enter values of first 3X3 matrix :\n") ; 
for (i=0 ; i<3 ; i++) 
{ 
for (j=0 ; j<3 ; j++) 
scanf(“%d”,&set1[i][j]) ; 
} 
printf(" Enter values of second 3X3 matrix :\n)" ; for (i=0 ; i<3 ; i++) 
{ 
for (j=0 ; j<3 ; j++) 
scanf(“%d”,&set2[i][j]) ; 
} 
for (i=0 ; i<3 ; i++) 
{ 
for (j=0 ; j<3 ; j++) 
{ 
multi[i][j] = 0; 
 for (k=0 ; k<3 ; k++) 
 multi[i][j] += set1[i][k]*set2[k][j] ; } 
} 
printf("The resulting 3X3 matrix is :\n") ; 
for (i=0 ; i<3 ; i++) 
{ 
for (j=0 ; j<3 ; j++) 
printf(“%d\t”multi[i][j]); 
 printf("\n") ; 
} 
getch ( ) ; 
} 
