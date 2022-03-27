#include<stdio.h>
int main(void){
int age;
int license;
printf("Please enter age value\n");
scanf("%d", &age);
printf("Do you have a license, if yes 1 or 2\n");
scanf("%d", &license);
if(age>=18)
if(license==2)
printf("You can get a driver's license\n");
if(age<18)
printf("You cannot get a driver's license\n");
return(0);














	}
