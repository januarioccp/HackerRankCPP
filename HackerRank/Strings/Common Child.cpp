#include <bits/stdc++.h>

using namespace std;

// Complete the commonChild function below.
int commonChild(string &s1, string &s2, vector<vector<int> > &C) {
    for(unsigned i=1; i <= s1.size(); i++)
        for(unsigned j=1; j <= s2.size(); j++){
            if(s1[i-1] == s2[j-1])
                C[i][j] = C[i-1][j-1] + 1;
            else
                C[i][j] = max(C[i][j-1], C[i-1][j]);
        }
    return C[s1.size()][s2.size()];
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);
    
    vector<vector<int> > memo;
    memo.resize(s1.size()+1);
    for(unsigned i=0; i < s1.size()+1; i++) 
        memo[i].resize(s1.size()+1);

    int result = commonChild(s1, s2, memo);

    fout << result << "\n";

    fout.close();

    return 0;
}
