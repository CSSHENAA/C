#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
//结构体 描述复杂对象
struct Book {
	char name[20];//C语言程序设计
	short price;//55
};
int main() {
	struct Book b1 = { "C语言程序设计",55 };
	printf("hello word\n");
	printf("书名：%s\n价格：%d\n",b1.name,b1.price);
	struct Book b2 = { "java程序设计",60 };
	struct Book* pb= &b2; 
	printf("书名：%s\n价格：%d\n",(*pb).name, (pb)->price);
	return 0;
}
