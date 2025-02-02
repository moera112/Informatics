#include <iostream>

using namespace std;

int main() {
    int a, b, c, d, e, f;

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;
    cin >> f;

    int total_seconds = 3600 * (d - a) + 60 * (e - b) + (f - c);
    cout << total_seconds << endl;

    return 0;
}
