#include <iostream>
#include <cstring>
using namespace std;

class Car
{
public:
    int car_id;
    char car_company_name[25];
    char car_color[25];
    char car_model[25];
    int car_release_year;
};

int main()
{

    Car car1, car2, car3, car4, car5;

    car1.car_id = 101;
    strcpy(car1.car_company_name, "BMW");
    strcpy(car1.car_color, "Blue");
    strcpy(car1.car_model, "530d");
    car1.car_release_year = 2018;

    car2.car_id = 102;
    strcpy(car2.car_company_name, "Toyota");
    strcpy(car2.car_color, "Blue");
    strcpy(car2.car_model, "Supra");
    car2.car_release_year = 2014;

    car3.car_id = 103;
    strcpy(car3.car_company_name, "Audi");
    strcpy(car3.car_color, "Red");
    strcpy(car3.car_model, "RS6");
    car3.car_release_year = 2014;

    car4.car_id = 104;
    strcpy(car4.car_company_name, "BMW");
    strcpy(car4.car_color, "Blue");
    strcpy(car4.car_model, "M4");
    car4.car_release_year = 2013;

    cout << "Car ID: " << car1.car_id << endl
         << "Car Company Name: " << car1.car_company_name << endl
         << "Car Color: " << car1.car_color << endl
         << "Car Model: " << car1.car_model << endl
         << "Car Release Year: " << car1.car_release_year << endl;

    cout << "Car ID: " << car2.car_id << endl
         << "Car Company Name: " << car2.car_company_name << endl
         << "Car Color: " << car2.car_color << endl
         << "Car Model: " << car2.car_model << endl
         << "Car Release Year: " << car2.car_release_year << endl;

    cout << "Car ID: " << car3.car_id << endl
         << "Car Company Name: " << car3.car_company_name << endl
         << "Car Color: " << car3.car_color << endl
         << "Car Model: " << car3.car_model << endl
         << "Car Release Year: " << car3.car_release_year << endl;

    cout << "Car ID: " << car4.car_id << endl
         << "Car Company Name: " << car4.car_company_name << endl
         << "Car Color: " << car4.car_color << endl
         << "Car Model: " << car4.car_model << endl
         << "Car Release Year: " << car4.car_release_year << endl;

}