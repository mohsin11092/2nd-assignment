#include<stdio.h>
#include<conio.h>
void main()
{
	int number;
	
	printf("Enter a number : ");
	scanf("%d",&number);
	 
	 if(number%2 == 0){
	 	printf("You entered an Even Number ");
	 }
	 else
	 {
	 	printf("You entered an Odd number ");
	 }
	 
	 getch();
	 
	
}