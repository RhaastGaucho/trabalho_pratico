#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int A[n][n], B[n][n], R[n][n];

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> A[i][j];

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> B[i][j];

    char op;
    cin >> op;

    if (op == 'a') { 
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                R[i][j] = A[i][j] + B[i][j];
    } else if (op == 's') { 
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                R[i][j] = A[i][j] - B[i][j];
    } else if (op == 'm') { 
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j) {
                R[i][j] = 0;
                for (int k = 0; k < n; ++k)
                    R[i][j] += A[i][k] * B[k][j];
            }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << R[i][j];
            if (j < n - 1) cout << " ";
        }
        cout << endl;
    }

    return 0;
}