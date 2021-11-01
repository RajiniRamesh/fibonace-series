/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>    
int main()    
{    
 int n1=3,n2=2,n3,i,a;    
 printf("Enter the number of elements:");    
 scanf("%d",&a);    
 printf("\n%d %d",n1,n2);
 for(i=2;i<a;++i) 
 {    
  n3=n1+n2;  
  printf(" %d",n3);    
  n1=n2;    
  n2=n3;    
 }  
  return 0;  
 }    