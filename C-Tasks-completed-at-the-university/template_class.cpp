/*Создайте шаблонный класс на произвольную тематику как минимум с 3мя методами.*/
#include<iostream>
#include<cmath>
using namespace std;
template <typename T>
class Point
{
public:
    Point()
    {
        x1 = 0;
        y1 = 0;
 
        x2 = 0;
        y2 = 0;
 
        x3 = 0;
        y3 = 0;
    };
    Point(T x1, T y1, T x2, T y2, T x3, T y3)
    {
        this->x1 = x1;
        this->y1 = y1;
        
        this->x2 = x2;
        this->y2 = y2;
 
        this->x3 = x3;
        this->y3 = y3;
    };
    void SquareTriangle()
    {
        T Square;
        Square = 0.5 * (((x1 - x3)*(y2 - y3)) - ((y1 - y3)*(x2 - x3)));
        if (Square < 0)
            Square *= -1;
        cout << " Square = " << Square << endl << endl;
    }
    void LengthSidesAndPerimetr()
    {
        long double lengthAB, lengthBC, lengthAC, Perimetr;
        lengthAB = sqrt(pow((x2 - x1),2) + pow((y2 - y1), 2));
        lengthBC = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
        lengthAC = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
        cout << " AB = " << lengthAB << " BC = " << lengthBC << " AC = " << lengthAC << endl << endl;
        Perimetr = lengthAB + lengthBC + lengthAC;
        cout << "Perimetr = " << Perimetr << endl << endl;
    }
        
    void printpoint()
    {
        cout << " AB " << endl << " x1 = " << x1 << " y1 = " << y1 << endl << " BC " << endl << " x2 = " << x2 << " y2 = " << y2 << endl << " AC " << endl << " x3 = " << x3 << " y3 = " << y3 << endl << endl;
    }
    ~Point()
    {};
private:
    T x1;
    T y1;
    T x2;
    T y2;
    T x3;
    T y3;
};
 
int main()
{
    Point <int> p (7, 7, 5, 3, 2, 1);
    p.SquareTriangle();
    p.LengthSidesAndPerimetr();
    p.printpoint();
    Point <double> pq(7.5, 8.1, 5.6, 7.6, 5.9, 4.5);
    pq.SquareTriangle();
    pq.LengthSidesAndPerimetr();
    pq.printpoint();
}
