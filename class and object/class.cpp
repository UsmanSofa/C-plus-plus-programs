#include <iostream>
#include <cstring>
using namespace std;
class Student
{
public:
    int grid;
    char name[100];
    int age;
    char course[100];
    float per;
};
int main()
{
    Student s1;
    s1.grid = 101;
    strcpy(s1.name, "usman");
    s1.age = 20;
    strcpy(s1.course, "Python");
    s1.per = 70.9;

    cout << "Student GRID: " << s1.grid << endl
         << "Student Name: " << s1.name << endl
         << "Student Age: " << s1.age << endl
         << "Student Course: " << s1.course << endl
         << "Student Percentage : " << s1.per << endl;
    return 0;
}