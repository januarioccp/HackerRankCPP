
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int n;
    int k;
    int resp = 0;
    int s;
    
    cin>>n>>k;
    vector<int> score(n);
    for(int i=0; i < n; i++)
        cin>>score[i];

    int cut = score[k-1];

    for(int i=0; i < n; i++){
        if(score[i] >= cut && score[i] > 0)
            resp++;
    }
    
    cout<<resp<<endl;
    return 0;
}