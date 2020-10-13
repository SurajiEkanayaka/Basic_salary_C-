#include <stdio.h>
#include <stdlib.h>

int main()
{
   char Sname[10],Area[10];
   float Bsalary,Salary;
   int Service,Sales;
   
   printf("Enter your name : ");
   scanf("%s",&Sname);
   printf("Enter the area : ");
   scanf("%s",&Area);
   printf("Enter your basic salary : ");
   scanf("%f",&Bsalary);
   printf("Enter your number of years in service : ");
   scanf("%d",&Service);
   printf("Monthly sales : ");
   scanf("%d",&Sales);
   Salary=Bsalary;
  
   if (serv>5)
   {
	   Salary=Salary+(Salary*0.1);
   }
   if (Area=='C')
   {
  	   Salary=Salary+2500;
   }
   if (Sales<=25000)
   {
           Salary=Salary+(Sales*0.1);
   }
   else if (Sales<50000)
   {
	Salary=Salary+(Sales*0.12);
   }
  
   printf("Name : %s \n",Sname);
   printf("Your gross monthly remuneration is %f ",Salary);
    
   return 0;
}
