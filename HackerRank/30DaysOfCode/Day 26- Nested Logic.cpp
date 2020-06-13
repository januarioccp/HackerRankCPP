#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class date{
    public:
    int d, m, y;
    friend bool operator <= (date& a, date& b){
        if(a.y < b.y) return true;
        else if(a.y == b.y && a.m < b.m ) return true;
        else if(a.y == b.y && a.m == b.m && a.d <= b.d ) return true;
        else return false;
    }
};

int main() {

    date a;
    date b;

    cin>>a.d>>a.m>>a.y;
    cin>>b.d>>b.m>>b.y;
    
    if ( a <= b) cout<<0<<endl;
    else if (a.y == b.y && a.m == b.m) cout<<15 * (a.d - b.d)<<endl;
    else if (a.y == b.y) cout<<500 * (a.m - b.m) << endl;
    else cout<<10000<<endl;
    return 0;
}

