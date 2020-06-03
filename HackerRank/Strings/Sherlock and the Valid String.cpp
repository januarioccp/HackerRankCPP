#include <bits/stdc++.h>
using namespace std;

// Complete the isValid function below.
string isValid(string s) {
    map<char,int> m;
    map<char,int> m2;

    for(auto i:s)
        m[i]++;

    int cmin = 0;
    int cmax = 0; 
    int vmin = numeric_limits<int>::max();
    int vmax = numeric_limits<int>::min(); 
    for(auto c = m.begin(); c!=m.end(); c++){
        if(c->second < vmin) vmin = c->second;
        if(c->second > vmax) vmax = c->second;
        m2[c->second]++;
    }
    for(auto c = m.begin(); c!=m.end(); c++){
        if(c->second == vmin) cmin++;
        if(c->second == vmax) cmax++;
    }

    if(vmin == vmax)
        return "YES";
    if(m2.size() > 2)
        return "NO";
    if(cmin == 1 & vmin == 1)
        return "YES";
    if(cmax == 1 & vmax - 1 == vmin)
        return "YES";
    return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
