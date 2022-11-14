/*Создайте класс на произвольную тематику и перегрузите в нем оператор присваивания, сложения (вычитания, умножения, деления), инкремента (декремента).*/
#include<iostream>
using namespace std;
class Point
{
public:
    Point()
    {
        x = 0;
        y = 0;
    };
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    };
    void printpoint()
    {
        cout << " x = " << x << " y = " << y << endl;
    }
    Point& operator= (const Point& other)
    {
        this->x = other.x;
        this->y = other.y;
 
        return *this;
    }
    ~Point()
    {};
private:
    int x;
    int y;
};
int main()
{
    Point p;
    Point p1(5, 3);
    p = p1;
    p1.printpoint();
    p.printpoint(); 
}
