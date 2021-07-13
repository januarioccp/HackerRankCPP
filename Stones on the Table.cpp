#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    char last = 'A';
    int removed = 0;
    for(auto i:s){
        if(last == 'A'){
            last = i;
            continue;
        }
        if(i==last){
            removed++;
        }
        else{
            last = i;
        }
    }
    cout<<removed<<endl;

}