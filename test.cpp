#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
//�ṹ�� �������Ӷ���
struct Book {
	char name[20];//C���Գ������
	short price;//55
};
int main() {
	struct Book b1 = { "C���Գ������",55 };
	printf("hello word\n");
	printf("������%s\n�۸�%d\n",b1.name,b1.price);
	struct Book b2 = { "java�������",60 };
	struct Book* pb= &b2; 
	printf("������%s\n�۸�%d\n",(*pb).name, (pb)->price);
	return 0;
}
