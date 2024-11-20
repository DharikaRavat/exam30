#include<stdio.h>

int main () {
	int number1,number2,number3,low;
	
	printf("enter the first number : ");
	scanf("%d" ,&number1);
	
	printf("enter the second number : ");
	scanf("%d" ,&number2);
	
	printf("enter the third number : ");
	scanf("%d" ,&number3);
	
	if(number1 <= number2 || number1 <= number3) {
		printf("The Lowest Number is : %d\n", number1);
	}
	
	else if (number2 <= number1 || number2 <= number3) {
		printf("The Lowest Number is : %d\n", number2);
	}
	
	else {
		printf("The Lowest Number is : %d\n", number3);
	}
}