#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int global = 0;
    int local = 0;
    while(n>0){
        if(n%2)
            local++;
        else
            local = 0;
        if(global < local)
            global = local;
        n/=2;
    }
    cout<<global<<endl;
    return 0;
}
