#include <iostream>
using namespace std;

bool isPrime(int n) {
    int div = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            div++;
        }
    }
    if (div == 2) {
        return true;
    }
    return false;
}

int main() {
    int n, i;
    cin >> n;
    i = n + 1;
    while (true) {
        if (isPrime(i)) {
            cout << i << endl;
            break;
        } else {
            i++;
        }
    }
    return 0;
}

