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

    printf("Input the number of arc and node:\n");
    scanf("%d, %d", &(G->n), &(G->e));
    getchar();

    printf("Input the information of every node:\n");
    for(i = 0; i < G->n; ++i)
    {
        scanf("%c", &(G->adjlist[i].data));
        getchar();
        G->adjlist[i].firstarc = NULL;
    }

    printf("Input the nodes of every arc:\n");
    for(i = 0; i < G->e; ++i)
    {
        scanf("%d, %d", &j, &k);
        s = (ArcNode *)malloc(sizeof(ArcNode));
        s->adjvex = k;
        s->nextarc = G->adjlist[j].firstarc;
        G->adjlist[j].firstarc = s;

        s = (ArcNode *)malloc(sizeof(ArcNode));
        s->adjvex = j;
        s->nextarc = G->adjlist[k].firstarc;
        G->adjlist[k].firstarc = s;
    }
}

void Visit(char e)
{
    printf("%c\n", e);
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
    AGraph G;
    CreateGraph(&G);

    traverseDFS(&G);

    return 0;
}
