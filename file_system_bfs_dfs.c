
#include <stdio.h>

#define MAX 20

int graph[MAX][MAX];
int visited[MAX];
int queue[MAX];
int n, front, rear;

// Breadth First Search
void BFS(int start, int target)
{
    int i, found = 0;

    for (i = 0; i < n; i++)
        visited[i] = 0;

    front = rear = 0;
    queue[rear++] = start;
    visited[start] = 1;

    printf("\nBFS Traversal: ");

    while (front < rear)
    {
        int current = queue[front++];
        printf("%d ", current);

        if (current == target)
            found = 1;

        for (i = 0; i < n; i++)
        {
            if (graph[current][i] == 1 &&
                visited[i] == 0)
            {
                queue[rear++] = i;
                visited[i] = 1;
            }
        }
    }

    if (found)
        printf("\nFile found using BFS.\n");
    else
        printf("\nFile not found using BFS.\n");
}

// Depth First Search
void DFS(int current, int target, int *found)
{
    int i;

    visited[current] = 1;
    printf("%d ", current);

    if (current == target)
        *found = 1;

    for (i = 0; i < n; i++)
    {
        if (graph[current][i] == 1 &&
            visited[i] == 0)
        {
            DFS(i, target, found);
        }
    }
}

int main()
{
    int i, j, start, target;

    printf("Enter number of files/directories: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &graph[i][j]);
        }
    }

    printf("Enter starting node (0 to %d): ", n - 1);
    scanf("%d", &start);

    printf("Enter file/node to search (0 to %d): ", n - 1);
    scanf("%d", &target);

    if (n <= 0 || n > MAX ||
        start < 0 || start >= n ||
        target < 0 || target >= n)
    {
        printf("Invalid input.\n");
        return 1;
    }

    BFS(start, target);

    for (i = 0; i < n; i++)
        visited[i] = 0;

    {
        int found = 0;

        printf("\nDFS Traversal: ");
        DFS(start, target, &found);

        if (found)
            printf("\nFile found using DFS.\n");
        else
            printf("\nFile not found using DFS.\n");
    }

    return 0;
}
