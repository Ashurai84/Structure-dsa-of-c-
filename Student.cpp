
#include <iostream>
using namespace std;

 struct Student
 {
      

    int rolln , age ;
    string name;


     
    void read() {
        cout << "Enter the roll no number: ";
        cin >> rolln;
        cout << "Enter the name number: ";
        cin >> name;
        cout<<"enter your age ";
        cin>>age;

    }
 

 
    void print() {
        cout << "the name of the student: "<<name<<" and the roll number is: " <<rolln<< " with the age of "<<age<<endl;
    }
};

int main() {
    // Student A = {101, 32,"ABC",};  // int in main only  , sequunece is important 
    // Student s; // read from struct
    // s.read();
    Student A = {32}; // this is  a garbage value 
    A.print();
    return 0;
}
