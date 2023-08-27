#include <stdio.h>
#include <stdlib.h>
#include <string.h>




//int pointersLess() {
//	int* arr, i, temp;
//	scanf_s("%d", &temp);
//	arr = (int*)malloc((temp+1) * sizeof(temp));
//	for (i = arr; i < arr + temp; i++) {
//		scanf_s("%d", &arr[i]);
//		if(i == arr)
//			*(arr + temp)= *(arr) 
//	}
//}

//
//float Perimiter(int shape) {
//	float* arr, sum = 0;
//	int i;
//	
//	arr = (float*)malloc(shape * sizeof(float));
//	for (i = 0; i < shape; i++) {
//		scanf_s("%f",  (arr + i));
//		sum += *(arr + i);
//	}
//	return sum;
//}
//
//void main() {
//	int shape;
//	printf("insert n of shape");
//	scanf_s("%d",&shape);
//	float sum = Perimiter(shape);
//	printf("sum : %f",sum);
//}
//
//void main() {
//	int n, d, a1;
//	int* arr, i;
//	printf("welcome to arithmetic progression\n");
//	printf("insert number of index\n");
//	scanf_s("%d", &n);
//	printf("insert difference \n");
//	scanf_s("%d", &d);
//	printf("insert first number\n");
//	scanf_s("%d", &a1);
//	arr = (int*)malloc(n * sizeof(n));
//	*arr = a1;
//	for (i = 1; i <  n; i++) {
//		*(arr+i) = *(arr + i - 1) + d;
//	}
//	for (i = 0; i < n; i++) {
//		printf("%d\t", *(arr + i));
//	}
//}

#define SIZE 10
void main() {
	char arr[SIZE] = { 'a',',','b',',','c' , '\0' };
	char s1[SIZE], s2[SIZE];
	puts(arr);
	printf("length of string ['%s'] is% d\n", arr, strlen(arr));
	gets(s1);
	puts(s1);
	strcpy_s(s2,SIZE, s1);
	puts(s2);
	gets(s2);
	s2[0] -= 32;
	puts(s2);
	for (int i = 0; s2[i]!= '\0' ; i++)
	{
		puts(s2);
	}
}