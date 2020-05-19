#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

double mean(vector<int> &v){
    double sum = 0.0;
    for(int i=0; i < v.size(); i++)
        sum+= v[i];
    return sum/(double(v.size()));
}

double median(vector<int> &v){
    int n = v.size();
    int x1 = (n/2)-1;
    int x2 = (n/2);
    return (v[x1]+v[x2])/2.0;
}

int mode(vector<int> &v){
    vector<int> count;
    count.resize(100001);
    fill(count.begin(),count.end(),0);
    
    for(int i=0; i < v.size(); i++)
        count[v[i]]++;

    int larger = 0;
    for(int i=0; i < count.size(); i++)
        if(count[i] > count[larger])
            larger = i;
    
    return larger;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    int aux;
    vector<int> v;


    cin>>n;
    for(int i=0; i < n; i++)
    {
        cin>>aux;
        v.push_back(aux);
    }
    sort(v.begin(),v.end());

    cout<<setprecision(1)<<fixed<<mean(v)<<endl;
    cout<<setprecision(1)<<fixed<<median(v)<<endl;
    cout<<setprecision(1)<<fixed<<mode(v)<<endl;


    return 0;
}

