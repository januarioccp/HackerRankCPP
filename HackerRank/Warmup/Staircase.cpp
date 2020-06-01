#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    
    for(int i=0; i <n; i++){
        string s;
        int v = i;
        while(v-- >=0)
            s.push_back('#');
        cout<<setw(n)<<s<<endl;
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
