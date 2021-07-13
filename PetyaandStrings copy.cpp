#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int n;
    string s1;
    string s2;

    cin>>s1;
    cin>>s2;

    for(int i=0; unsigned(i) < s1.size(); i++){
        s1[i] = toupper(s1[i]);
        s2[i] = toupper(s2[i]);
    }
    
    if( s1 < s2)
        cout<<-1<<endl;
    else if (s1 > s2)
        cout << 1<<endl;
        else
        cout<<0<<endl;
    
    return 0;
}