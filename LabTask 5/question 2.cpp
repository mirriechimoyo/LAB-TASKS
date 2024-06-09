#include <iostream>
#include <cstdlib> 
#include <ctime>   

using namespace std;

int main() {
    // Seed the random number generator with time
    srand(time(0));

    //A random number generation between 0 and 11
    int daysUntilExpiration = 0+rand() % 12;

    // getting an output
    switch(daysUntilExpiration) {
        case 0:
            cout << "Your subscription has expired." << endl;
            break;
        case 1:
            cout << "Your subscription expires within a day!" << endl;
            cout << "Renew now and save 20%!" << endl;
            break;
        case 2:
            cout << "Your subscription expires in " << daysUntilExpiration << " days" << endl;
            cout << "Renew now and save 10%!" << endl;
            break;
        default:
            if (daysUntilExpiration <= 10) {
                cout << "Your subscription will expire soon. Renew now!" << endl;
            } else {
                cout << "You have an active subscription." << endl;
            }
            break;
    }

    return 0;
}
