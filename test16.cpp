#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//�������


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



//strcpy �����ַ���


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
	
//�ж������ϴ�ֵ


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

//��������  ��װ
//void Swap(int a, int b) {
//	int tmp = 0;
//	tmp = a;
//	a = b;
//	b = tmp;
//}
//void Swap1(int* pa, int* pb) {
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main() {
//	int a = 10;
//	int b = 20;
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	//Swap(a,b);
//	Swap1(&a, &b);
//	/*int tmp = 0;
//	tmp = a;
//	a = b;
//	b = tmp;*/
//	printf("������a=%d b=%d\n", a, b);
//
//	return 0;
//}

//�����ַ�ת����Сд   while  ѭ��
//int main() {
//	int ch = 0;
//	
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//
//}
//	return 0;
//
//}

//forѭ��
//int main() {
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5) {
//			continue;
//		}
//		else if (i == 9) {
//			continue;
//		}
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main() {
//	for (;;) 
//	{
//		printf("hehe\n");
//	}
//
//
//
//	return 0;
//}

//�׳�
//int main(){
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d�Ľ׳�Ϊ%d\n",n, ret);
//	return 0;
//}

//1!+2!+...10!
//int main(){
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//	ret=ret * n;
////for (i = 1; i <= n; i++)
////	{
////		ret *= i;
////	}
//		sum += ret;
//	}
//
//	printf("1-10�׳˺�Ϊ��%d\n",sum);
//	return 0;
//}

//����
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//дһ�����룬��arr[]���ҵ�7
//	int i = 0;
//	int sum = 1;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i <= sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("�ҵ��ˣ��±���%d\n", i);
//			printf("����%d��\n�ҵ�%d", sum, k);
//		break;
//		}
//			sum++;
//		if (i == sz)
//			printf("�Ҳ���%d", k);
//	}
//	return 0;
//}


//���ֲ���
int main() {
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
	int left = 0;//���±�
	int right = sz - 1;//���±�
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("�ҵ��ˣ��±���%d\n", mid);
			break;
		}

	}
	if (left > right)
		printf("�Ҳ�����");

	return 0;
}