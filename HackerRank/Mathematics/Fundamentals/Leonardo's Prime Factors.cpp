#include <bits/stdc++.h>

using namespace std;

vector<int> prime = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199};

/*
 * Complete the primeCount function below.
 */
int primeCount(long n) {
    /*
     * Write your code here.
     */
     unsigned long long value = 1;
     int resp = 0;
     int i = 0;
     value = value * prime[i++];
     while( value <= n){
         value = value * prime[i++];
         resp++;
     }
     return resp;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        long n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = primeCount(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

