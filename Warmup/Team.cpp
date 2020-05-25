#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int n;
    int resp = 0;
    int Petya, Vasya, Tonya;
    cin>>n;
    while(n--){
        cin>>Petya>>Vasya>>Tonya;
        if(Petya + Vasya + Tonya > 1)
            resp++;
    }
    
    cout<<resp<<endl;
    return 0;
}