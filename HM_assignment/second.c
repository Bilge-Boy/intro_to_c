#include <stdio.h>
#include <math.h>

void main() {
	
	int choise=0, integerNum=0,roadDistance=0,temp;

	do {

		printf("\n\n\nhello and welcome\n");
		printf("please insert a number from our menu\n");
		printf("1.calculate and print the perimeter of any poligon\n");
		printf("2.calculate ETA\n");
		printf("3.print phibonacci series with custom length\n");
		printf("4.print a house with *`s \n");
		printf("5.exit\n");

		scanf_s("%d", &choise);
		switch (choise) {
		case 1:
			printf("\nplease enter the number of ribs in polygon\n");
			float floatNum, sum = 0;
			scanf_s("%d", &integerNum);
			if (integerNum <= 2) {
				printf("not polygon but ok....\n");
			}
			for (int i = 0; i < integerNum; i++) {
				printf("\nplease insert the length of rib number %d\n", i+1);
				scanf_s("%f", &floatNum);
				sum += fabs(floatNum);
			}
			printf("\nthe perimeter is %.2f\n", sum);
			sum = 0;
			integerNum = 0;
			break;
		case 2:
			printf("\nplease insert [time] [distance] to summerize the ETA, enter -1 in time when finished\n");
			int indexer = 1;
			while (1==1)
			{
				printf("\n enter time of segment %d\t", indexer);
				scanf_s("%d", &temp);
				if (temp == -1)  break;
				else integerNum += temp;
				printf("\n enter distance of segment %d\t", indexer);
				scanf_s("%d", &temp);
				roadDistance += temp;
				indexer++;
			}
			printf("\n\n\ntotal time: %d, total distance:%d\n\n\n", integerNum, roadDistance);
			integerNum = 0;
			roadDistance = 0;
			break;
		case 3 :
			printf("\n\n\nenter the final index of desired series\t");
			scanf_s("%d", &integerNum);
			int tempA = 1;
			int tempB = 1;
			
			for (int i = 0; i < integerNum; i++) {
				if (i < 2) {
					printf("%d\t", tempA);
				}
				else {
					if (i % 2 != 0) {
						tempA += tempB;
						printf("%d\t", tempA);
					}
					else {
						tempB += tempA;
						printf("%d\t", tempB);

					}
				}
			}
			break;
		case 4:
			printf("enter height (4 in minimal)");
			scanf_s("%d", &integerNum);
			if (integerNum < 4) {
				printf("invalid input, try again later");
				break;
			}
			else {
				int roof = integerNum;
				int base = integerNum * 2;
				for (int i = 0; i < base; i++) {
					for (int j = 0; j < 7; j++) {
						if (i == 0) {
							if (j != 3) {
								printf("\t");
							}
							else {
								printf("*\t");
							}
						}
						else if (i < roof-1) {
							if (i < roof / 2) {
								if (j >= 2 && j <= 4) {
									printf("*\t");
								}
								else {
									printf("\t");
								}
							}
							else {
								if (j >= 1 && j <= 5) {
									printf("*\t");
								}
								else {
									printf("\t");
								}
							}
						}
						else if (i == roof-1) {
							printf("*\t");
						}
						else {
							if (j == 0 || j == 3 || j == 6) {
									printf("\t");
							}
							else {
									printf("*\t");
							}
						}
					}
					printf("\n");
				}
			}
			break;
		case 5:
			printf("thank you and ShabbatShalom");
			break;
		default:

			printf("not an item from the menu");
			break;

		} 
	} while (choise != 5);
}