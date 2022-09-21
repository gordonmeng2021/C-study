#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>   
#include <iostream> /* File: switch-int-grade.cpp */
using namespace std;


int answer;
int p1,p2;
int main(){
    srand (time(NULL));

  /* generate secret number between 1 and 100: */
  answer = (rand() % 100) + 1;

  
    // cout<< iSecret;
    cout<< "Player 1 guessing :";
    cin >> p1;

    cout<<"Player 2 guessing : ";
    cin >>p2;
    
    if (p1 ==answer || p2 ==answer){
        if (p1==answer){
            cout<<"Player 1 win the game!";
        }
        else if (p2 ==answer){
            cout<<"Player 2 win the game!";
        }
        
    }
    else{

        if (p1 >answer){
            cout<< "P1 the answer shld be smaller than "<< p1<<endl;
        }
        else{
            cout<<"P1 the answer shld be bigger than "<<p1<<endl;
        } if (p2 > answer){
            cout<<"P2 the answer shld be smaller than "<<p2<<endl;
        
        }else{
            cout<< "P2 the answer shld be bigger than "<<p2<<endl;
        }
        
              while (true){
                cout<< "Player 1 guessing : ";
                cin>> p1;
                cout<<"PLayer 2 guessing : ";
                cin >> p2;
                if (answer == p1){
                    cout<<"Player 1 win the game !!! The answer is "<<p1<<endl;
                    break;
                }
                else if (answer == p2){
                    
                    cout<<"Player 2 win the game !!! The answer is "<<p2<<endl;
                    break;
                }
                if (answer>p1){
                    cout<< "Player 1 the nunber is bigger than "<< p1<<endl;
                }
                else{
                    cout<< "Player 1 the nunber is smaller than "<< p1<<endl;
                }
                if( answer>p2){
                    cout<<"Player 2 the number is bigger than "<<p2<<endl;

                }else{
                    cout<< "Player 2 the number is smaller than "<<p2 <<endl;
                }   
        }
    }
}

  /* initialize random seed: */
