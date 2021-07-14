#include<iostream>
#include<regex>
#include<string>
using namespace std;

int main(){
    string task;
    cin>>task;

    for(int i = 0; i < task.size(); i++){
        task[i] = (char)tolower(task[i]);
        switch(task[i]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'y':
            task.erase(task.begin()+i);
            i--;
            break;
        default:
            task.insert((size_t)i,".");
            i++;
            break;
        }
    }
    cout<<task<<endl;
    return 0;
}
