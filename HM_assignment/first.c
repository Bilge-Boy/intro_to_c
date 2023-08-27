#include <stdio.h>

void main() {
	int choise, a, b, c, temp;
	float salary;
	printf("please choose onr item from the menu below:\n");
	printf("1. calc salary after taxes\n");
	printf("2. USD-ILS Converter\n");
	printf("3. 3 integers sorting\n");
	scanf_s("%d", &choise);
	switch (choise)
	{
	case 1:
		printf("\n please insert the salary \n ");
		scanf_s("%f", &salary);
		if (salary <= 5000) {
			printf("Salary after taxes is %.2f\n", salary);
		}
		else if (salary <= 7000) {
			printf("Salary after taxes is %.2f\n", (float)5000 + (salary - 5000) * 0.9);
		}
		else if (salary <= 10000) {
			printf("Salary after taxes is %.2f\n", (float)6800 + (salary - 7000) * 0.8);
		}
		else {
			printf("Salary after taxes is %.2f\n", (float)9200 + (salary - 10000) * 0.7);
		}
		break;

	case 2:
		printf("\n please insert the amount to convert\n ");
		scanf_s("%f", &salary);
		printf("\n please insert 1 if the amount is in ILS or 2 if in USD\n ");
		scanf_s("%d", &choise);
		if (choise == 1) {
			printf("your converted amount: %.2f$",(float)salary/3.5);
		}
		else if(choise == 2){
			printf("your converted amount: %.2f₪",(float)salary*3.5);
		}
		else {
			printf("please enter valid input");
		}
		break;
	case 3:
		printf("enter the first integer:\n ");
		scanf_s("%d", &a);
		printf("enter the second integer: \n");
		scanf_s("%d", &b);
		printf("enter the third integer: \n");
		scanf_s("%d", &c);
		if (a > b) {
			temp = b;
			b = a;
			a = temp;
		}
		if (b > c) {
			temp = c;
			c = b;
			b = temp;
		}
		if (a > b) {
			temp = b;
			b = a;
			a = temp;
		}
		printf("Integers in ascending order: %d, %d, %d\n", a, b, c);
		break;
	default:
		printf("please enter valid input");
		break;
	}
}