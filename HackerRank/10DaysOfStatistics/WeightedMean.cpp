#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    vector<int> x;
    vector<int> w;

    cin>>n;
    x.resize(n);
    w.resize(n);

    int sum1 = 0;
    int sum2 = 0;
    for(int i=0; i < n; i++)
        cin>>x[i];
    for(int i=0; i < n; i++)
        cin>>w[i];

    for(int i=0; i < n; i++){
        sum1 += w[i]*x[i];
        sum2 += w[i];
    }

    cout<<setprecision(1)<<fixed<<double(sum1)/double(sum2)<<endl;

    return 0;
}