#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

bool isEven(int n){
    return !(n%2);
}

double median(vector<int> v, int n){
    int xa = n/2-1;
    int xb = n/2;
    if(isEven(n))
        return double(v[xa]+v[xb])/2.0;
    else
        return double(v[xb]);
    
}

double medianL(vector<int> v, int c){
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

double medianR(vector<int> v, int c){
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
    vector<int> f;
    vector<int> sequence;
    cin>>n;
    x.resize(n);
    f.resize(n);
    for(int i=0; i < n; i++)
        cin>>x[i];
    for(int i=0; i < n; i++)
        cin>>f[i];

    for(int i=0; i < n; i++)
        for(int j = 0; j < f[i]; j++)
            sequence.push_back(x[i]);

    sort(sequence.begin(),sequence.end());

    cout<<setprecision(1)<<fixed<<medianR(sequence,sequence.size()) - medianL(sequence,sequence.size())<<endl;
         
    return 0;
}
