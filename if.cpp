#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	printf("hello word\n");
	int age = scanf(" ");
	if (age < 18)
		printf("δ����\n");
	else if (age >= 18 && age <= 23)
		printf("�ѳ���\n");
	else if (age >= 23 && age <= 50)
		printf("׳��\n");
	else if (age >= 50 && age <= 90)
		printf("����\n");
	return 0;
}