#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//两数求和


//int Add(int a, int b) {
//	int c = a + b;
//	
//	return c;
//}
//int main() {
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d", sum);
//	return 0;
//}



//strcpy 辅助字符串


//int main() {
//	char arr1[] = "bit";
//	char arr2[20] = "###########";
//	char arr3[20]="123456789";
//	strcpy(arr2,arr1);
//	strcpy(arr2, arr3);
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
	//#include<Windows.h>
	//int main(int argc, char* argv[]) {
	//	float x, y, a;
	//	for (y = 1.5; y > -1.5; y -= 0.1) {
	//		for (x = -1.5; x < 1.5; x += 0.05) {
	//			a = x * x + y * y - 1;
	//			putchar(a * a * a - x * x * y * y * y <= 0.0 ? '*':' ');
	//		}
	//		system("color Oc");
	//		putchar('\n');
	//	}
	//	
	//	return 0;
	//}


//判断两数较大值


//double Getmax(double a, double b) {
//	if (a > b)
//		return a;
//	else
//		return b;
//}
//int main(){
//	double a = 10; 
//	double b = 20;
//	double max=Getmax(a,b);
//	printf("max=%f\n", max);
//	return 0;
//}

//两数交换  封装
void Swap(int a, int b) {
	int tmp = 0;
	tmp = a;
	a = b;
	b = tmp;
}
void Swap1(int* pa, int* pb) {
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
int main() {
	int a = 10;
	int b = 20;
	printf("交换前：a=%d b=%d\n", a, b);
	//Swap(a,b);
	Swap1(&a, &b);
	/*int tmp = 0;
	tmp = a;
	a = b;
	b = tmp;*/
	printf("交换后：a=%d b=%d\n", a, b);

	return 0;
}