#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int n;
    string op;
    cin>>n;
    int res = 0;
    while(n--){
        cin>>op;
        
            if(op[1]=='+')
                res++;
            if(op[1]=='-')
                res++;
        
    }
    cout<<res<<endl;
    return 0;
}