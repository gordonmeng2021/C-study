#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    // get user input
    int inputNumber;
    while (true) {
        cout << "Enter a non-negative integer number: ";
        if(cin >> inputNumber){
            if (inputNumber >= 0){
                break;
            }
        }
        // use cin.clear() and cin.ignore() to recover and clean the current input to require user input again.
        // if you are interested you can refer to https://www.quora.com/Can-you-explain-cin-ignore-and-cin-clear-for-C-When-is-it-appropriate-to-use-these-How-do-they-affect-the-next-cin.
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid input, it is either non-integer, negative, or out of int type boundary." << endl;
        cout << "please re-enter." << endl;
    }       

    // use a loop and '/' operator to get the number of digits of input number
    int numOfDigits = 0;
    int num = inputNumber;
    while(num > 0)
    {
        ++numOfDigits;
        num /= 10; 
    }

    // total number of substring of a string of length n: n*(n+1)/2
    int numOfTotalSubstr = (numOfDigits * (numOfDigits + 1)) / 2;

    // check divisibility, and log related information to terminal
    cout << inputNumber << " is divisible by its substrings:" << endl;
    cout << "---------------------------" << endl;

    int totalCount = 0;

    for(int j=numOfDigits;j>0;j--){
        // cout<<pow(10,j)<<endl;
        int a=pow(10,j);
        int b=inputNumber%a;
        if(b!=0 && inputNumber%b==0 ){
        cout<<b<<endl;
        totalCount ++;
        }
        

        for(int k=1;k<numOfDigits;k++){
        int c = b/pow(10,k);
        if (c!=0 && inputNumber%c==0 ){
            cout<<c<<endl;
            totalCount ++;
        }     
        }
    }

    cout << "---------------------------" << endl;
    cout << inputNumber << " is divisible by " << totalCount << " of its total " << numOfTotalSubstr << " substrings." << endl;

    return 0;
}