#include <stdio.h>



int main() {
int type, ammount;
double interest, total;
		printf("Welcome To Our Bank:\n");
		printf("--------------------\n");
		printf("Account Types:\n");
		printf("101-Personal Financial\n");
		printf("201-Personal Homeowner\n");
		printf("301-Personal Gold\n");
		printf("401-Small Busniess\n");
		printf("501-Big Busniess\n");
		printf("601-Gold Busniess\n");
		printf("--------------------\n");
		printf("Please Enter Type Of Your Account:\n");
		scanf("%d", &type);
		printf("Please enter ammount of cash\n");
		scanf("%d", &ammount);
		
	switch(type){
		
	case 101:
		interest=2.3;
		printf("Your ballance %d, Your interest is %.2f\n", ammount, interest);
		 total=ammount+(ammount*interest);
		printf("Your ballance %d, Your interest is %.2f\n", total, interest);
		break;
	case 201:
		interest=2.6;
		printf("Your ballance %d, Your interest is %.2f\n", ammount, interest);
		 total=ammount+(ammount*interest);
		printf("Your ballance %d, Your interest is %.2f\n", total, interest);
		break;
	case 301: 
		interest=2.9;
		printf("Your ballance %d, Your interest is %.2f\n", ammount, interest);
		 total=ammount+(ammount*interest);
		printf("Your ballance %d, Your interest is %.2f\n", total, interest);
		break;
	case 401:
		interest=3.2;
		printf("Your ballance %d, Your interest is %.2f\n", ammount, interest);
		 total=ammount+(ammount*interest);
		printf("Your ballance %d, Your interest is %.2f\n", total, interest);
		break;
	case 501:
		interest=3.5;
		printf("Your ballance %d, Your interest is %.2f\n", ammount, interest);
		 total=ammount+(ammount*interest);
		printf("Your ballance %d, Your interest is %.2f\n", total, interest);
		break;
	case 601:
		interest=3.9;
		printf("Your ballance %d, Your interest is %.2f\n", ammount, interest);
		 total=ammount+(ammount*interest);
		printf("Your ballance %d, Your interest is %.2f\n", total, interest);
		break;
	default:
		interest=0.0;

}
		
		
			
	
	
	
	
	return 0;
}
