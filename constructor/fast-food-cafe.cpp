#include <iostream>
#include <cstring>
using namespace std;

class Cafe
{
private:
    int cafe_id;
    char cafe_name[100];
    char cafe_type[30];
    char cafe_rating[15];
    char cafe_location[30];
    int cafe_establish_year;
    int cafe_staff_quantity;

public:
    Cafe()
    {
        cout << "Default Constructor" << endl;
    }
    Cafe(int id, char n[], char t[], char r[], char l[], int ey, int s)
    {
        this->cafe_id = id;
        strcpy(this->cafe_name, n);
        strcpy(this->cafe_type, t);
        strcpy(this->cafe_rating, r);
        strcpy(this->cafe_location, l);
        this->cafe_establish_year = ey;
        this->cafe_staff_quantity = s;
    }
    void getCafeData()
    {
        cout << "Cafe ID :" << cafe_id << endl
             << "Cafe Name :" << cafe_name << endl
             << "Cafe Type :" << cafe_type << endl
             << "Cafe Rating :" << cafe_rating << endl
             << "Cafe Location :" << cafe_location << endl
             << "Cafe Establishment Year :" << cafe_establish_year << endl
             << "Cafe Staff Quantity :" << cafe_staff_quantity << endl;
    }
};

int main()
{
    int n;
    cout << "Enter The Number Of Cafe You Want to add: " << endl;
    cin >> n;
    Cafe *cafes[n];
    int id, year, staff;
    char name[100], type[30], rating[15], location[30];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Cafe Details" << endl
             << endl;

        cout << "Enter Cafe ID: " << endl;
        cin >> id;
        cout << "Enter Cafe Name: " << endl;
        cin >> name;
        cout << "Enter Cafe Type: " << endl;
        cin >> type;
        cout << "Enter Cafe Rating: " << endl;
        cin >> rating;
        cout << "Enter Cafe Location: " << endl;
        cin >> location;
        cout << "Enter Cafe Establishment Year: " << endl;
        cin >> year;
        cout << "Enter Cafe Staff Quantity: " << endl;
        cin >> staff;
        cafes[i] = new Cafe(id, name, type, rating, location, year, staff);
    }
    cout << "Cafe Details are: " << endl
         << endl;
    for (int i = 0; i < n; i++)
    {
        cafes[i]->getCafeData();
        cout << endl
             << endl;
    }
    return 0;
}