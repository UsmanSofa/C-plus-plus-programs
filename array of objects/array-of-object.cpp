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
    static int totalStudents;

public:
    Student(){
        totalStudents++;
    }
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
    static int getTotalStudents(){
        return totalStudents;
    }
};
int Student::totalStudents = 0;
int main()
{
    int n;
    cout << "Enter The Number of Objects: " << endl;
    cin >> n;
    Student students[n];
    for(int i = 0; i < n;i++){
        students[i].setData();
    }
    cout << "Students Details: " << endl << endl;
    for(int i = 0; i < n; i++){
        students[i].getData();
    }
    cout << "Total Students Are: " <<  endl << Student::getTotalStudents() << endl;

         return 0;
}