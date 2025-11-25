#include<bits/stdc++.h>
using namespace std;

class Teacher{
/*public:
//non -parameterized
    Teacher() {
        dept = "Computer Science";
    }*/
//parameterized
public:
    Teacher(string name, string dept, string subject, double salary){
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    // copy constructor
    Teacher(Teacher &orgObj){
        cout<< "Hi I am a copy constructor..."<<endl;
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;
    }
private:
    double salary;
public:
//properties / attributes
    string name;
    string dept;
    string subject;
    //methods
    void changeDept(string newDept){
        newDept = dept;
    }
    //setter
    /*void setSalary(double s) {
    salary = s;
    }
    //getter
    double getSalary() {
        return salary;
    }*/
   void getDetails(){
    cout <<"name :" << name <<endl;
    cout <<"department :" << dept <<endl;
   }

};

int main() {
    //objects
    Teacher t1("Nevin","ComputerScience","C++",250000); 
     //constructor call
     Teacher t2(t1);     
     t2.getDetails();
    return 0;
}