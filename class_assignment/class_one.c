
////#include <stdio.h>
////#include <math.h>
////#define	ROWS 4
////#define	COLS 5
////
////float Dist(int x1, int y1, int x2, int y2) {
////	return (float)sqrt(pow((float)(x2 - x1), 2) + pow((float)(y2 - y1), 2));
////}
////
////void ReadArr(int mat[][COLS], int n)
////{
////	int i;
////	float sides[COLS], sum = 0;
////	for (i = 0; i < n; i++){
////		printf("insert x%d:\t",i+1);
////		scanf_s("%d", &mat[0][i]);
////		printf("insert y%d:\t",i+1);
////		scanf_s("%d", &mat[1][i]);
////	}
////
////	for (i = 0; i < n; i++) {
////		if (i == n - 1) {
////			sides[i] = Dist(mat[0][i], mat[1][i], mat[0][0], mat[1][0]);
////		}
////		else {
////			sides[i] = Dist(mat[0][i], mat[1][i], mat[0][i + 1], mat[1][i + 1]);
////		}
////	}
////	printf("the sides are:\n");
////	for (i = 0; i < n-1; i++) {
////		printf("%f\t", sides[i]);
////		sum += sides[i];
////	}
////	printf("the perimiter is:%f\n",sum);
////
////}
////void PrintArr(int arr[][COLS], int n) {
////	for (int i = 0; i < ROWS; i++)
////	{
////		for (int j = 0; j < n; j++)
////		{
////			printf("%d\t", arr[i][j]);
////		}
////		printf("\n");
////	}
////}
////
////void SwapMatRows(int mat[][COLS]) {
////	int x = 0;
////	for (int i = 0; i < ROWS; i++) {
////		for (int j = 0; j < COLS; j++) {
////			printf("%d\t", mat[i][j]);
////		}
////		printf("\n");
////	}
////	for (int i = 0; i < ROWS / 2; i++) {
////		for (int j = 0; j < COLS; j++) {
////			x = mat[i][j];
////			mat[i][j] = mat[ROWS - i - 1][j];
////			mat[ROWS - i - 1][j] = x;
////		}
////	}
////	for (int i = 0; i < ROWS; i++) {
////		for (int j = 0; j < COLS; j++) {
////			printf("%d\t", mat[i][j]);
////		}
////		printf("\n");
////	}
////
////}
////
////void main() {
////	int mat[ROWS][COLS] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20} };
////	SwapMatRows(mat);
////		
////}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
///////////POINTERS
//
//
//#include	<stdio.h>
//#define SIZE 4
//int FindMax(int arr[]) {
//	int* p,max =0;
//	max = arr[0];
//	for (p = arr+1; p < arr + SIZE; p++) {
//		if (*p > max) {
//			max = *p;
//		}
//	}
//	return max;
//}
//void InverseArray(int arr[], int b[]) {
//	int* p, * q;
//	for (p = arr + SIZE-1, q = b; p >= arr; p--,q++) {
//		*q = *p;
//	}
//}
//void PrintArr(int arr[]) {
//	for (int i = 0; i < SIZE; i++) {
//		printf("%d\t", arr[i]);
//	}
//	printf("\n");
//}
//void main() {
//	int arr[SIZE] = { 1,2,3,55 };
//	int b[SIZE];
//	//printf("MAX IS %d", FindMax(arr));
//	
//	PrintArr(arr);
//	InverseArray(arr, b);
//	PrintArr(b);
//	
//	
//	
//	/*int x = 5,y=8;
//	int *p = &x;
//	printf("p=%p",p);
//	printf("p=%d",*p);
//	(*p)++;
//	printf("x=%d",x);*/
//
//}
