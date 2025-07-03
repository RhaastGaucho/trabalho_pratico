#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int maior;
    for (int i = 0; i < n; ++i) {
        int valor;
        cin >> valor;
        if (i == 0 || valor > maior) {
            maior = valor;
        }
    }

    cout << maior << endl;
    return 0;
}