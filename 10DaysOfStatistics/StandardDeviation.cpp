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

double squareDistance(vector<int> &v){
    int m = mean(v);
    double sd = 0.0;
    for(int i=0; i < v.size(); i++){
        sd += pow(m-v[i],2);
    }
    return sd;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    vector<int> x;
    cin>>n;
    x.resize(n);
    for(int i=0; i < n; i++)
        cin>>x[i];
    
    cout<<setprecision(1)<<fixed<<sqrt(squareDistance(x)/double(n))<<endl;
    return 0;
}
