#include<stdio.h>

int main () {
	
   int a,num,i;
   
   printf("Enter the Natural Number : ");
   scanf("%d" ,&a);
   
   if (a<1){
   	printf("This is Not Natural Number.\n");
   }
   
   
   else {
   	 printf("This is Natural Number.\n");
   }
   
   do {
   	num += i;
   	i++;
   }
   
   while (i<=a);
   
   printf("The first number of natural number is : %d",a);
}