//CSC 134
// m1lab
// Nicholas Thebeau
// 2/2/2026

#include <iostream>
using namespace std;

int main()
{
   string name = "Nicholas Thebeau";
   //Not fully sure what name to place here, The instruction packet said one thing, the video said another.
   // And the paragraph below the the instructions said the same as the video. So I followed the full instructions.
   
   //All Pertenet data.
   int apples = 100;
   double pricePerApple = 0.25;
   double totalCost = (double) apples * pricePerApple;
   
   // Greet user
   cout << "Welcome to " << name << " 's Apple farm! \n" << endl;
   
   //Display Apple and Price info.
   cout << "We have " << apples << " apples for sale. At $" << pricePerApple << " each." << endl;
   

    
    cout << "To purchase all of our apples the price is: $" << totalCost << endl;
   

}