#include <bits/stdc++.h>

using namespace std;

// Complete the sherlockAndAnagrams function below.
int sherlockAndAnagrams(string s) {
    int count = 0;
    for (unsigned lenght = 1; lenght < s.size(); lenght++)
        for(unsigned i=0; i < s.size(); i++){
            for(unsigned j=lenght+i; j < s.size(); j++){
                string s1,s2;
                unsigned k;
                for( k=0; k < lenght; k++){
                    s1.push_back(s[i+k]);
                    s2.push_back(s[j-k]);
                }
                sort(s1.begin(),s1.end());
                sort(s2.begin(),s2.end());
                for( k=0; k < lenght; k++)
                    if(s1[k]!=s2[k]) break;
                if(k>=lenght)
                    count++;
            }
        }
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = sherlockAndAnagrams(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

