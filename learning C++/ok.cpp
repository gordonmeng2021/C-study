#include <iostream> /* File: switch-int-grade.cpp */
using namespace std;

/* Declaration */
void info(int age, char gender = 'M');
/* Definition (Which is also Declaration) */

void swap(int& a, int& b)
{
int temp = a;
a = b;
b = temp;
}

int main()
{
int a = 3, b = 666;
swap(a, b);
cout << a << '\t' << b << endl;
return 0;
}