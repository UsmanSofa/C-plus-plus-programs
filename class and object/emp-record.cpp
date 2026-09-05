#include <iostream>
#include <cstring>
using namespace std;

class Employee
{
public:
    int emp_id;
    char emp_name[100];
    int emp_age;
    char emp_role[50];
    int salary;
    char emp_city[50];
    char emp_experience[50];
    char emp_company_name[100];
};

int main()
{
    Employee emp1, emp2, emp3, emp4, emp5;

    emp1.emp_id = 101;
    strcpy(emp1.emp_name, "Usman");
    emp1.emp_age = 20;
    strcpy(emp1.emp_role, "Frontend Developer");
    emp1.salary = 12000;
    strcpy(emp1.emp_city, "Surat");
    strcpy(emp1.emp_experience, "6 Months");
    strcpy(emp1.emp_company_name, "WebInfotech");

    emp2.emp_id = 102;
    strcpy(emp2.emp_name, "Umar");
    emp2.emp_age = 21;
    strcpy(emp2.emp_role, "Backend Developer");
    emp2.salary = 20000;
    strcpy(emp2.emp_city, "Navsari");
    strcpy(emp2.emp_experience, "2 Years");
    strcpy(emp2.emp_company_name, "Silver Infolab");

    emp3.emp_id = 103;
    strcpy(emp3.emp_name, "Rehan");
    emp3.emp_age = 19;
    strcpy(emp3.emp_role, "Ui Ux Designer");
    emp3.salary = 15000;
    strcpy(emp3.emp_city, "Navsari");
    strcpy(emp3.emp_experience, "1.5 Years");
    strcpy(emp3.emp_company_name, "WebLancer");

    emp4.emp_id = 104;
    strcpy(emp4.emp_name, "Faiz");
    emp4.emp_age = 22;
    strcpy(emp4.emp_role, "Full Stack Developer");
    emp4.salary = 25000;
    strcpy(emp4.emp_city, "Bardoli");
    strcpy(emp4.emp_experience, "1.5 Years");
    strcpy(emp4.emp_company_name, "Webinfotech");

    emp5.emp_id = 105;
    strcpy(emp5.emp_name, "Sufiyan");
    emp5.emp_age = 22;
    strcpy(emp5.emp_role, "Ui Ux Designer");
    emp5.salary = 22000;
    strcpy(emp5.emp_city, "Surat");
    strcpy(emp5.emp_experience, "3 Years");
    strcpy(emp5.emp_company_name, "WebLancer");

    cout << "Employee ID: " << emp1.emp_id << endl
         << "Employee Name: " << emp1.emp_name << endl
         << "Employee Age: " << emp1.emp_age << endl
         << "Employee Role: " << emp1.emp_role << endl
         << "Employee Salary: " << emp1.salary << endl
         << "Employee City: " << emp1.emp_city << endl
         << "Employee Working Experience: " << emp1.emp_experience << endl
         << "Employee Company Name: " << emp1.emp_company_name << endl;
      
    cout << "Employee ID: " << emp2.emp_id << endl
         << "Employee Name: " << emp2.emp_name << endl
         << "Employee Age: " << emp2.emp_age << endl
         << "Employee Role: " << emp2.emp_role << endl
         << "Employee Salary: " << emp2.salary << endl
         << "Employee City: " << emp2.emp_city << endl
         << "Employee Working Experience: " << emp2.emp_experience << endl
         << "Employee Company Name: " << emp2.emp_company_name << endl;     

    cout << "Employee ID: " << emp3.emp_id << endl
         << "Employee Name: " << emp3.emp_name << endl
         << "Employee Age: " << emp3.emp_age << endl
         << "Employee Role: " << emp3.emp_role << endl
         << "Employee Salary: " << emp3.salary << endl
         << "Employee City: " << emp3.emp_city << endl
         << "Employee Working Experience: " << emp3.emp_experience << endl
         << "Employee Company Name: " << emp3.emp_company_name << endl;

    cout << "Employee ID: " << emp4.emp_id << endl
         << "Employee Name: " << emp4.emp_name << endl
         << "Employee Age: " << emp4.emp_age << endl
         << "Employee Role: " << emp4.emp_role << endl
         << "Employee Salary: " << emp4.salary << endl
         << "Employee City: " << emp4.emp_city << endl
         << "Employee Working Experience: " << emp4.emp_experience << endl
         << "Employee Company Name: " << emp4.emp_company_name << endl;

    cout << "Employee ID: " << emp5.emp_id << endl
         << "Employee Name: " << emp5.emp_name << endl
         << "Employee Age: " << emp5.emp_age << endl
         << "Employee Role: " << emp5.emp_role << endl
         << "Employee Salary: " << emp5.salary << endl
         << "Employee City: " << emp5.emp_city << endl
         << "Employee Working Experience: " << emp5.emp_experience << endl
         << "Employee Company Name: " << emp5.emp_company_name << endl;
    return 0;
}