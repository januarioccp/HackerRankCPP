#include <bits/stdc++.h>
#include <utility>

using namespace std;

// Complete the substrCount function below.
long substrCount(int n, string s) {
    long ans = 0;
    long count = 0;
    char cur = '0';
    vector<pair<char,long>> l;

    // Contar a quantidade de caracteres consecutivos
    for(int i =0; i < n; i++){
        if(s[i] == cur)
            count+=1;
        else{
            if(cur != '0')
                l.push_back(make_pair(cur, count));
            cur = s[i];
            count = 1;
        }
    }
    l.push_back(make_pair(cur, count));

    // Contar as combinações com caracteres iguais (n*(n+1))/2
    for(auto i : l)
       ans += (i.second * (i.second + 1)) / 2;

    // Contar as combinações to tipo x.x xx.xx
    for( unsigned i = 1; i < l.size() - 1; i++)
         if (l[i - 1].first == l[i + 1].first && l[i].second == 1)
             ans += min(l[i - 1].second, l[i + 1].second);

    return ans;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    long result = substrCount(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
