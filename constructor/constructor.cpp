
#include <iostream>
#include <cstring>
using namespace std;
class Student
{
private:
    int grid;
    char name[100];
    int age;
    char course[100];
    float per;

public:
    Student(int g,char n[],int a,char c[],float p){
        this->grid = g;
        strcpy(this->name,n);
        this->age = a;
        strcpy(this->course,c);
        this->per = p;
    }
    Student(){
        cout << "Default Constructor" << endl;
    }
    void getData(){
        cout << "Student GRID: " << grid << endl
         << "Student Name: " << name << endl
         << "Student Age: " << age << endl
         << "Student Course: " << course << endl
         << "Student Percentage: " << per << endl;
    }
    ~Student(){
        cout << "Code is Cleaned..!" << endl;
    }
};

int main()
{
  
    Student student1(101,"Usman",20,"Python",78.5);
    Student student2;

    cout << "Students Details: " << endl << endl;
    student1.getData();

         return 0;
}