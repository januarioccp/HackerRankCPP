#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map<string,int> agenda;
    int n;
    cin>>n;
    int numero;
    string nome;
    while(n--){
        cin>>nome>>numero;
        agenda.insert(pair<string,int>(nome,numero));
    }

    while(cin>>nome){
        auto it = agenda.find(nome);
        if (it != agenda.end())
            cout<<it->first<<"="<<it->second<<endl;
        else
            cout<<"Not found"<<endl;
    }



    return 0;
}
