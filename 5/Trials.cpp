#include<stdio.h>
int main(void){
char cinsiyet;
int  boy;
printf("Please enter your sex; K or k or E or e :\n");
scanf("%c", &sex);
printf("Enter your height\n");
scanf("%d", &height);
if(sex=='K' || sex=='k'){
if(height>=180)
{
printf("You can enter the trials\n");  }
}

else
printf("You cannot enter the trials\n");
return(0);


		}

