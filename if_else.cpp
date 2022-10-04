#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//条件分支语句
//int main() {  
//	int a = 0;
//	int b = 2;
//	if (a == 1) {
//		if (b == 2)
//			printf("hehe\n"); 
//	}
//	else
//			printf("haha\n");
//	printf("helloword");
//	return 0;
//}

//输出100以内的奇数
//int main() {
//	int i = 1;
//	while (i <= 100) {
//		if (i % 2 == 1)
//			printf("%d ", i);
//		i++;
//	}
//	return 0;
//if else /  switch判断星期
//int main() {
//	int day = 0;
//	scanf("%d", &day);
//	/*if (1 == day) {
//		printf("星期一");
//	}
//	else if (2 == day) {
//		printf("星期二");
//	}
//	else if (3 == day) {
//		printf("星期三");
//	}
//	else if (4 == day) {
//		printf("星期四");
//	}
//	else if (5 == day) {
//		printf("星期五");
//	}
//	else if (6 == day) {
//		printf("星期六");
//	}
//	else if (7 == day) {
//		printf("星期日");
//	}*/
//	switch (day) {
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//    case 3:
//	    printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//	}
//	return 0;
//}
//输入输出getchar  和putchar
int main() {
	int s=getchar();
	putchar(s);

	return 0;
}