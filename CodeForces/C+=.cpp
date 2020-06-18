#include<iostream>
using namespace std;

int main(){

	int t;
	cin>>t;
	int a,b,n;
	while(t--){
		cin>>a>>b>>n;
		int resp = 0;
		while(a<=n || b<=n){
			if(a+b > n){
				resp++;
				break;
			}	
			if(a>b)
				swap(a,b);
			a+=b;
			resp++;
		}
		cout<<resp<<endl;
	}
	return 0;
}