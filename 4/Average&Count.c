#include <stdio.h>
int main()
{
int ent,count=0;
float sum=0.0;
printf("Enter the numbers, enter 0 to stop\n");
scanf("%d", &ent);
sum=sum+ent;
while(ent!=0){
        scanf("%d",&ent);
        sum=sum+ent;
        count++;
}
float average=(sum/count);
printf("Average: %.2f\n",average);
printf("Count says:%d \n",count);
}

