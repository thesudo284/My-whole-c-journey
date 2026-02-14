#include<stdio.h>

int main(){
	int income;
	int tax;
	printf("NOTE: ONLY ENTER THE NUMBER NOT THE LAKH AFTER THE NUMBER AND NOT ALSO RUPPES SIGN, EXAMPLE: 5L NO WRITE ONLY 5\n");
	printf("Enter your income: ");
	scanf("%d", &income);
	
	if(income>2.5 && income <= 5){
		printf("Your tax aplicable 5%");
		}
	if(income > 5 && income<=10){
		printf("Your tax aplicable 20%");
		}
	if(income > 10){
			printf("Your tax applicable 30%");
			}
	else{
		printf("Wrong Input\n");
	}
	return 0;
	
	}

