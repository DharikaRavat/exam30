#include<stdio.h>

int main () {
	int Select;
	int Number1,Number2,Total;
	
	printf("Select the any number : \n");
	printf("1. Addition\n");
	printf("2. subtraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
	
	printf("Enter Your Number : ");
	scanf("%d", &Select);
	
	printf("Enter the first number : ");
	scanf("%d", &Number1);
	
	printf("Enter the second number : ");
	scanf("%d", &Number2);
	
	switch (Select) {
		case 1 :
			Total = Number1 + Number2;
			printf("Total of Addition : %d\n" , Total);
			break;
	
	case 2 :
			Total = Number1 - Number2;
			printf("Total of subtraction : %d\n" , Total);
			break;

	
	case 3 :
			Total = Number1 * Number2;
			printf("Total of Multiplication : %d\n" , Total);
			break;
	
	
	case 4 :
			Total = Number1 / Number2;
			printf("Total of Division : %d\n" , Total);
			break;

	default:
		printf("Invalid Select! Please Select the right number..\n");
}

return 0;

}
