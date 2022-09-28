#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	printf("hello word\n");
	int age = scanf(" ");
	if (age < 18)
		printf("未成年\n");
	else if (age >= 18 && age <= 23)
		printf("已成年\n");
	else if (age >= 23 && age <= 50)
		printf("壮年\n");
	else if (age >= 50 && age <= 90)
		printf("老人\n");
	return 0;
}