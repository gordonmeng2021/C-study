#include <iostream> 
#include <cstring>
using namespace std;

struct Student_Record
{
    char name[10];
    int id;
    char gender;
    /* data */
};

Student_Record sr[] = {
{ "Adam", 12000, 'M' },
{ "Bob", 11000, 'M'},
{ "Cathy", 10000, 'F'}
};

// int a[]={1,2,3,4,5,6,7,8,9};
int a[9];

// int len(int list){
//     int a;
//     a = end(list)-begin(list);
//     return a;
// }

int main(){

    Student_Record x = {"Sam",1232,'M'};
    cout.width(5);
    cout<<"name :"<<x.name<<endl;
    cout.width(5);
    cout<<"id :"<<x.id<<endl;
    cout.width(5);
    cout<<"gender :"<<x.gender<<endl;

    // find length of array
    int a[9];
    int b  = sizeof(a)/sizeof(*a);
    // find length of array2
    cout<<"the size of array"<< (end(a)-begin(a))<<endl;

    cout<< len(a)<<endl;
    cout<<sizeof(sr)<<endl;
    cout<<sizeof(*sr);
}