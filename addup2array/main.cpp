#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>   
#include <iostream> /* File: switch-int-grade.cpp */
using namespace std;

int c[5];
int add(int x[],int y[],int z[],int size){
    
    for(int i=0;i<size;i++){
        z[i]=x[i]+y[i];
    }
    return 0;
}


int main(){
    int a[5];
    int b[5];

   for(int i =0;i<5;i++){
    cout<<"Enter 5 value for first array: ";
    cin>>a[i];
   }
   for(int i =0;i<5;i++){

    cout<<"Enter 5 value for second array: ";
    cin>>b[i];
   }
   add(a,b,c,5);
   for ( int i=0;i<5;i++){
    cout<< c[i] << endl;
   }
}
