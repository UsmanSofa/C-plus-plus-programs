#include <iostream>
using namespace std;

class Customer
{
private:
    int cust_id;
    char cust_name[50];
    int cust_age;
    char cust_city[50];
    char cust_mobile_number[11];
    int cust_simcard_validity;
    char cust_telecom_brand_name[25];

public:
    void setData()
    {
        cout << "Enter Customer ID: " << endl;
        cin >> this->cust_id;
        cout << "Enter Customer Name: " << endl;
        cin >> this->cust_name;
        cout << "Enter Customer Age: " << endl;
        cin >> this->cust_age;
        cout << "Enter Customer City Name: " << endl;
        cin >> this->cust_city;
        cout << "Enter Customer Mobile Number: " << endl;
        cin >> this->cust_mobile_number;
        cout << "Enter Customer Sim Card Validity: " << endl;
        cin >> this->cust_simcard_validity;
        cout << "Enter Customer Telecom Brand name: " << endl;
        cin >> this->cust_telecom_brand_name;
    }
    void getData()
    {
        cout << "Customer ID: " << this->cust_id << endl
             << "Customer Name: " << this->cust_name << endl
             << "Customer Age: " << this->cust_age << endl
             << "Customer City: " << this->cust_city << endl
             << "Customer Mobile Number: " << this->cust_mobile_number << endl
             << "Customer Simcard Validity: " << this->cust_simcard_validity << endl
             << "Customer Telecom Brand Name: " << this->cust_telecom_brand_name << endl;
    }
};

int main()
{
    int n;
    cout << "Enter Number of Records you wanna add: " << endl;
    cin >> n;
    Customer customers[n];
    for (int i = 0; i < n; i++)
    {
        customers[i].setData();
    }
    cout << "Customer Details" << endl << endl;
    for(int i = 0; i < n; i++){
        customers[i].getData();
        cout << endl;
    }
    return 0;
}