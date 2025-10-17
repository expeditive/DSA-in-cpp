#include<iostream>

using namespace std;

class Student{
public:
    int rollno;
    string name;
    int marks;

    //constructor
    Student(int rollno,string name,int marks){
        this->marks=marks;
        this->name=name;
        this->rollno=rollno;
    }
};

int main(){
    Student s(69,"tejasva verma",20);

    Student *ptr = &s;

    cout<<s.name<<endl;

    (*ptr).name="aryaveer";

    cout<<s.name<<endl;

    ptr->name = "Ankit";

    cout<<s.name<<endl;

    //another way of declaring object as a pointer directly
    Student* s2 = new Student(11,"Archit patel",30);
    cout<<s2->name<<endl;
}