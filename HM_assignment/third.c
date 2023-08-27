#include <stdio.h>
#define	ROWS 3
#define	COLS 4

void printMenu() {
	printf("\nWELCOME\nEnterMenuItem\n*");
	printf("*\n1.inverse metrix \n*");
	printf("*\n2.bubble sorting\n*");
	printf("*\n3.find max in each matrix row\n*");
	printf("*\n4.find smallest length  between 3 pairs\n**\n");
}
void printMatrix(int matrix[ROWS][COLS]) {
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++) {
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}

}
void printArray(int arr[],int len) {
	for (int i = 0; i < len; i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
}
void Func(int mat[ROWS][COLS], int arr[ROWS]) {
	int max = 0;
	for (int i = 0; i < ROWS; i++)
	{
		max = mat[i][0];
		for (int j = 1; j < COLS; j++)
		{
			if (max < mat[i][j]) {
				max = mat[i][j];
			}
		}
		arr[i] = max;
	}
	printArray(arr, ROWS);
}
int FindShortestDist(int arr[6]) {
	int min = arr[1] - arr[0];
	int indexer = 1;
	int cordinates[3] = { arr[0] , arr[1],indexer };
	for (int i = 3; i <= 5; i = i + 2) {
		indexer++;
		if ((arr[i] - arr[i - 1]) < min) {
			cordinates[0] = arr[i-1];
			cordinates[1] = arr[i];
			cordinates[2] = indexer;
			min = arr[i] - arr[i - 1];
		}
	}
	printf("shortest distance is at pair n.%d and numbers are (%d,%d)", cordinates[2], cordinates[0], cordinates[1]);
	return cordinates[2];
}
void main() {
	int mainMatrix[ROWS][COLS] = { {1,1,2,3 },{5,8,13,21},{34,111,110,112} };
	int secMatrix[ROWS][COLS] = {0};
	int mainArray[COLS] = { 537, 18,24,1948};
	int secArray[ROWS];
	int functionArray[6] = {5,10,3,5,6,11};
	int choise = 0,temp = 0;
	while (choise != -1)
	{
		printMenu();
		scanf_s("%d", &choise);
		switch (choise){
		case 1:
			printf("matrix before inverse:\n");
			printMatrix(mainMatrix);
			for (int i = 0; i < ROWS; i++)
			{
				for (int j = 0; j < COLS; j++) {
					secMatrix[i][j] = mainMatrix[i][COLS - 1 - j];
				}
			}
			printf("matrix after inverse:\n");
			printMatrix(secMatrix);
			break;
		case 2:
			
			printf("Array before sorting:\n");
			printArray(mainArray,COLS);
			for (int i = COLS; i > 0; i--)
			{
				for (int j = 0; j < i-1; j++)
				{
					if (mainArray[j] > mainArray[j + 1]) {
						temp = mainArray[j];
						mainArray[j] = mainArray[j + 1];
						mainArray[j + 1] = temp;
					}
				}
			}
			printf("Array after sorting:\n");
			printArray(mainArray,COLS);
			
			break;
		case 3:
			printf("the matrix is:\n");
			printMatrix(mainMatrix);
			printf("the highest values in rows are:\n");
			Func(mainMatrix, secArray);
			break;
		case 4:
			printf("from the array below\n");
			printArray(functionArray,6);
			FindShortestDist(functionArray);
			break;
		default :
			choise = -1;
			break;
		}
	}
}