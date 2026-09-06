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
    void setGRID(int g)
    {
        grid = g;
    }
    void setName(const char n[])
    {
        strcpy(name, n);
    }
    void setAge(int a)
    {
        age = a;
    }
    void setCourse( const char c[])
    {
        strcpy(course, c);
    }
    void setPercentage(float p)
    {
        per = p;
    }
    int getGRID()
    {
        return grid;
    }
    char *getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    char *getCourse()
    {
        return course;
    }
    float getPercentage()
    {
        return per;
    }
};
int main()
{
    Student s1,s2;
    s1.setGRID(101);
    s1.setName("Usman");
    s1.setAge(20);
    s1.setCourse("C++");
    s1.setPercentage(79.6);

    s2.setGRID(102);
    s2.setName("John Doe");
    s2.setAge(22);
    s2.setCourse("Python");
    s2.setPercentage(65.6);

    cout << "Student GRID: " << s1.getGRID() << endl
         << "Student Name: " << s1.getName() << endl
         << "Student Age: " << s1.getAge() << endl
         << "Student Course: " << s1.getCourse() << endl
         << "Student Percentage: " << s1.getPercentage() << endl;
    cout << endl;
    cout << "Student GRID: " << s2.getGRID() << endl
         << "Student Name: " << s2.getName() << endl
         << "Student Age: " << s2.getAge() << endl
         << "Student Course: " << s2.getCourse() << endl
         << "Student Percentage: " << s2.getPercentage() << endl;
    
         return 0;
}