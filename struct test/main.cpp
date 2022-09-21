#include <cmath> // Header file for C math lib
#include <iostream> /* File: point-test.cpp */
using namespace std;

struct Point
{
    /* data do*/
    double x;
    double y;
};


/* To find the 2D Euclidean distance between 2 points */
double euclidean_distance( Point p1,Point p2)
{
double x_diff = p1.x - p2.x, y_diff = p1.y - p2.y;
return sqrt(x_diff*x_diff + y_diff*y_diff);
}
void print_point( Point p)
{
cout << '(' << p.x << ", " << p.y << ')';
}
void print_distance( Point p1, Point p2)
{
cout << "Distance between "; print_point(p1);
cout << " and "; print_point(p2);
cout << " is " << euclidean_distance(p1, p2) << endl;
}int main() /* To find the length of the sides of a triangle */
{
Point a, b, c;
cout << "Enter the co-ordinates of point A: "; cin >> a.x >> a.y;
cout << "Enter the co-ordinates of point B: "; cin >> b.x >> b.y;
cout << "Enter the co-ordinates of point C: "; cin >> c.x >> c.y;
cout << endl << "Results: " << endl;
print_distance(a, b);
print_distance(b, c);
print_distance(c, a);
return 0;
}