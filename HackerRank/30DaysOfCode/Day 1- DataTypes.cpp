#include <iostream>
#include <iomanip>
#include <limits>
#include <string>
using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    
    // Declare second integer, double, and String variables.
    int my_int;
    double my_double;
    string my_string = "";

    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    cin>>my_int;
    scanf("%lf\n",&my_double);
    getline(cin,my_string);
    
    // Print the sum of both integer variables on a new line.
    cout<<i+my_int<<endl;
    // Print the sum of the double variables on a new line.
    cout<<setprecision(1)<<fixed<<d+my_double<<endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout<<s<<my_string<<endl;

    return 0;
}