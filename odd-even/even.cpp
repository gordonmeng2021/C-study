#include <iostream> /* File: even.cpp */

#include <cstdlib>
using namespace std;
/* Constant definitions */
extern int MAX_CALLS;
/* Global variable declarations */
extern int num_calls; // "extern" is a must for global variables
/* External function declarations */
extern bool odd(int); // "extern" is optional for functions
bool even(int x)
{
if (++num_calls > MAX_CALLS)
{
cout << "max #calls exceeded\n"; exit(-1);
}
return (x == 0) ? true : odd(x-1);
}