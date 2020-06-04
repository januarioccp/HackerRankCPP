#include <iostream>
#include <string>
using namespace std;

class Solution {
    //Write your code here
    public:
    // method that pushes a character onto a stack.
    void pushCharacter(char ch){
        stack.push_back(ch);
    }
    // method that enqueues a character in the queue instance variable.
    void enqueueCharacter(char ch){
        queue.push_back(ch);
    }
    // method that pops and returns the character at the top of the stack instance variable
    char popCharacter(){
        char resp = stack[stack.size()-1];
        stack.resize(stack.size()-1);
        return resp;
    }
    //method that dequeues and returns the first character in the  instance variable.
    char dequeueCharacter(){
        char resp = queue[0];
        queue.erase(queue.begin());
        return resp;
    }
    private:
        string stack;
        string queue;
};

int main() {
    // read the string s.
    string s;
    getline(cin, s);
    
  	// create the Solution class object p.
    Solution obj;
    
    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}