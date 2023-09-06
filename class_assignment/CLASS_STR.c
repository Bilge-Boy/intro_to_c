#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/* per ver
char* ReturnLastWord(char* sen) {
	int i = 0,counter = 0;
	while (*(sen + i) != '\0') {
		if (*(sen + i) == ' ') {
			//counter++;
		}
		i++;
	}
	while (*(sen + i) != ' ')
	{
		//putchar(*(sen + i));
		counter++;
		i--;
	}
	int loop = 0;
	char* lastWord = (char *)malloc(counter * sizeof(char));
	for (i + 1; i < strlen(sen); i++) {
		*(lastWord + loop) = *(sen + i);
		loop++;
	}
	//printf("%d", counter);
	puts(lastWord);
	return lastWord;
}

void main() {
	char sen[] = "hello from main";

	ReturnLastWord(sen);
}*/


// lec ver 
//#define SIZE 100;
//char* LastWord(char * sent) {
//	char* lastWord, * p, * q;
//	for (p = sent + strlen(sent) + 1; *(p) != ' ' && p >= sent; p--);
//	lastWord = (char*)malloc(sent + strlen(sent) - p);
//	for (p++,q=lastWord; *p != '\0'; p++,q++)
//	{
//		*q = *p;
//	}
//	*q = '\0';
//	return lastWord;
//}
//
//void main() {
//	char sent[] = "hgiuehrg werg last";
//	char* lastword = LastWord(sent);
//	puts(lastword);
//}
//#define SIZE 100
//void main() {
//	char s1[SIZE], s2[SIZE], s3[SIZE];
//	puts("enter first name");
//	gets(s1);
//	puts("enter last name");
//	gets(s2);
//	strcpy_s(s3, SIZE, s1);
//	strcat_s(s3, SIZE, " ");
//	strcat_s(s3, SIZE, s2);
//	puts(s3);
//
//}

typedef struct {
	char name[21], breed[31], gender;
	int age;
} Dog;
typedef struct {
	char name[21], breed[31], gender;
	int age;
} Dog;

void PrintDog(Dog d) {
	printf("Dog:{\n\tName:%s,\n\tBreed:%s,\n\tGender:%c, \n\tAge:%d\n}",d.name,d.breed,d.gender,d.age);
}
void ReadDog(Dog* d) {
	puts("Enters Dogs Name");
	gets(d->name);
	puts("Enters Dogs Breed");
	gets(d->breed);
	puts("Enters Dogs gender (m/f)");
	d->gender = getchar();
	puts("Enters Dogs age");
	scanf_s("%d", &d->age);

}
int IsMatch(Dog d1, Dog d2) {
	if (strcmp(d1.breed, d2.breed) == 0
		&& d1.gender != d2.gender
		&& d1.age >= 2
		&& d2.age >= 2
		&& abs(d1.age - d2.age) <= 2)
		return 1;
	return 0;
}
void main() {
	Dog d1, d2 = { "oscar","boston",'m',7 }, d3;
	d3 = d2;
	puts("\nFirst (d2)");
	//PrintDog(d2);
	puts("\nSecond (d3)");
	//PrintDog(d3);
	ReadDog(&d1);
	puts("\nThird (d2)");
	//PrintDog(d1);
	if (IsMatch(d1, d2) == 1)
		printf("%s and %s can be couple",d1.name, d2.name);
	else
		printf("%s and %s can *not* be couple",d1.name, d2.name);

}