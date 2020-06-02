#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,q,i,j,k,temp;
    cin>>n>>q;
    vector<vector<int> > a(n);
    for(i=0; i < n; i++){
        cin>>k;
        for(j=0; j < k; j++){
            cin>>temp;
            a[i].push_back(temp);
        }
    } 
    
    while(q-- > 0){
        cin>>i;
        cin>>j;
        cout<<a[i][j]<<endl;
    } 
    return 0;
}

