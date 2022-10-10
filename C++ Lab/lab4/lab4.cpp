#include <iostream>
using namespace std;

// Maximum capacity of the queue system
const int MAX_QUEUE_LENGTH = 5;


void initialize_queue_system(int queue[]){

    for(int i=0;i<MAX_QUEUE_LENGTH;i++){
        queue[i]=0;
    }

}


bool take_a_queue_ticket(int queue[], int& next_ticket_number){
    for(int i=0;i<5;i++){
        if (queue[i]==0){
            queue[i]=next_ticket_number;
            next_ticket_number=queue[i]+1;
            
            return true;
        }
        

    }
    return false;

}


bool serve_the_first_come_customer(int queue[]){

    if(queue[MAX_QUEUE_LENGTH-1]!=0){
 
            for(int i=0;i<MAX_QUEUE_LENGTH-2;i++){
                    queue[i]=queue[i+1];
            }
            queue[MAX_QUEUE_LENGTH-2]=queue[MAX_QUEUE_LENGTH-1];
                   queue[MAX_QUEUE_LENGTH-1]=0;
                   
            return true;
        }
    else if (queue[0] != 0){



    
        for(int i=0;i<MAX_QUEUE_LENGTH;i++){
            if(i==MAX_QUEUE_LENGTH-1){
                return true;
            }
            queue[i]=queue[i+1];


        

        }



    }
    else{
        return false;
    }
}


// Given: Print the current queue info to terminal
void show_current_queue(const int queue[]){
    cout << "<-- [ ";
    for (int i = 0; i < MAX_QUEUE_LENGTH; ++i){
        cout << queue[i] << " ";
    }
    cout << "] <--" << endl;
}


int main()
{
    // A dummy queue for starting
    int queue[MAX_QUEUE_LENGTH];

    // The starting ticket number, it should start at 1 and keep increse if people take more and more tickets
    int next_ticket_number = 1;

    // Initialize the queue system
    initialize_queue_system(queue);

    // Run the real-time queue system
    while(true)
    {
        cout << "---------------------------------" << endl;
        cout << "Current waiting tickets are:" << endl;
        show_current_queue(queue);

        // Ask for user operation
        // - enter 1: customer take a ticket
        // - enter 2: serve the first-come waiting customer
        // - enter 0: exit the queue system
        int operation;
        while (true) {
            cout << "Enter an operation (1 = customer take a ticket; 2 = serve the first-come waiting customer; 0 = exit the queue system):";
            if(cin >> operation){
                if (operation >= 0 && operation <= 2){
                    break;
                }
            }
            // use cin.clear() and cin.ignore() to recover and clean the current input to require user input again.
            // if you are interested you can refer to https://www.quora.com/Can-you-explain-cin-ignore-and-cin-clear-for-C-When-is-it-appropriate-to-use-these-How-do-they-affect-the-next-cin.
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input, please re-enter." << endl;
        }    

        // run different input user operation
        if(operation == 0)
        {
            break;
        }

        switch(operation)
        {
            case 1:
            {
                // customer take a ticket
                // print operation success or failure info
                bool flag = take_a_queue_ticket(queue, next_ticket_number);
                if (flag){
                    cout << "A customer successfully takes a ticket!" << endl;
                }
                else{
                    cout << "Fail to take a ticket because even our queue is already full!" << endl;
                }
                break;
            }
            case 2:
            {
                // serve the first-come waiting customer
                // print operation success or failure info
                bool flag = serve_the_first_come_customer(queue);
                if (flag){
                    cout << "Successfully serve a customer to go and dine in!" << endl;
                }
                else{
                    cout << "Fail to serve a customer because no one is waiting in the queue!" << endl;
                }
                break;
            }
        }
    }

    cout << "The queue system close successfully!" << endl;

    return 0;
}