#include <stdio.h>

#define MAX 100 // Assuming a max size for the maze

char maze[MAX][MAX];
int visited[MAX][MAX];
int m, n;

int find_exit(int x, int y) {
    // Boundary check
    if (x < 0 || x >= m || y < 0 || y >= n) 
        return 0;
    
    // If the cell is a wall or already visited, return 0
    if (maze[x][y] == '#' || visited[x][y]) 
        return 0;
    
    // If we found the exit, return 1
    if (maze[x][y] == 'E') 
        return 1;
    
    // Mark the cell as visited
    visited[x][y] = 1;
    
    // Try moving in all four directions (up, down, left, right)
    if (find_exit(x + 1, y) || find_exit(x - 1, y) || find_exit(x, y + 1) || find_exit(x, y - 1)) 
        return 1;
    
    return 0;
}

int main() {
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; i++) 
        scanf("%s", maze[i]);
    
    int x, y;
    scanf("%d %d", &x, &y);
    
    // Initialize visited array
    for (int i = 0; i < m; i++) 
        for (int j = 0; j < n; j++) 
            visited[i][j] = 0;
    
    printf("%d\n", find_exit(x, y));
    
    return 0;
}
