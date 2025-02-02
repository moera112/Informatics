#include <iostream>
using namespace std;

int main() {
    int a, b, n;

    cin >> a;
    cin >> b;
    cin >> n;

    a *= n;
    b *= n;

    int c = b % 100;
    a += b / 100;

    cout << a << " " << c << endl;

    return 0;
}
