#include <iostream>
#include <cstring>
using namespace std;

class DiamondCompany
{
private:
    int comp_id;
    char comp_name[100];
    int comp_staff_quantity;
    int comp_revenue;
    int comp_import_raw_diamonds;
    int comp_export_diamonds;
    char comp_ceo[100];

public:
    DiamondCompany()
    {
        cout << "Default Constructor" << endl;
    }

    DiamondCompany(int i, char n[], int s, int r, int im, int ex, char c[])
    {
        this->comp_id = i;
        strcpy(this->comp_name, n);
        this->comp_staff_quantity = s;
        this->comp_revenue = r;
        this->comp_import_raw_diamonds = im;
        this->comp_export_diamonds = ex;
        strcpy(this->comp_ceo, c);
    }

    void displayDiamondCompany()
    {
        cout << "Company ID: " << comp_id << endl
             << "Company Name: " << comp_name << endl
             << "Company Staff Quantity: " << comp_staff_quantity << endl
             << "Company Revenue: " << comp_revenue << endl
             << "Company Import Diamonds: " << comp_import_raw_diamonds << endl
             << "Company Export Diamond: " << comp_export_diamonds << endl
             << "Company CEO Name: " << comp_ceo << endl;
    }

    ~DiamondCompany()
    {
        cout << "Memory is Cleaned" << endl;
    }
};

int main()
{
    int n;

    cout << "Enter The Number Of Diamond Companies you want to add: ";
    cin >> n;

    DiamondCompany companies[n];

    int id, staff, revenue, imports, exports;
    char name[100], ceo[100];

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter Company Details: " << endl;

        cout << "Enter Company ID: ";
        cin >> id;

        cout << "Enter Company Name: ";
        cin >> name;

        cout << "Enter Company Staff Quantity: ";
        cin >> staff;

        cout << "Enter Company Revenue: ";
        cin >> revenue;

        cout << "Enter Company Import: ";
        cin >> imports;

        cout << "Enter Company Export: ";
        cin >> exports;

        cout << "Enter Company CEO Name: ";
        cin >> ceo;

        companies[i] = DiamondCompany(id, name, staff, revenue, imports, exports, ceo);
    }

    cout << "\nCompanies Details Are:\n" << endl;

    for (int i = 0; i < n; i++)
    {
        companies[i].displayDiamondCompany();
        cout << endl;
    }

    return 0;
}