#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isEven(int n){
    return !(n%2);
}

int median(vector<int> v, int n){
    int xa = n/2-1;
    int xb = n/2;
    if(isEven(n))
        return (v[xa]+v[xb])/2;
    else
        return (v[xb]);
    
}

int medianL(vector<int> v, int c){
    int n;
    if(isEven(c))
        n = c/2;
    else
        n = c/2;
    vector<int> w;
    for(int i=0; i < n; i++)
        w.push_back(v[i]);
    return median(w,w.size());

}

int medianR(vector<int> v, int c){
    int n;
    if(isEven(c))
        n = c/2;
    else
        n = c/2+1;
    vector<int> w;
    for(int i=n; i < v.size(); i++)
        w.push_back(v[i]);
    return median(w,w.size());
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    vector<int> x;
    cin>>n;
    x.resize(n);

    for(int i=0; i < n; i++)
        cin>>x[i];

    sort(x.begin(),x.end());

    cout<<medianL(x,n)<<endl;
    cout<<median(x,n)<<endl;
    cout<<medianR(x,n)<<endl;
         
    return 0;
}
