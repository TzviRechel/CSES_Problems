#include <iostream>
#include <queue>
#include <vector>

using namespace std;

vector<int> removalOrder(int n) {
    queue<int> q;
    vector<int> result;

    // Initialize the queue with children 1 to n
    for (int i = 1; i <= n; ++i) {
        q.push(i);
    }

    // Simulate the removal process
    while (q.size() > 1) {
        q.push(q.front()); // Skip the first child
        q.pop();
        result.push_back(q.front()); // Remove the next child
        q.pop();
    }

    // Add the last remaining child to the result
    result.push_back(q.front());

    return result;
}

int main() {
    int n;
    cin >> n;

    vector<int> result = removalOrder(n);
    for (int i = 0; i < result.size(); ++i) {
        if (i > 0) cout << " ";
        cout << result[i];
    }
    cout << endl;

    return 0;
}
