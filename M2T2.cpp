/*
CSC 134
M2T2 - RECIPET CALCULATOR
Thebeau
9/16/2025

*/



#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main()  {
    //Item Info
    string item = "Pizza combo";
    string store_name = "Thebeau Pizzaria";
    //Prices
    double price = 5.99;
    double tax_percent = .08;
    double tax_ammount;
    double total_price;
    /* The assignment stated no input, I was orginally planning to have input 
        Since we did it it last class.     
    */
    double Ordered_ammount = 1;
    
    //Greet user
    cout << "Welcome to Thebeau's Pizzara!" << endl;
    cout << "We have Recived the order of: " << Ordered_ammount << " Pizzas"<< endl;
    // Recipet Math
    tax_ammount = price * tax_percent;
    total_price = price + tax_ammount;


    //Show Recipet
     cout << setprecision(2) << fixed;
     cout << "______________________" << endl;
     cout << "Thebeau's Pizzara Have a good day!" << endl;
     cout << "Order Quantity: "<< endl << item << ": " << Ordered_ammount << " Price: $" << price << endl;
     
     cout << "Sub_Total: $"<< (price * Ordered_ammount) << endl;
     cout << "Tax Ammount: $" << tax_ammount << endl;
     cout << "Total: $" << total_price << endl;


}