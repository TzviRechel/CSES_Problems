#include <iostream>
#include <vector>
#include <string>
using namespace std;

const int N = 7;
const int TARGET_X = 6, TARGET_Y = 0;
const int PATH_LENGTH = 48;

int dx[4] = {1, -1, 0, 0};  // Moves for Down, Up, Left, Right
int dy[4] = {0, 0, -1, 1};
char directions[4] = {'D', 'U', 'L', 'R'};

int totalPaths = 0;
bool visited[N][N];
int memo[N][N][PATH_LENGTH + 1];

// Check if the move is valid
bool isValid(int x, int y) {
    return x >= 0 && x < N && y >= 0 && y < N && !visited[x][y];
}

// Backtracking function with memoization
int backtrack(int x, int y, int step, const string &description) {
    // Base case: if we've reached the end of the path
    if (step == PATH_LENGTH) {
        return (x == TARGET_X && y == TARGET_Y) ? 1 : 0;
    }

    // Prune: if it's impossible to reach the target from here
    int remainingSteps = PATH_LENGTH - step;
    if (abs(x - TARGET_X) + abs(y - TARGET_Y) > remainingSteps) {
        return 0;
    }

    // Memoization check
    if (memo[x][y][step] != -1) {
        return memo[x][y][step];
    }

    // Mark the current cell as visited
    visited[x][y] = true;

    int pathCount = 0;

    // If the current step is '?', try all possible directions
    if (description[step] == '?') {
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (isValid(nx, ny)) {
                pathCount += backtrack(nx, ny, step + 1, description);
            }
        }
    } else {
        // Fixed direction: move in the given direction
        int dir = -1;
        for (int i = 0; i < 4; i++) {
            if (description[step] == directions[i]) {
                dir = i;
                break;
            }
        }
        int nx = x + dx[dir];
        int ny = y + dy[dir];
        if (isValid(nx, ny)) {
            pathCount += backtrack(nx, ny, step + 1, description);
        }
    }

    // Unmark the current cell as visited
    visited[x][y] = false;

    // Memoize the result
    return memo[x][y][step] = pathCount;
}

int main() {
    string description;
    cin >> description;

    // Initialize visited grid and memoization array
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k <= PATH_LENGTH; k++) {
                memo[i][j][k] = -1;
            }
            visited[i][j] = false;
        }
    }

    // Start backtracking from the top-left corner
    cout << backtrack(0, 0, 0, description) << endl;

    return 0;
}
