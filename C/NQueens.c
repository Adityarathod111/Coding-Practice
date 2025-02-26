#include <stdio.h>
#define MAXN 20
char board[MAXN][MAXN];
int solutionCount = 0; 

int check(int row, int col, int N) {
    int i, j;

    for (i = 0; i < col; i++)
    {
        if (board[row][i])
            return 0;
    }
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j])
            return 0;
    }
    for (i = row, j = col; j >= 0 && i < N; i++, j--)
    {
        if (board[i][j])
            return 0;
    }
    return 1;
}

void solve(int col, int N) {
    if (col >= N) {
        solutionCount++;
        // printf("Solution %d:\n", solutionCount);
        // for (int i = 0; i < N; i++) {
        //     for (int j = 0; j < N; j++) {
        //         if (board[i][j])
        //             printf("Q ");
        //         else
        //             printf(". ");
        //     }
        //     printf("\n");
        // }
        // printf("\n");
        // return;
    }

    for (int i = 0; i < N; i++) {
        if (check(i, col, N)) {
            board[i][col] = 1;

            solve(col + 1, N);

            board[i][col] = 0;
        }
    }
}

int main() {
    int N;

    scanf("%d", &N);

    if (N <= 0 ) {
        return 1;
    }

    // for (int i = 0; i < N; i++)
    //     for (int j = 0; j < N; j++)
    //         board[i][j] = 0;

    solve(0, N);

    printf("%d\n", solutionCount);

    return 0;
}