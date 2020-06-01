#include<iostream>
using namespace std;

int main(){

    int count = 0;
    for(int i=1; i <= 6; i++)
        for(int j=1; j <= 6; j++)
        {
            if(i!=j && i+j==6)
                count++;    
        }
    cout<<count<<endl;
    return 0;
}