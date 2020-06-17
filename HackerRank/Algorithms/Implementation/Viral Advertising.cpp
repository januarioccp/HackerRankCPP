#include <bits/stdc++.h>

using namespace std;

// Complete the viralAdvertising function below.
int viralAdvertising(int n) {
    int Shared = 5;
    int Liked = 2;
    int Cumulative = 0;

    for(int Day = 1; Day <= n; Day++){
        Liked = Shared/2;
        Shared = (3*Liked);
        Cumulative += Liked;
    }
    return Cumulative;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = viralAdvertising(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
