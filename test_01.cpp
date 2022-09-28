#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stdio.h>
#include<string.h>
//int main()//  字符串打印
//{
//    std::cout << "Hello World!\n";
//    char arr1[] = "abc";
//    char arr2[] = { 'a','b','c','\0'};
//    printf("%d\n", strlen(arr1));
//    printf("%d\n", strlen(arr2));
//    printf("%s\t%c\n", "\"",'\'');
//    printf("%d\n", strlen("c:\test\32\test.c"));
//    return 0;
//}

//int main() {  //  条件判断
//	int input = 0;
//	printf("想致富先撸树！\n");
//	printf("好好学习么？（1/0）>:");//1：好offer  2：卖红薯
//	scanf("%d", &input);
//	if (input == 1)
//		printf("拿到好offer");
//	else
//		printf("回家卖红薯");
//
//	return 0;
//}

//int main() {  //遍历数组
//	int i = 0;
//	//int arr[2] = { 7,9 };
//	int arr[10];
//	while (i <= 9) {
//		arr[i] = i+1;
//		printf("%d ",arr[i]);
//		i++;
//	}
//	printf("\n--------------------\n");
//	int j = 0;
//	while (j <10) {
//		printf("%d ", arr[j]);
//		j++;
//	}
//	printf("\n--------------------\n");
//	printf("%d\n", arr[4]);
//	return 0;
//}

//int main() {//sizeof  计算的是变量类型所占的空间的大小
//	int a = 10;
//	
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}

//int main() {//强制转化  
//	int a = (int)3.14;
//	double b = (double)3;
//	printf("%d\n", a);
//	printf("%f\n", b);
//	return 0;
//}

//int main() {//三元运算符
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);
//	printf("%d\n", max);
//	return 0;
//}


//调用Add函数进行int整数求和
/*
static修饰局部变量
改变了局部变量的生命周期变长
static修饰全局变量
改变了变量的作用域 --让静态的全局变量只能在自己所在的源文件内部可以使用，出了源文件就没办法再使用了
static修饰函数
改变了函数的作用域--不准确
static修饰函数改变了函数的链接属性
外部链接属性->内部链接属性

*/
//extern int Add(int, int);//声明外部函数
//int main() {
//	int sum = Add(10, 20);
//	printf("相加为：%d", sum);
//	return 0;
//}

//定义宏
//#define Max(x,y) x>y?x:y;
//int main() {
//	int a = 20;
//	int b = 30;
//	int max = Max(a, b);
//	printf("较大数为：%d", max);
//
//	return 0;
//}


//取地址
int main() {
	int a = 10;
	printf("%p\n", &a);
	char ch = 'a';
	char *pc=&ch;
	*pc = 'A';
	printf("此时ch为：%c\n",ch);
	printf("%p\n", *pc);
	printf("%d\n", sizeof(pc));
	//000000B9DAB4F534
	return 0;
}