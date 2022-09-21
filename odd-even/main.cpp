#include <iostream> /* File: main.cpp */


using namespace std;
/* Constant definitions */
int MAX_CALLS = 100;
/* Global variable definition */
int num_calls;
/* Function declarations */
extern bool odd(int);
bool even(int);// "extern" is optional for functions
int main()
{
int x;
while (cin >> x) // Assume x > 0
{
num_calls = 0; 
cout << boolalpha << odd(x) << endl;
cout<< boolalpha << even(x) <<endl;
}
return 0;
}