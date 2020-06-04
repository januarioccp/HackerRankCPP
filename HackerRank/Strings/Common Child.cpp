#include <bits/stdc++.h>

using namespace std;

// Complete the commonChild function below.
int commonChild(string &s1, int i, string &s2, int j, vector<vector<int> > &memo) {
    if(memo[i][j]!=0)
        return memo[i][j];
    if(j==0 || i==0)
        memo[i][j] = 0;
    else{
        if(s1[i-1] == s2[j-1])
           memo[i][j] = 1 + commonChild(s1,i-1,s2,j-1,memo);
        else
           memo[i][j]=max(commonChild(s1,i-1,s2,j,memo),commonChild(s1,i,s2,j-1,memo));
    }
    return memo[i][j];
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);
    
    int n = s1.size();
    vector<vector<int> > memo;
    memo.resize(n+1);
    for(unsigned i=0; i < n+1; i++) 
        memo[i].resize(n+1,0);

    int result = commonChild(s1,n,s2,n, memo);

    fout << result << "\n";

    fout.close();

    return 0;
}

