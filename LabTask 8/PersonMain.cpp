#include <iostream>
#include "Person.h"
using namespace std;

int main() {
    // Create Person objects with names and weights
    Person Jane =Person("Jane", 60.0f);
    Person John=Person("John", 75.0f);

    // Calculate total weight by adding weights of Jane and John
    float totalWeight = Jane + John;

    // Output total weight
    cout << "Total weight: " << totalWeight << endl;

    if(Jane == John){
        cout<<"This is the same person"<<endl;
    }
     if(Jane != John){
        cout<<"This is NOT same person"<<endl;
    }
    if(Jane < John){
      cout<<"Jane is younger than John"<<endl;  
    }
    if(Jane > John){
      cout<<"John is older than Jane"<<endl;  
    }
    string janeFirstName = Jane;
    cout<<"Jane's firstName "<<janeFirstName<<endl;

    float janeWeight = Jane;
    cout<<"Jane's weight "<<janeWeight<<endl;

    return 0;
}
