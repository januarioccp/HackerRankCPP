/* Enter your macros here */

#define INF 99999999
#define toStr(a) "Result ="
#define io(v) cin>>v
#define FUNCTION( name, comp) void name(int &a,int &b){ a = (a comp b) ? a : b;}
#define foreach(v,i) for(int i=0; i < v.size(); i++)
int i;

#include <iostream>
#include <vector>
using namespace std;

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif 

FUNCTION(minimum, <)
FUNCTION(maximum, >)

int main(){
	int n; cin >> n;
	vector<int> v(n);
	foreach(v, i) {
		io(v)[i];
	}
	int mn = INF;
	int mx = -INF;
	foreach(v, i) {
		minimum(mn, v[i]);
		maximum(mx, v[i]);
	}
	int ans = mx - mn;
	cout << toStr(Result =) <<' '<< ans;
	return 0;

}