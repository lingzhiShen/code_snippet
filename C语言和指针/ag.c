#include <stdio.h>
#include <stdlib.h>

int visit(int, int);

int maze[7][7]={{2, 2, 2, 2, 2, 2, 2},
                {2, 0, 0, 0, 0, 0, 2},
                {2, 0, 2, 0, 2, 0, 2},
                {2, 0, 0, 2, 0, 2, 2},
                {2, 2, 0, 2, 0, 2, 2},
                {2, 0, 0, 0, 0, 0, 2},
                {2, 2, 2, 2, 2, 2, 2}};

int startI = 1, startJ = 1;
int endI = 5, endJ = 5;
int success = 0;

int main(void)
{
    int i, j;

    printf("Display : \n");
    for (i = 0; i < 7; ++i)
    {
        for (j = 0; j < 7; ++j)
        {
            if (maze[i][j] == 2)
                printf("#");
            else
                printf("O");
        }
        printf("\n");
    }

    if (visit(startI, startJ) == 0)
    {
        printf("\n No WAY! \n");
    }
    else
    {
        printf("\n Display Way: \n");
        for (i = 0; i < 7; ++i)
        {
            for (j = 0; j < 7; ++j)
            {
                if (maze[i][j] == 2)
                {
                    printf("#");
                }
                else if (maze[i][j] == 1)
                {
                    printf("+");
                }
                else
                {
                    printf("O");
                }
            }
            printf("\n");
        }
    }
    return 0;
}

int visit(int i, int j)
{
    maze[i][j] = 1;

    if (i == endI && j == endJ)
        success = 1;

    if (success != 1 && maze[i][j+1] == 0)
        visit(i, j+1);
    if (success != 1 && maze[i+1][j] == 0)
        visit(i+1, j);
    if (success != 1 && maze[i][j-1] == 0)
        visit(i, j-1);
    if (success != 1 && maze[i-1][j] == 0)
        visit(i-1, j);

    if (success != 1)
        maze[i][j] = 0;

    return success;
}
