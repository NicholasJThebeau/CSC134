/*
    CSC 134
    M2lab1
    Nicholas Thebeau
    3/1/2026
    


*/

//Prompt the user or the crate's length,width,and height
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    //Constants for cost and ammount charged
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.5;
    //Variables
    double length, // The Crate's length
            width, // The Crate's width
            height, // The Crate's height
            volume, // The Volume of the crate
            cost, // The Cost to buuild the Crate
            charge, // The customer charge for the crate
            profit; // The profit made on the crate
    //set the desired output formatting for numbers
    cout<<setprecision(2)<< fixed << showpoint;
    // Prompt the user for the crate's length,width,and height
    cout << "Enter the dimensions of the crate (in feet):\n";
    cout<<"Length: ";
    cin>>length;
    cout<<"Width: ";
    cin>>width;
    cout<<" Height: ";
    cin>> height;

    //calculate the crates volume, cost to produce it,
    // the charge to the customer, and the profit
    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;

    //Display the calculated data.
    cout << "The volume of the crate is " ;
    cout << volume << " cubic feet. \n";
    cout << "cost to build: $" << cost << charge << endl;
    cout << "charge to customer: $" << charge << endl;
    cout << "Profit: $"<<profit<<endl;
    
    return 0;
}
