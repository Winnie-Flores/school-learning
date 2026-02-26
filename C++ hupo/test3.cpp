#include<iostream>
using namespace std;
//长度可变的数组
class CArray{
    private:
        static const int SIZE = 5;
        int data[SIZE];
        int len;
    public:
        CArray(){
            len=0;
        }
        
        CArray(const CArray &other){
            len = other.len;
            for(int i=0;i<len;++i) data[i]=other.data[i];
        }
        
        CArray& operator=(const CArray &other){
            if(this != &other){
                len = other.len;
                for(int i=0;i<len;++i) data[i]=other.data[i];
            }
            return *this;
        }
        void push_back(int i){
            if(len < SIZE) data[len++] = i;
            else cout << "Capacity full." << endl;
        }
        int length() const{
            return len;
        }
        
        int& operator[](int i){
            if(i<0 || i>=len){
                cout << "Index out of range." << endl;
                static int p = 0;
                return p;
            }
            return data[i];
        }
};
int main(){
    CArray a;//开始数组为空
    for(int i = 0;i<5;++i)
        a.push_back(i);
    CArray a2,a3;
    a2=a;
    for(int i=0;i<a.length();++i)
        cout << a2[i] << " ";
    cout << endl;
    a2 = a3;//a2是空的
    for(int i=0;i<a2.length();++i){
        cout << a2[i] << " ";
    }
    a[3] = 100;
    CArray a4(a);
    for(int i=0;i<a4.length();++i)
        cout << a4[i] << " ";
    cout << endl;
    return 0;
}