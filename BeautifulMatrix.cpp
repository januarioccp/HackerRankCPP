#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int n = 25;
    int pos[25] = { 4, 3, 2, 3 ,4,
                    3, 2, 1, 2, 3,
                    2, 1, 0, 1, 2,
                    3, 2, 1, 2, 3,
                    4, 3, 2, 3, 4};
    int x;
    for(int i=0; i < n; i++){
        cin>>x;
        if(x){
            cout<<pos[i]<<endl;
            break;
        }
    }
    
    return 0;
}