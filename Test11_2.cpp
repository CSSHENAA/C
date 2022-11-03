#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>


//二叉树的存储结构，一个数据域，2个指针域
typedef struct BiTNode
{
    char data;
    struct BiTNode* lchild;
    struct BiTNode* rchild;
}BiTNode, * BiTree;


void CreateBiTree(BiTree& T)//我在这里实现的是，二叉树的前序遍历方式创建，
{
    char ch;
    scanf("%c", &ch);
    if (ch == '#')
        T = NULL;//递归结束，建立空树
    else
    {
        T = (BiTree)malloc(sizeof(BiTNode));//生成根节点
        T->data = ch;//根节点数据域置为ch
        CreateBiTree(T->lchild);
        CreateBiTree(T->rchild);
    }
}


void PreOrderTraverse(BiTree T)//二叉树的先序遍历
{
    if (T)
    {
    printf("%c", T->data);
    PreOrderTraverse(T->lchild);
    PreOrderTraverse(T->rchild);
    }
 }


 void InOrderTraverse(BiTree T)//二叉树的中序遍历
 {
     if (T)
     {
         InOrderTraverse(T->lchild);
         printf("%c", T->data);
         InOrderTraverse(T->rchild);
     }
 }


 void PostOrderTraverse(BiTree T)//后序遍历
 {
     if (T)
     {
         PostOrderTraverse(T->lchild);
         PostOrderTraverse(T->rchild);
         printf("%c", T->data);
     }
 }


 int Depth(BiTree T)//计算二叉树的深度
 {
     int m, n;//递归计算左子树的深度记为m，递归计算右子树的深度记为n
     if (T == NULL)
         return 0; //如果是空树，深度为0，递归结束
     else
     {
          m = Depth(T->lchild);
          n = Depth(T->rchild);
          if (m > n)return(m + 1);
          else return(n + 1);
     }
 }
 int NodeCount(BiTree T)//计算二叉树的节点数
 {
     if (T == NULL) return 0;
     else
         return NodeCount(T->lchild) + NodeCount(T->rchild) + 1;
 }


 int Leafcount(BiTree T)//计算二叉树的叶节点数
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


 int Nodecount1(BiTree T)//统计度为1的节点个数
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
     printf("*********欢迎来到二叉树的基本操作**********\n");
     printf("********1:先序创建一个二叉树***************\n");
     printf("********2:先序遍历二叉树*******************\n");
     printf("********3:中序遍历二叉树*******************\n");
     printf("********4:后序遍历二叉树*******************\n");
     printf("********5:计算二叉树的深度*****************\n");
     printf("********6:计算二叉树的节点数***************\n");
     printf("********7:计算二叉树的叶节点数*************\n");
     printf("********8:计算二叉树中度为1的节点数********\n");
     printf("********0:退出系统！***********************\n");
 }
 void choose()
 {
     int choice;
     BiTree T = NULL;
     int n = 0;
     while (1)
     {
         menu();
         printf("请选择你的操作：");
         scanf("%d", &choice);
         switch (choice)
        {
         case 1:
             getchar();
             printf("请输入内容\n");
             CreateBiTree(T);
             getchar();
             break;
         case 2:
             printf("先序遍历为：\n");
             PreOrderTraverse(T);
             printf("\n");
             break;
         case 3:
             printf("中序遍历为：\n");
             InOrderTraverse(T);
             printf("\n");
             break;
         case 4:
             printf("后序遍历为：\n");
             PostOrderTraverse(T);
             printf("\n");
             break;
         case 5:
             printf("二叉树的深度：\n");
             printf("%d\n", Depth(T));
             break;
         case 6:
             printf("二叉树的节点数：");
             printf("%d\n", NodeCount(T));
             break;
         case 7:
             printf("二叉树的叶节点数：");
             printf("%d\n", Leafcount(T));
             break;
         case 8:
             printf("二叉树中度为1的节点数为：");
             printf("%d\n", Nodecount1(T));
             break;
         case 0:
             n = 1;
             break;
         default:
             printf("输入错误\n");
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
