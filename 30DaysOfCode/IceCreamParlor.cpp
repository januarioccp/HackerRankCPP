#include<iostream>
#include<vector>
#include<map>
#include<iomanip>
using namespace std;

vector<string> split_string(string);

int compare(pair<int,int> a,pair<int,int> b){
    if(a.first < b.first)
        return 1;
    else{
        return 0;
    }
}

// Complete the whatFlavors function below.
void whatFlavors(vector<pair<int,int> > cost, int money) {
        
    sort(cost.begin(),cost.end());

    int i = 0;
    int j = cost.size()-1;
    while(i<=j){
        if(cost[i].first+cost[j].first == money){
            if(cost[i].second < cost[j].second)
                cout<<cost[i].second<<" "<<cost[j].second<<endl;
            else
                cout<<cost[j].second<<" "<<cost[i].second<<endl; 
            return;
        }
        else
        {
            if(cost[i].first+cost[j].first < money)
                i++;
            else
                j--;
        }
    }
    cout<<"_o_"<<endl;
}

int main()
{
    int t;
    cin >> t;

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int money;
        cin >> money;
        
        int n;
        cin >> n;

        vector<pair<int,int> > cost(n);

        int sorvete;
        for(int i = 0; i < n; i++){
            cin>>sorvete;
            pair<int,int> s(sorvete,i+1);
            cost[i] = s;
        }

        whatFlavors(cost, money);
    }

    return 0;
}
