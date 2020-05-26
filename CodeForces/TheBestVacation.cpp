
#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
    int n,x;
    scanf("%d %d",&n,&x);
    int day[n];
    for(int i = 0; i < n; i++)
        scanf("%d",&day[i]);

    int maximo = 0;
    int local;

    // Usa os x dias das ferias
        int k = 0;
        int d0 = 0;
        local = 0;
        int ii = 0;
        int jj = 0;
        int ll = 0;
        for(int i = 0, l = 0; l < 2*n; i=(i+1)%n, l++){
            for(int j = 0; j < day[i]; j++){
                local += j+1;
                local -= d0;
                k++;
                // cout<<setw(3)<<j+1;
                // cout<<setw(3)<<j+1<<"("<<d0<<")";
                if(k>=x){
                    if(maximo < local)
                        maximo = local;
                    d0 = jj+1;
                    jj=jj+1;
                    if(!(jj < day[ii])){
                        ii=(ii+1)%n;
                        jj = 0;
                    }
                }
            }
        }
        // cout<<endl;
    
    cout<<maximo<<endl;
    return 0;
}