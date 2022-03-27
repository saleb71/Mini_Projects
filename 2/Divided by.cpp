#include <iostream>
using namespace std;


int main() {
	int x;
	printf("Please enter a number\n");
	scanf("%d",&x);

	if(x % 2 == 0){
		printf("x can be divided by two\n");
	}
	else
	printf("x cannot be divided by two\n");
		if(x % 3 == 0){
		printf("x cannot be divided by three\n");
	}
	else
	printf("x cannot be divided by three\n");
		if(x % 5 == 0){
		printf("x can be divided by five\n");
	}
	else
	printf("x cannot be divided by five\n");
		if(x % 7 == 0){
		printf("x can be divided by seven\n");
	}
	else
	printf("x cannot be divided by seven\n");


	return 0;
}



