#include <stdio.h>

typedef struct BiTNode{
    char data;
    struct BiTNode *lchild, *rchild;
}BiTNode, *BiTree;

int CreateBiTree(BiTree *T)
{
    char ch;
    scanf("%c", &ch);
    getchar();

    if(ch == '#')
        *T = NULL;
    else{
        if(!(*T = (BiTNode *)malloc(sizeof(BiTNode))))
            return 1;
        (*T)->data = ch;
        CreateBiTree(&((*T)->lchild));
        CreateBiTree(&((*T)->rchild));
    }
}

void visit(char c)
{
    printf("%c ", c);
}

void InOrderTraverse(BiTree T, void (*visit)(char))
{
    BiTree p = T;

    if(p != NULL)
    {
        visit(p->data);
        InOrderTraverse(p->lchild, visit);
        InOrderTraverse(p->rchild, visit);
    }
}

int main()
{
    BiTree T = NULL;

    CreateBiTree(&T);

    InOrderTraverse(T, visit);

    return 0;
}
