#include <stdio.h> 
#include <stdlib.h> 
 
int main() 
{ 
   char s_name[20],area; 
 
   float b_salary,sal; 
   int serv,sales; 
   printf("Enter your name : "); 
   scanf("%s",&s_name); 
   printf("Enter the area : "); 
   scanf("%s",&area); 
   printf("Enter your basic salary : "); 
   scanf("%f",&b_salary); 
   printf("Enter your number of years in service : "); 
   scanf("%d",&serv); 
   printf("Monthly sales : "); 
   scanf("%d",&sales); 
   sal=b_salary; 
   if (serv>5) 
   { 
      sal=sal+(sal*0.1); 
   } 
   if (area=='C') 
   { 
       sal=sal+2500; 
   }
 
   if (sales<=25000) 
   { 
       sal=sal+(sales*0.1); 
   } 
   else if (sales<50000) 
   { 
       sal=sal+(sales*0.12); 

   } 
   else if (sales>=50000) 
   { 
       sal=sal+(sales*0.15); 
   } 
   printf("Name : %s \n",s_name); 
   printf("Your gross monthly remuneration is %f ",sal); 
    return 0; 
}