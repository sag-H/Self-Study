#include <iostream>
using namespace std;

int main(){
    int small_rooms_amount {0}, large_rooms_amount {0}; // 0 as default
    const int small_room_price {25}, large_room_price {35};

    cout << "Hello, welcome to Frank's Carpet Cleaning Service.\n\n";

    cout << "How many small rooms would you like cleaned? ";
    cin >> small_rooms_amount;

    cout << "How many large rooms would you like cleaned? ";
    cin >> large_rooms_amount;

    cout << "\nEstimate for carpet cleaning service";
    cout << "\nNumber of small rooms: " << small_rooms_amount;
    cout << "\nNumber of large rooms: " << large_rooms_amount;
    cout << "\nPrice per small room: $" << small_room_price;
    cout << "\nPrice per large room: $" << large_room_price;

    int total_rooms_cost = (small_room_price * small_rooms_amount) + (large_room_price * large_rooms_amount); 
    cout << "\nCost: $" << total_rooms_cost;

    double total_tax = total_rooms_cost * 0.06;
    cout << "\nTax: $" << total_tax;

    cout << "\n====================================\n";
    cout << "Total estimate: $" << total_rooms_cost + total_tax;
    cout << "\nThis estiamte is valid for 30 days\n" << endl;

    return 0;
}