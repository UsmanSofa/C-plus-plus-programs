#include <iostream>
using namespace std;

class Student
{
private:
    int stu_id;
    char stu_name[50];
    int stu_age;
    char stu_course[50];
    char stu_city[50];
    char stu_email[50];
    char stu_college[50];

public:
    void setData()
    {
        cout << "Enter Student ID: " << endl;
        cin >> this->stu_id;
        cout << "Enter Student Name: " << endl;
        cin >> this->stu_name;
        cout << "Enter Student Age: " << endl;
        cin >> this->stu_age;
        cout << "Enter Student Course: " << endl;
        cin >> this->stu_course;
        cout << "Enter Student City: " << endl;
        cin >> this->stu_city;
        cout << "Enter Student Email: " << endl;
        cin >> this->stu_email;
        cout << "Enter College Name: " << endl;
        cin >> this->stu_college;
    }
    void getData()
    {
        cout << "Student Id: " << this->stu_id << endl
             << "Student Name: " << this->stu_name << endl
             << "Student Age: " << this->stu_age << endl
             << "Student Course: " << this->stu_course << endl
             << "Student City: " << this->stu_city << endl
             << "Student Email: " << this->stu_email << endl
             << "Student College: " << this->stu_college << endl;
    }
};

int main()
{
    int n;
    cout << "Enter Number of Record you wanna add: " << endl;
    cin >> n;
    Student students[n];
    for(int i = 0; i < n; i++)
    {
        students[i].setData();
    }
    cout << "Student Details" << endl << endl;
    for(int i = 0 ; i < n ; i++){
        students[i].getData();
        cout << endl;
    }
    return 0;
}