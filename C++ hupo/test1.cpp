#include<iostream>
#include<cmath>
using namespace std;

class Point{
    private:
        int x;
        int y;

    public:
        Point(int X,int Y){
            x=X;
            y=Y;
        }
    friend class Line;
};

class Line{
    private:
        Point sp; //start point
        Point ep; //end point

    public:
        Line (Point P1,Point P2):sp(P1),ep(P2){
        }
        double len() const{
            double d = sqrt( (sp.x-ep.x)*(sp.x-ep.x) + (sp.y-ep.y)*(sp.y-ep.y) );
            return d;
        };
};

int main(){
    Point p1(1,1),p2(5,6);
    Line li(p1,p2);
    cout << "Line len = " << li.len() << endl;
    return 0;
}
