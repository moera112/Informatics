#include <iostream>

using namespace std;

int main() {

    int n, m;

    cin >> n >> m;

    cout << (n - m % n) % n << std::endl;

    return 0;
}
