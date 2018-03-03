#include <stdio.h>

#define MaxSize 50

typedef struct ArcNode{
    int adjvex;
    struct ArcNode *nextarc;
    int info;
}ArcNode;

typedef struct VNode{
    char data;
    ArcNode *firstarc;
}VNode;

typedef struct{
    VNode adjlist[MaxSize];
    int n, e;
}AGraph;

int visit[MaxSize];

void CreateGraphAL(AGraph *G)
{
    int i, j, k;
    ArcNode *s;
    printf("请输入顶点数和边数(输入格式为:顶点数,边数)：\n");
    scanf("%d %d", &(G->n), &(G->e));
    getchar();
    printf("请输入顶点信息(输入格式为:顶点号<CR>)每个顶点以回车作为结束: \n");
    for(i = 0; i < G->n; ++i)
    {
        scanf("%c", &(G->adjlist[i].data));
        getchar();
        G->adjlist[i].firstarc = NULL;
    }

    printf("请输入边的信息(输入格式为:i,j)：\n");
    for(k = 0;k < G->e; k++)
    {
        scanf("%d, %d", &i, &j);
        s = (ArcNode *)malloc(sizeof(ArcNode));
        s->adjvex = j;
        s->nextarc = G->adjlist[i].firstarc;
        G->adjlist[i].firstarc = s;
        s = (ArcNode *)malloc(sizeof(ArcNode));
        s->adjvex = i;
        s->nextarc = G->adjlist[j].firstarc;
        G->adjlist[j].firstarc = s;
    }
}

void Visit(char a)
{
    printf("%c\n", a);
}

void DFS(AGraph *G, int v)
{
    ArcNode *p = G->adjlist[v].firstarc;
    visit[v] = 1;
    //Visit(v);
    Visit(G->adjlist[v].data);

    while(p != NULL)
    {
        if(visit[p->adjvex] == 0)
            DFS(G, p->adjvex);
        p = p->nextarc;
    }
}

void DFSTraverse(AGraph *G)
{
    int i;
    for(i = 0; i < G->n; ++i)
        if(!visit[i])
            DFS(G, i);
}

int main()
{
    AGraph G;
    CreateGraphAL(&G);

    DFSTraverse(&G);

    return 0;
}
