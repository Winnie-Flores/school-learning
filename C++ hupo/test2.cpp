#include<iostream>
#include<cmath>
using namespace std;

class Shape{
    public :
        double area(){
            return 0.0;
        };
};

class Rectangle : public Shape{
    private:
        double width;
        double height;
    public:
        Rectangle(double Width,double Height){
            width = Width;
            height = Height;
        }
        double area(){
            double Area = width * height;
            return Area;
        }
        bool operator==(Rectangle R2){
            if (this->width==R2.width && this->height==R2.height || 
                this->width==R2.height && this->height==R2.width){
                return true;
            }else{
                return false;
            }
        }
};

class Circle : public Shape {
    private:
        double r;
    public:
        Circle(double R){
            r=R;
        };
        double area(){
            double Area = 3.1415 * r * r;
            return Area;
        }
};

int main(){
    Rectangle r1(3,5),r2(5,3),r3(5,6);
    Circle c1(3);

    cout << "Area(r1) = " << r1.area() << endl;
    cout << "Area(r3) = " << r3.area() << endl;
    cout << "The two rectanglea are " << (r1==r2?"same":"different") << endl;
    cout << "Area(c1) = " << c1.area() << endl;
    return 0;
}