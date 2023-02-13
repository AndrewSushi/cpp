#include <iostream>
#include <cmath>
using namespace std;

class Point{
    public:
        int x, y;
        void move(int newX, int newY){
            x = newX;
            y = newY;
        }
        float distance(){
            float dist;
            dist = (x * x) + (y * y);
            return sqrt(dist);
        }
        float distanceBetween(Point p2){
            float distX = abs(this->x - p2.x);
            float distY = abs(this->y - p2.y);
            return sqrt((distX * distX) + (distY * distY));
        }
        string printPoint(){
            cout << "(" << x << "," << y << ")";
            return " ";
        }
};

int main(){
    Point p1;
    p1.x = 3;
    p1.y = 4;
    cout << "The distance from (0, 0), and the point " << p1.printPoint() << "is " << p1.distance() << endl;
    Point p2;
    p2.x = 5;
    p2.y = 13;
    cout << "The distance from (0, 0), and the point " << p2.printPoint() << "is " << p2.distance() << endl;
    cout << "The distance between p1 and p2 is " << p1.distanceBetween(p2) << endl;
    return 0;
}