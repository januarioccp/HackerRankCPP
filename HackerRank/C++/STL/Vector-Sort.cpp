#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int n;
    vector<int> v;

    cin>>n;
    v = vector<int>(n);

    for(int &i:v) cin>>i;

    sort(v.begin(),v.end());

    for(int i:v) cout<<i<<" ";

    return 0;
}
