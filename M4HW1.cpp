//CSC 134
// M4HW1
//  Gold
// Nicholas Thebeau
// 3/24/2026

#include <iostream>
#include <limits>
using namespace std;






int GetValidNumber(){ // Seprated for SOLID principles
    int Number;
    cin>>Number;
    while (cin.fail()|| Number > 12 || Number < 1) // Check for Fails, and validity
    {
        cin.clear(); // Try again
        cin.ignore(numeric_limits<streamsize>::max(),'\n'); //Remove any buffers/failed content.
        cout<<"Please Enter a Valid Number from 1 to 12:\n";
        cin>>Number;
    };
    



    return Number;
}



int main(){

    int firstnumber, SecondNumber,Answer;
    cout<<"Please enter a number from 1 to 12\n";
    firstnumber = GetValidNumber();
    //cout<< "Please Enter another number from 1 to 12 \n";
    // SecondNumber = GetValidNumber();
    // Answer = firstnumber * SecondNumber;
    // cout <<firstnumber << " Times " << SecondNumber<<" Is: " <<Answer<<endl;


    for (int i = 1; i <= 12; i++)
    {
        Answer = firstnumber * i;
        cout<<firstnumber << " Times " << i<<" Is: "<<Answer<<endl;
    }
    

}