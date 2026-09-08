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
    void setData(){
        cout << "Enter Your GRID: " << endl;
        cin >> grid;
        cout << "Enter Your Name: " << endl;
        cin >> name;
        cout << "Enter Your Age: " << endl;
        cin >> age;
        cout << "Enter Your Course: " << endl;
        cin >> course;
        cout << "Enter Your Percentage: " << endl;
        cin >> per;
    }
    void getData(){
        cout << "Student GRID: " << grid << endl
         << "Student Name: " << name << endl
         << "Student Age: " << age << endl
         << "Student Course: " << course << endl
         << "Student Percentage: " << per << endl;
    }
};
int main()
{

    Student s1,s2,s3,s4,s5;
    s1.setData();
    s2.setData();
    s3.setData();
    s4.setData();
    s5.setData();
    cout << "Student Details" << endl << endl;
    s1.getData();
    s2.getData();
    s3.getData();
    s4.getData();
    s5.getData();
         return 0;
}