#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    string input;
    cin>>input;
    sort(input.begin(),input.end());
    int n = input.size();
    for(int j = n/2; j < n;j++){
        cout<<input[j];
        if(j < n-1)
            cout<<'+';
    }
    cout<<endl;
    
    return 0;
}