/*2.Create a program that calculates the gross salary by adding percentages of HRA, DA, and TA to
the base salary as chosen by the user.*/
#include<stdio.h>
int main(){
	float grosssalary,basicsalary,hra,da,ta;
 printf("enter the basicsalary:");
 scanf("%f",&basicsalary);
 printf("enter the hra:");
 scanf("%f",&hra);
 printf("enter the da:");
 scanf("%f",&da);
 printf("enter the ta:");
 scanf("%f",&ta);
 
 printf("grosssalary is %f",basicsalary+hra/100*basicsalary+da/100*basicsalary+ta/100*basicsalary);	

	
}

