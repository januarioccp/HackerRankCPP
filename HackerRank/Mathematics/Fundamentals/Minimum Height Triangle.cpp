#include <bits/stdc++.h>

using namespace std;

int lowestTriangle(int b, int a){
    return ceil((2.0*double(a))/double(b));
}

int main() {
    int base;
    int area;
    cin >> base >> area;
    int height = lowestTriangle(base, area);
    cout << height << endl;
    return 0;
}
