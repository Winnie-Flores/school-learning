#include <iostream>
using namespace std;
template<class T>
class Stack{
    private:
        T element[100];
        int size;
    public:
        Stack():size(0){};
        bool empty(){
            return this->size == 0;
        }
        T peek() const{
            if(this->size > 0)
                return this->element[this->size -1];
            else {
                cout << "Stack Empty" << endl;
                return T();
            }
        }
        void push(const T &value){
            if(this->size < 100){
                this->element[size]=value;
                ++this->size;
            }else{
                cerr << "Stack Full" << endl;
                return ;
            }
        }
        T pop(){
            if(this->size > 0)
                return this->element[--size];
            else{
                cout << "Stack empty" << endl;
                return T();
            }
        }
        int getSize(){
            return this->size;
        }
};
int main(){
    Stack<int> intStack;
    intStack.push(10);
    intStack.push(20);
    cout << "IntStack size :" << intStack.getSize() << endl;
    cout << "IntStack peek :" << intStack.peek() << endl;
    cout << "IntStack pop :" << intStack.pop() << endl;

    Stack<double> doubleStack;
    doubleStack.push(3.1415);
    doubleStack.push(9.265);
    cout << "doubleStack size :" << doubleStack.getSize() << endl;
    cout << "doubleStack peek :" << doubleStack.peek() << endl;
    cout << "doubleStack pop :" << doubleStack.pop() << endl;
    return 0;
}