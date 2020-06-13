#include <iostream>
#include <cmath>
#include <bitset>
#include <iomanip>
#include <string>
using namespace std;

int solution(long n) 
{ 
  long maxGAP = 0;
  long GAP = 0;
  long x;

  // Localiza bit menos significativo
  for (x = 1; x <= n; x = x<<1){
    if ((x & n) != 0) 
      break;
  }

  // Percorre cada bit contando os GAPS
  for (; x <= n; x = x<<1){
    if ((x & n) == 0) 
            GAP++;
    else{
      if(maxGAP < GAP)
        maxGAP = GAP;
      GAP = 0;
    }
  }
  return maxGAP;  
} 

int main() {
  long n;
  cout<<"Digite um numero inteiro e pressione Enter: ";
  cin>>n;
  long gap = solution(n);
  string bin = bitset<32>(n).to_string();

  // Coluna n
  cout<<setw(log10(n)+2)<<"n";
  // Coluna gap
  cout<<setw((4 > log10(gap)+2 ? 4 : log10(gap)+2))<<"gap";
  // Coluna bin
  long cb = (3 > log2(n)+2) ? 3 : log2(n)+2;
  cout<<setw(cb)<<"bin"<<endl;
  
  // Valor n
  cout<<setw(log10(n)+2)<<n;
  // Coluna gap
  cout<<setw((4 > log10(gap)+2 ? 4 : log10(gap)+2))<<gap;
  // Coluna bin
  cout<<setw(cb)<<bin.substr(bin.size()-cb+1)<<endl;

  return 0;
}