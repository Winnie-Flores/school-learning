#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string &s){
    string::const_iterator forwardIt = s.begin();
    string::const_reverse_iterator reverseIt =s.rbegin();
    int half=s.size();
    for(int i=0;i<half;++i){
        if(*forwardIt != *reverseIt){
            return false;
        }
        ++forwardIt;
        ++reverseIt;
    }
    return true;
}

int main(){
    string s;
    cout << "input the string" << endl;
    cin >> s;
    if(isPalindrome(s)){
        cout << s << " is a palindrome." << endl;
    }else{
        cout << s << " is not a palindrome." << endl;
    }
    return 0;
}