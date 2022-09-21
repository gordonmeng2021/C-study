#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>   
#include <iostream> /* File: switch-int-grade.cpp */
using namespace std;


int main(){
    int total = 0;
    int credit;
    char grade;
    float grade_point =0;
    float total_cre =0;

    while (true) {
       
        cout<<"No. of credits of your course (0 to stop) :";
        cin>> credit;
         if (credit ==0){
            break;
        }
        
        cout<<"Your letter grade (A, B, C, D or F) :";
        cin>> grade;
    
        
        if (grade == 'A'){
            grade_point =4;
        }
        else if (grade == 'B'){
            grade_point =3;
        } else if (grade == 'C'){
            grade_point =2;
        } else if (grade == 'D'){
            grade_point =1;
        } else if (grade == 'F'){
            grade_point =0;
        } else {
            cout<<"Invalid input ,please enter your grade again!"<<endl;
            grade_point=0;
            credit =0;
        }
        
        total_cre += credit*grade_point;
        total += credit;
        cout<<endl<<total_cre <<endl;
        cout<<endl<<total<<endl;
    }

    cout<<"Your have taken a total of "<<total<<" credits";
    cout<< endl<< " and your GPA is "<< total_cre/total;


}