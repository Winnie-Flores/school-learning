#include <iostream>
#include <list>
#include <map>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<int ,list<int>> seq;
    while (n--)
    {
        string cmd;
        cin >> cmd;
        if(cmd=="new"){
            int i;
            cin >> i;
            seq[i]=list<int>();
        }
        else if(cmd=="add"){
            int i,num;
            cin >> i >> num;
            seq[i].push_back(num);
        }
        else if(cmd=="merge"){
            int i1,i2;
            cin >> i1 >> i2;
            seq[i1].splice(seq[i1].end(),seq[i2]);
            seq[i2].clear();
        }
        else if(cmd=="unique"){
            int i;
            cin >> i;
            auto &listi=seq[i];
            listi.sort();
            listi.unique();
        }
        else if(cmd=="out"){
            int i;
            cin >> i;
            auto listi=seq[i];
            listi.sort();
            for(auto it=listi.begin();it!=listi.end();++it){
                if(it!=listi.begin())
                    cout << " ";
                cout << *it;
            }
            cout << endl;
        }
    }
    return 0;
}
