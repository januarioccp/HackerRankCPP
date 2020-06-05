#include <bits/stdc++.h>

using namespace std;

// Complete the isBalanced function below.
string isBalanced(string s) {
    stack<char> pilha;

    for(char i:s){
        if(i=='(' || i=='[' || i=='{'){
            pilha.push(i);   
        }
        if(i==')' || i==']' || i=='}'){
            if(!pilha.empty()){
                if( (i==')' && pilha.top()=='(') ||
                    (i==']' && pilha.top()=='[') ||
                    (i=='}' && pilha.top()=='{')
                )
                    pilha.pop();
                else
                    return "NO";
            }
            else
                return "NO";
        }
    }
    if(pilha.empty())
        return "YES";
    return "NO";

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

