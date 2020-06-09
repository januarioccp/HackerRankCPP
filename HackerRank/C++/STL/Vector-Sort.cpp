#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    // Declarations
    int n;
    vector<int> v;

    // Initialization
    cin>>n;
    v = vector<int>(n);

    // Read input
    for(auto &i:v)
        cin>>i;

    // Sort
    sort(v.begin(),v.end());

    // Print output
    for(auto i:v)
        cout<<i<<" ";

    // Terminate
    return 0;

}

