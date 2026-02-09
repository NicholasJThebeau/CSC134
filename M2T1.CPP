// CSC 134
//  M2T1 - Apple Sales Application

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
         //Customer Info 
        string first_name;
        string last_name;
        string full_name;
        //Product and cost info
        string product = "apples";
        double cost_each = 0.99;
        int purchase_ammount;
        float total_cost;

        //Collect Customer Info
        cout << "Welcome to our" << product<< " Store!" << endl;
        cout <<"What is your First name?"<< endl;
        cin >> first_name;
        cout << "What is your Last Name?" << endl;
        cin >> last_name;
        full_name = first_name + "," + last_name;
        cout << "Nice to meet you " << full_name << endl;

        // Collect Purchase Request
        cout << "How many " << product << " would you like to purchase" << endl;
        cin >> purchase_ammount;
        
        // Calculate Price
        total_cost = purchase_ammount * cost_each;
        //Formating Prices
        cout << setprecision(2) << fixed;

    
        // Replay Cost Feed back

        cout << "The total cost of " << purchase_ammount << " will be: $" << total_cost;


    return 0;
}