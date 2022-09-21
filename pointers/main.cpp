#include <iostream>
using namespace std;

// int a=5;
// int *p;

int sum_of_array(int a[],int size){
    int sum=0;
    
    for(int i=0;i<size;i++){
        sum= sum+ a[i];
        
    }
    return sum;
}


// int main(){
// // int size;
// // int a[]={1,2,3,4,5,6,7,8,9,10};
// // size=sizeof(a)/sizeof(a[0]);
// // cout<<sum_of_array(a,size);

// int x = 10, y = 20;
// short a = 9, b = 99;
// cout << "x = " << x << '\t' << "address of x = " << &x << endl;
// cout << "y = " << y << '\t' << "address of y = " << &y << endl;
// cout << "a = " << a << '\t' << "address of a = " << &a << endl;
// cout << "b = " << b << '\t' << "address of b = " << &b << endl;
// return 0;

// }
// int main() {
// int x1 = 10, x2 = 20;
// int *p1 = &x1; // p1 now points to x1
// int *p2 = &x2; // p2 now points to x2
// *p1 = 5; // now x1 = 5
// *p2 += 1000; // now x2 = 1020
// *p1 = *p2; // now *p1 = *p2 = x1 = x2 = 1020, but p1 != p2
// cout<<"p1 :"<<p1<<"p2 :"<<p2<<endl;
// p1 = p2; // now p1 and p2 both point to x2
// cout<<"p1 :"<<p1<<"p2 :"<<p2;
// return 0;
// } 

// int main()
// {
// int x = 16;
// int* xp = &x; // xp --> x
// int** xpp = &xp; // xpp --> xp --> x
// int*** xppp = &xpp; // xppp --> xpp --> xp --> x
// cout << "x address = " << &x << " x = " << x << endl;
// cout << "xp address = " << &xp << " xp = " << xp
// << " *xp = " << *xp << endl;
// cout << "xpp address = " << &xpp << " xpp = " << xpp
// << " *xpp = " << *xpp << " **xpp = " << **xpp << endl;
// cout << "xppp address = " << &xppp << " xppp = " << xppp
// << " *xppp = " << *xppp << " **xppp = " << **xppp
// << " ***xppp = " << ***xppp << endl;
// return 0;
// }

int x = 5; // An int variable
int& xref = x; // A reference variable: xref is an alias of x
int* xptr = &x; // A pointer variable: xptr points to x
void xprint()
{
cout << hex << endl; // Print numbers in hexadecimal format
cout << "x = " << x << "\t\tx address = " << &x << endl;
cout << "xref = " << xref << "\t\txref address = " << &xref << endl;
cout << "xptr = " << xptr << "\txptr address = " << &xptr << endl;
cout << "*xptr = " << *xptr << endl;
}

struct Point{
    double a;
    double b;
}
(a.p)\= 

(*ap).x =3.5; 
(* ap).y = 9.7;


Point a;
Point* ap =&a;


int main()
{
x += 1; xprint();
xref += 1; xprint();
xptr = &xref; xprint(); 
// Now xptr points to xref
return 0;
}