#include <iostream>
using namespace std;

int main(){
    
    int total_cents {0};
    cout << "Enter an amount in cents: ";
    cin >> total_cents;

    int dollars {}, quarters {}, dimes {}, nickles {}, pennies {};

    dollars = total_cents / 100;
    total_cents %= 100;

    quarters = total_cents / 25;
    total_cents %= 25;

    dimes = total_cents / 10;
    total_cents %= 10;

    nickles = total_cents / 5;
    total_cents %= 5;

    pennies = total_cents / 1;
    total_cents %= 1;
    
    cout << "==== Your change ====\n";
    cout << "Dollars: " << dollars << '\n';
    cout << "Quarters: " << quarters << '\n';
    cout << "Dimes: " << dimes << '\n';
    cout << "Nickles: " << nickles << '\n';
    cout << "Pennies: " << pennies << '\n' << endl;

    return 0;
}