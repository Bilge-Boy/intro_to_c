#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define ROWS 4
#define LONGCOLS 5 
#define STRLEN 100
#define EMPLOYLEN 11
typedef struct {
	char name[21];
	int BirthMonth;
}Employee;
void PrintMat(int mat[][LONGCOLS]) {
	int j, i;
	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < LONGCOLS; j++) {
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
}
void RotateMat(int mat[][LONGCOLS]) {
	int j, i, temp;
	for (i = 0; i < ROWS; i++)
		for (j = 0; j < LONGCOLS / 2; j++) {
			temp = mat[i][j];
			mat[i][j] = mat[i][LONGCOLS - j - 1];
			mat[i][LONGCOLS - j - 1] = temp;
		}
	PrintMat(mat);
}

void PrintArr(int* arr, int size) {

	int i;
	for (i = 0; i < size; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n");
}
int* EvenDigits(int num,int * size) {
	int i, counter = 0, temp, * arr;
	i = num;

	while (i != 0)
	{
		//printf("%d", counter);
		temp = i % 10;
		if (temp % 2 == 0) counter++;
		i /= 10;
	}
	//printf("%d",counter);
	arr = (int*)malloc((counter) * sizeof(int));


	counter = 0;
	i = num;
	while (i != 0)
	{
		temp = i % 10;
		if (temp % 2 == 0) {
			arr[counter] = temp;
			counter++;
		};
		i /= 10;
	}
	//PrintArr(arr,counter);
	*size = counter;
	return arr;
}


char* FirstLetters(char* sent) {
	char* p, * q;//, * newArray
	int counter = 0;
	for (p = sent; *p != '\0'; p++) {
		if (*p == ' ') {
			counter++;
		}
	}
	
	counter++;
	
	q = (char*)malloc(counter + 1);
	*q = *sent;
	//puts(q);
	q++;
	for (p = sent+1; *p != '\0'; p++) {
		//putchar(*p);
		if (*(p - 1) == ' ' ) {
			*q = *p;
			//putchar(*q);
			q++;

		}
	}
	*(q) = '\0';
	return q - counter;
}

int* SecDiag(int mat[][ROWS]) {
	int i,j,*dynArr;
	dynArr = (int*)malloc(ROWS*sizeof(int));
	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < ROWS; j++) {
			if (j + i == ROWS - 1) {
				*dynArr = mat[i][j];
				dynArr++;
			}
		}
	}
	PrintArr(dynArr - ROWS,ROWS);
}
void PrintEmployeeArr(Employee workers[], int size) {
	for (int i = 0; i < size; i++)
	{
		puts(workers[i].name);
	}
}
Employee* Birthday(Employee workers[], int n, int *size) {
	Employee* birthDayEm;
	int i,counter = 0;
	for (i = 0; i < EMPLOYLEN; i++) {
		if (workers[i].BirthMonth == n) {
			counter++;
		}
	}
	birthDayEm = (Employee*)malloc(counter * sizeof(Employee));
	for (i = 0; i < EMPLOYLEN; i++) {
		if (workers[i].BirthMonth == n) {
			*birthDayEm = workers[i];
			birthDayEm++;
		}
	}
	*size = counter;
	//birthDayEm = ()
	return birthDayEm-counter;
}
void First() {
	int mat[ROWS][LONGCOLS] = { {1,2,3,4,5},{3,45,66,111,112},{6,2,44,66,6},{6,66,2,99,2} };
	puts("before");
	PrintMat(mat);
	puts("after");
	RotateMat(mat);
}

int* Seconed(int* size) {
	int num;
	puts("please enter desired number");
	scanf_s("%d", &num);
	return EvenDigits(num, size);
}

void Third() {
	char sentence[STRLEN];
	puts("enter sentence");
	gets(sentence);
	puts(FirstLetters(sentence));
}

void Forth() {
	int mat[ROWS][ROWS] = { {1,2,3,4}
							,{3,45,66,111}
							,{6,2,44,66}
							,{6,66,2,99} };
	SecDiag(mat);
}
void Fifth() {
	int emSize, m;
	puts("enter month");
	scanf_s("%d", &m);
	getchar();
	Employee em[EMPLOYLEN] = { {"michael",1},
						  {"alon",2},
						  {"uri",3},
						  {"toyota",3},
						  {"luffi",5},
						  {"nar",8},
						  {"itai",11},
						  {"abbab",12},
						  {"ahmed",9},
						  {"moshe",4},
						  {"avi",4} };
	Employee* newEm = Birthday(em, m, &emSize);
	PrintEmployeeArr(newEm, emSize);
}
void main() {
	int choise = 0,*arrSec,lengthSec;
	puts("welcome, please insert a menu item");
	while (choise != -1) {
		puts("1.invers mat");
		puts("2.find even digs in numbers");
		puts("3.find first letter in each word");
		puts("4.print second diagonal from mat");
		puts("5.print birthday employees");
		scanf_s("%d", &choise);
		switch (choise) {
			case 1:
				First();
				break;
			case 2:
				arrSec = Seconed(&lengthSec);
				PrintArr(arrSec, lengthSec);
				break;
			case 3:
				getchar();
				Third();
				break;
			case 4:
				Forth();
				break;
			case 5:
				Fifth();
				break;
			default:
				puts("best regards,\nMichael Baliasny,\nall rights reserve");
				choise = -1;
				break;
		}
	}
}