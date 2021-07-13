#include <iostream>
#include <string>
#include <vector>
using namespace std;

int comput(int a, int b, int c)
{
    return abs(a - b) + abs(a - c) + abs(b - c);
}

int main()
{
    int n;
    cin >> n;
    int minimum;
    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        minimum = INT_MAX;
        for (int i = -1; i <= 1; i++)
            for (int j = -1; j <= 1; j++)
                for (int k = -1; k <= 1; k++)
                {
                    if (comput(a + i, b + j, c + k) < minimum)
                        minimum = comput(a + i, b + j, c + k);
                }
        cout << minimum << endl;
    }
    return 0;
}