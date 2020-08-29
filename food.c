#include<stdio.h>
main()
{
	printf("Pick an item: \n1. Pizza= Rs239\n2. Burger= Rs129\n3. French Fries= Rs99\n4. Sandwich= Rs149\n5. Pasta= Rs179\n");
	int choice;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Pizza= Rs 239");
			break;
			
		case 2:
			printf("Burger= Rs 129");
			break;
			
		case 3:
			printf("French Fries= Rs 99");
			break;
			
		case 4:
			printf("Sandwich= Rs 149");
			break;
			
		case 5:
			printf("Pasta= Rs 179");
			break;
	}
}
