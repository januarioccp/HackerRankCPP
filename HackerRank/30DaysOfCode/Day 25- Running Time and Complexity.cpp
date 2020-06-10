#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

vector<int> prime;

string isprime(int n){
   if(n==1)
    return "Not prime";
    bool prime = true;
    for(int i = sqrt(n); i >= 2; i--){
        if(n%i==0){
            prime = false;
            break;
        }
    }
    if(prime)
        return "Prime";
    else
        return "Not prime";
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,d;
    cin>>n;
    while(n--){
        cin>>d;
        cout<<isprime(d)<<endl;
    }
    return 0;
}

