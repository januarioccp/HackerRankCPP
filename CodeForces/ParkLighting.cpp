#include<iostream>
#include<string>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    int t,n,m;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&m);
        cout<<ceil(double(n*m)/2.0)<<endl;
    }
    return 0;
}