#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;
int main() {
    srand(time(0));
    int daysUntilExpiration =0+rand() % 12;

    // getting an output
    if (daysUntilExpiration <= 10) {
        cout << "Your subscription will expire soon. Renew now!" << endl;
    } else if (daysUntilExpiration <= 5) {
        cout << "Your subscription expires in " << daysUntilExpiration << " days. Renew now and save 10%!" << endl;
    } else if (daysUntilExpiration == 1) {
        cout << "Your subscription expires within a day! Renew now and save 20%!" << endl;
    } else if (daysUntilExpiration == 0) {
        cout << "Your subscription has expired." << endl;
    } else {
        cout << "You have an active subscription." << endl;
    }

    return 0;
}