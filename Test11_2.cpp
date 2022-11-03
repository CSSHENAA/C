#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>


//�������Ĵ洢�ṹ��һ��������2��ָ����
typedef struct BiTNode
{
    char data;
    struct BiTNode* lchild;
    struct BiTNode* rchild;
}BiTNode, * BiTree;


void CreateBiTree(BiTree& T)//��������ʵ�ֵ��ǣ���������ǰ�������ʽ������
{
    char ch;
    scanf("%c", &ch);
    if (ch == '#')
        T = NULL;//�ݹ��������������
    else
    {
        T = (BiTree)malloc(sizeof(BiTNode));//���ɸ��ڵ�
        T->data = ch;//���ڵ���������Ϊch
        CreateBiTree(T->lchild);
        CreateBiTree(T->rchild);
    }
}


void PreOrderTraverse(BiTree T)//���������������
{
    if (T)
    {
    printf("%c", T->data);
    PreOrderTraverse(T->lchild);
    PreOrderTraverse(T->rchild);
    }
 }


 void InOrderTraverse(BiTree T)//���������������
 {
     if (T)
     {
         InOrderTraverse(T->lchild);
         printf("%c", T->data);
         InOrderTraverse(T->rchild);
     }
 }


 void PostOrderTraverse(BiTree T)//�������
 {
     if (T)
     {
         PostOrderTraverse(T->lchild);
         PostOrderTraverse(T->rchild);
         printf("%c", T->data);
     }
 }


 int Depth(BiTree T)//��������������
 {
     int m, n;//�ݹ��������������ȼ�Ϊm���ݹ��������������ȼ�Ϊn
     if (T == NULL)
         return 0; //����ǿ��������Ϊ0���ݹ����
     else
     {
          m = Depth(T->lchild);
          n = Depth(T->rchild);
          if (m > n)return(m + 1);
          else return(n + 1);
     }
 }
 int NodeCount(BiTree T)//����������Ľڵ���
 {
     if (T == NULL) return 0;
     else
         return NodeCount(T->lchild) + NodeCount(T->rchild) + 1;
 }


 int Leafcount(BiTree T)//�����������Ҷ�ڵ���
 {
     if (T == NULL)  return 0;
     int cnt = 0;
     if ((!T->lchild) && (!T->rchild))
     {
         cnt++;
     }
     int leftcnt = Leafcount(T->lchild);
     int rightcnt = Leafcount(T->rchild);
     cnt += leftcnt + rightcnt;
     return cnt;
 }


 int Nodecount1(BiTree T)//ͳ�ƶ�Ϊ1�Ľڵ����
 {
     {
         int i = 0;
         if (T)
         {
             if ((T->lchild == NULL && T->rchild != NULL) || (T->lchild != NULL && T->rchild == NULL))
             {
                 i = 1 + Nodecount1(T->lchild) + Nodecount1(T->rchild);
             }
             else
             {
                 i = Nodecount1(T->lchild) + Nodecount1(T->rchild);
             }
         }
         return i;
     }
 }


 void menu()
 {
     printf("*********��ӭ�����������Ļ�������**********\n");
     printf("********1:���򴴽�һ��������***************\n");
     printf("********2:�������������*******************\n");
     printf("********3:�������������*******************\n");
     printf("********4:�������������*******************\n");
     printf("********5:��������������*****************\n");
     printf("********6:����������Ľڵ���***************\n");
     printf("********7:�����������Ҷ�ڵ���*************\n");
     printf("********8:����������ж�Ϊ1�Ľڵ���********\n");
     printf("********0:�˳�ϵͳ��***********************\n");
 }
 void choose()
 {
     int choice;
     BiTree T = NULL;
     int n = 0;
     while (1)
     {
         menu();
         printf("��ѡ����Ĳ�����");
         scanf("%d", &choice);
         switch (choice)
        {
         case 1:
             getchar();
             printf("����������\n");
             CreateBiTree(T);
             getchar();
             break;
         case 2:
             printf("�������Ϊ��\n");
             PreOrderTraverse(T);
             printf("\n");
             break;
         case 3:
             printf("�������Ϊ��\n");
             InOrderTraverse(T);
             printf("\n");
             break;
         case 4:
             printf("�������Ϊ��\n");
             PostOrderTraverse(T);
             printf("\n");
             break;
         case 5:
             printf("����������ȣ�\n");
             printf("%d\n", Depth(T));
             break;
         case 6:
             printf("�������Ľڵ�����");
             printf("%d\n", NodeCount(T));
             break;
         case 7:
             printf("��������Ҷ�ڵ�����");
             printf("%d\n", Leafcount(T));
             break;
         case 8:
             printf("�������ж�Ϊ1�Ľڵ���Ϊ��");
             printf("%d\n", Nodecount1(T));
             break;
         case 0:
             n = 1;
             break;
         default:
             printf("�������\n");
             break;
         }
         if (n == 1)
             break;
     }
 }
 int main()
 {
     choose();
     return 0;
 }
