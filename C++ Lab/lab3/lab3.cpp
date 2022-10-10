#include <iostream>
#include <fstream>
#include <sstream>


using namespace std;

// Do not change this function. It is used for checking the lab.
void prepare_files(){
    ofstream ofs ("student_list.txt");

    if (ofs){
        ofs << 20185639 << endl;
        ofs << 22435497 << endl;
        ofs << 23143658 << endl;
        ofs << 29372413 << endl;
        ofs << 29567638 << endl;
        ofs << 29576389 << endl;
    }
}


// Do not change this function. It is used for checking the lab.
void check_final_list(){
    ifstream ifs ("student_list.txt");
    if (ifs){
        int line;
        while (ifs >> line){
            cout << line << endl;
        }
        ifs.close();
    }
}


// TODO: search for a student in the input file, student_list.txt, return true if found.
bool student_lookup(int student_id){
    ifstream ifs ("student_list.txt");
    if (ifs){
        int line;
        while (ifs >> line){
            if(line == student_id){
                return true;
            }
        }
        ifs.close();
    }
    return false;
}
void delete_student(int student_id){

    if(student_lookup(student_id)==false){
        cout << "Student " << student_id << " is not taking the course!" << endl;
        return ;        
        
    }
    ofstream outfile ("temp.txt");
    ifstream newfile ("student_list.txt"); 

    if (newfile){
        int line;
        while (newfile >> line){
            if(line == student_id){
                cout << "Student " << student_id << " is removed from the course!" << endl;
                continue;
            }
            outfile << line <<"\n";
        }
        newfile.close();
        outfile.close();
    }

    remove("student_list.txt");

    rename("temp.txt", "student_list.txt");

}

void insert_student(int student_id){

    if(student_lookup(student_id)){
        cout << "Student " << student_id << " is already taking the course!" << endl;
        return ;
    }

    ofstream newfile ("temp.txt"); 
    ifstream ifs ("student_list.txt");
    if (newfile){
        int line;
        int state=true;

        while (ifs >> line){
            if (student_id < line && state == true){
                newfile << student_id << endl;
                state = false;
                cout << "Student " << student_id << " is inserted successfully!" << endl;
            }
            newfile << line << endl;
        }
        
        ifs.close();
        newfile.close();
    }

    remove("student_list.txt");
    rename("temp.txt", "student_list.txt");
}


int main(){

    const char filename[] = "student_list.txt";
    char choice;
    int student_id;

    prepare_files();

    while (true){       

        cout << "1 for lookup; 2 for insertion; 3 for deletion; q for quit: ";
        cin >> choice;

        if (choice == '1'){
            cout << "Please enter the id of the student you want to search for: ";
            cin >> student_id;
            if (student_lookup(student_id)){
                cout << "Student " << student_id << " is found!" << endl;
            }else{
                cout << "Student " << student_id << " is not found!" << endl;
            }
        }else if (choice == '2'){
            cout << "Please enter the id of the student you want to insert: ";
            cin >> student_id;
            insert_student( student_id);
        }else if (choice == '3'){
            cout << "Please enter the id of the student you want to delete: ";
            cin >> student_id;
            delete_student(student_id);
        }else if (choice == 'q'){
            check_final_list();
            break;
        }else{
            cout << "Invalid input. Please input again." << endl;
        }
        cout << endl;
    }

    return 0;
}