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
    int n;
    cout << "Enter Number of Objects You wanted to create: ";
    cin >> n;
    Student students[n];
    for(int i = 0; i < n;i++){
        students[i].setData();
    }
    cout <<"Students Details" << endl << endl;

    for(int i = 0;i < n;i++){
        students[i].getData();
        cout << endl;
    }
         return 0;
}