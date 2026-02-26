#include <iostream>
#include <string>
using namespace std;

string commonChars(const string &s1,const string &s2){
    bool exist[128]={false};
    bool add[128]={false};
    string result;
    for (char c:s1){
        exist[c]=true;
    }
    for (char c :s2){
        if(exist[c] && !add[c]){
            result +=c;
            add[c] = true;
        }
    }
    return result;
}

int main(){
    string s1,s2;
    cin >> s1 >> s2;
    string result = commonChars(s1,s2);
    cout <<"the common chars are " << result << endl;
    return 0;

}