#include <stdio.h>

typedef struct biTree{
    int w;
    struct buTree *lchild, *rchild;
}BiTree;

BiTree *T;

BiTree *creatTr(BiTree **pT)
{
    *pT = (BiTree *)malloc(sizeof(BiTree));
    (*pT)->w = 0;

    BiTree *a = (BiTree *)malloc(sizeof(BiTree));
    a->w = 1;
    BiTree *b = (BiTree *)malloc(sizeof(BiTree));
    b->w = 2;
    BiTree *c = (BiTree *)malloc(sizeof(BiTree));
    c->w = 3;
    BiTree *d = (BiTree *)malloc(sizeof(BiTree));
    d->w = 4;
    BiTree *e = (BiTree *)malloc(sizeof(BiTree));
    e->w = 5;
    BiTree *f = (BiTree *)malloc(sizeof(BiTree));
    f->w = 6;
    BiTree *g = (BiTree *)malloc(sizeof(BiTree));
    g->w = 7;
    BiTree *h = (BiTree *)malloc(sizeof(BiTree));
    h->w = 8;

    (*pT)->lchild = a;
    (*pT)->rchild = b;
    a->lchild = c;
    a->rchild = d;
    b->lchild = e;
    b->rchild = f;
    c->lchild = NULL;
    c->rchild = NULL;
    d->lchild = g;
    d->rchild = h;
    e->lchild = NULL;
    e->rchild = NULL;
    f->lchild = NULL;
    f->rchild = NULL;
    g->lchild = NULL;
    g->rchild = NULL;
    h->lchild = NULL;
    h->rchild = NULL;
}

void visit(int data)
{
    printf("%d\n", data);
}

void trave(BiTree *pT, int(*visit)(int))
{
    BiTree *p = pT;

    if(p != NULL)
    {
        (*visit)(p->w);
        trave(p->lchild, visit);
        trave(p->rchild, visit);
    }
}


int main()
{
    creatTr(&T);
    trave(T, visit);

    return 0;
}
