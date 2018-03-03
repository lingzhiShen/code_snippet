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

void CreateGraph(AGraph *G)
{
    int i, j, k;
    ArcNode *s;
    printf("请输入结点数和边数：（例如1,2）\n");
    scanf("%d, %d", &(G->n), &(G->e));
    getchar();

    printf("请输入结点的信息：（例如A）\n");
    for(i = 0; i < G->n; ++i)
    {
        scanf("%c", &(G->adjlist[i].data));
        G->adjlist[i].firstarc = NULL;
        getchar();
    }

    printf("请输入和边相邻的结点的编号：（例如1,2）\n");
    for(i = 0; i < G->e; ++i)
    {
        scanf("%d, %d", &j, &k);
        s = (ArcNode *)malloc(sizeof(ArcNode));
        s->nextarc = G->adjlist[k].firstarc;
        s->adjvex = j;
        G->adjlist[i].firstarc = s;
        s = (ArcNode *)malloc(sizeof(ArcNode));
        s->nextarc = G->adjlist[j].firstarc;
        s->adjvex = k;
        G->adjlist[j].firstarc = s;
    }
}

void Visit(char e)
{
    printf("--%c\n", e);
}

void DFS(AGraph *G, int v)
{
    ArcNode *p = G->adjlist[v].firstarc;
    visit[v] = 1;
    Visit(G->adjlist[v].data);

    while(p != NULL)
    {
        if(visit[p->adjvex] == 0)
            DFS(G, p->adjvex);
        p = p->nextarc;
    }
}

void traverseDFS(AGraph *G)
{
    int i;
    for(i = 0; i < G->n; ++i)
        if(!visit[i])
            DFS(G, i);
}

int main()
{
    AGraph *G = (AGraph *)malloc(sizeof(AGraph));

    CreateGraph(G);

    traverseDFS(G);

    return 0;
}
