#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    string entrada;
    cin>>n;
    int j = n;
    while(j--){
        cin>>entrada;
    
        for(int i=0; unsigned(i) < entrada.size(); i++)
            if(i%2 == 0)
                cout<<entrada[i];
        cout<<" ";
        for(int i=0; unsigned(i) < entrada.size(); i++)
            if(i%2)
                cout<<entrada[i];
        cout<<endl;
    }
    return 0;
}
