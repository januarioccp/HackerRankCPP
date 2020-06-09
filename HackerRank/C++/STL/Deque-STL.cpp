#include <iostream>
#include <deque> 
#include <algorithm>
using namespace std;

void printKMax(int arr[], int n, int k){
	//Write your code here.
    deque<int> dq;

    for(int i=0; i < k; i++){
        dq.push_back(arr[i]);
    }

    int me = *max_element(dq.begin(),dq.end());
    cout<<me<<" ";
 
    int top;
    for(int i=k; i < n; i++){
        top = dq.front();
        dq.pop_front();
        dq.push_back(arr[i]);

        if(dq.back()>me)
            me = dq.back();
        if(top==me)
            me = *max_element(dq.begin(),dq.end());

         cout<<me<<" ";
    }
    cout<<endl;
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}

