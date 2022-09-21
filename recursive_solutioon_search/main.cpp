#include <iostream> /* File: switch-int-grade.cpp */
using namespace std;

const int NOT_FOUND = -1; /* File: bsearch.cpp */
int bsearch(const int data[ ], // sorted in ascending order
int first, // lower bound index
int last, // upper bound index
int value) // value to search
{
if (last < first) // Base case #1
return NOT_FOUND;
int mid = (first + last)/2;
if (data[mid] == value)
return mid; // Base case #2
else if (data[mid] > value) // Search the lower half
return bsearch(data, first, mid-1, value);
else // Search the upper half
return bsearch(data, mid+1, last, value);
}

int main(){
    int list[16] ={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    
    cout<<bsearch(list,0,15,4); 
    
}