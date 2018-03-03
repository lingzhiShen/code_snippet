#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char TElemType;
typedef int Status;

typedef struct BiTNode{
    TElemType data;
    struct BiTNode *lchild, *rchild;
}BiTNode, *BiTree;

BiTree CreateBiTree(BiTree *T)  //先序序列创造二叉树
{
    char ch;
    scanf("%c", &ch);
    getchar();

    if(ch == '#')
        *T = NULL;
    else
    {
        if( !(*T = (BiTNode *)malloc(sizeof(BiTNode))))
            exit(1);
        (*T)->data = ch;
        CreateBiTree(&((*T)->lchild));
        CreateBiTree(&((*T)->rchild));
    }

    return NULL;
}

Status visit(TElemType e)
{
    printf("%c ", e);

    return 0;
}

Status InOrderTraverse(BiTree T, Status (*visit)(TElemType e))
{
    if(T != NULL)
    {
        InOrderTraverse(T->lchild, visit);
        visit(T->data);
        InOrderTraverse(T->rchild, visit);
    }

    return 0;
}

int main(int argc, char *argv)
{
    //BiTNode root;
    BiTree T;// = &root;

    CreateBiTree(&T);
    InOrderTraverse(T, visit);

    return 0;
}
