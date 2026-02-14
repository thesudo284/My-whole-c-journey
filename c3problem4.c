#include<stdio.h>

int main(){
	int year;
	printf("Enter any year: ");
	scanf("%d", &year);
	
	if(year%4==0){
		printf("you entered a leap year\n");
		}
	else{
		printf("This year is not leap year\n");
		}
	}