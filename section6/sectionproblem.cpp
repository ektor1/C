// program calculating costs for a carpet cleaning service

#include <iostream>

using namespace std;

int main() {
    cout << "Hello welcome to my carpet cleaning service" << endl;

    int small_rooms {0};
    cout << "How many small rooms would you like cleaned?" << endl;
    cin >> small_rooms;
    
    int large_rooms {0};
    cout << "How many large rooms would you like cleaned?" << endl; 
    cin >> large_rooms;

    const double small_room_price {25.0};
    const double large_room_price {35.0};
    const double sales_tax {0.06};
    const int expiry {30}; //days 

    cout << "Estimate for carpet cleaning service" << endl;
    cout << "################################################";

    cout << "Number of small rooms" << small_rooms << endl;
    cout << "Number of large rooms" << large_rooms << endl;

    cout << "Price per small room: " << small_room_price << endl;
    cout << "Price per large room: " << large_room_price << endl;

    cout << "Cost: " << large_room_price * large_rooms + small_room_price * small_rooms << endl;
    cout << "Tax: $" << (large_room_price * large_rooms + small_room_price * small_rooms) * sales_tax << endl;
    cout << "################################################";

    cout << "Total estimate: $" << large_room_price * large_rooms + small_room_price * small_rooms +
     (large_room_price * large_rooms + small_room_price * small_rooms) * sales_tax << endl;
    cout << "this estimate is valid for the next " << expiry << " days." << endl;
    
    return 0;
}