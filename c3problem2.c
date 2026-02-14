#include<stdio.h>
int main(){
	
	int sub1; //initialize sub1 variable
	int sub2; //intialize sub2 variable
	int sub3; //initialize sub3 variable
	
	printf("NOTE: Dont enter any percentage sign, enter number only "); //imp because clang does'nt support '
	printf("Enter The Persentage of subject 1: ");
	scanf("%d", &sub1); //taking input from the user
	printf("Enter The Percentage of subject 2: ");
	scanf("%d", &sub2); //same for subject 2
	printf("Enter The Persentage of subject 3: ");
	scanf("%d", &sub3); //same for subject 3
	int sum = (sub1+sub2+sub3); //sum of total subjects
	if(sub1, sub2, sub3>33 and sum>40){ //if condition
		printf("You Are passed");
		
		}
		else{ //else condition
			
			printf("You are failed");
			}
			
			return 0; //return value
			
		
	}
	