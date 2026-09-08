#include <iostream>
using namespace std;

class Hotel
{
private:
    int hotel_id;
    char hotel_name[100];
    char hotel_type[25];
    char hotel_rating[15];
    char hotel_location[50];
    int hotel_establish_year;
    int hotel_staff_quantity;
    int hotel_room_quantity;
    static int hotelcounts;

public:
    Hotel()
    {
        hotelcounts++;
    }
    void setData()
    {
        cout << "Enter Hotel ID: " << endl;
        cin >> this->hotel_id;
        cout << "Enter Hotel Name: " << endl;
        cin >> this->hotel_name;
        cout << "Enter Hotel Rating: " << endl;
        cin >> this->hotel_rating;
        cout << "Enter Hotel Location: " << endl;
        cin >> this->hotel_location;
        cout << "Enter Hotel Establishment Year: " << endl;
        cin >> this->hotel_establish_year;
        cout << "Enter Hotel Staff Quantity: " << endl;
        cin >> this->hotel_staff_quantity;
        cout << "Enter Hotel Room Quantity: " << endl;
        cin >> this->hotel_room_quantity;
    }
    void getData()
    {
        cout << "Hotel ID: " << this->hotel_id << endl
             << "Hotel Name: " << this->hotel_name << endl
             << "Hotel Rating: " << this->hotel_rating << endl
             << "Hotel Location: " << this->hotel_location << endl
             << "Hotel Establishment Year: " << this->hotel_establish_year << endl
             << "Hotel Staff Quantity: " << this->hotel_staff_quantity << endl
             << "Hotel Room Quantity: " << this->hotel_room_quantity << endl;
    }
    static int getHotelCounts()
    {
        return hotelcounts;
    }
};
int Hotel::hotelcounts = 0;
int main()
{
    int n;
    cout << "Enter the Number of Hotel data you wanna add...!" << endl;
    cin >> n;
    Hotel hotel[n];
    for(int i = 0; i < n; i++){
        hotel[i].setData();
    
    }
    cout << "Hotel Details" << endl << endl;
    for (int i = 0; i < n; i++){
        hotel[i].getData();
        cout << endl;
    }
    cout << endl;
    cout << "Total Hotel Counts: " << Hotel::getHotelCounts() << endl;
    return 0;
}