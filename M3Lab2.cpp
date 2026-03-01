//CSC 134
// m1lab
// Nicholas Thebeau
// 3/1/2026
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <conio.h>
using namespace std;


int main(){
    string checking_Grade = "Y";
    double Grade;
    
    while (checking_Grade == "Y"|| checking_Grade == "y")
    {
        
        cout<<"Please enter your grade 0-100\n";
        cin>> Grade;

        while (Grade > 100 || Grade < 0)
        {
            cout<< "Invalid entery: Grades are 0-100\n";
            cin>>Grade;
        }
        


        if (Grade >=90 && Grade <= 100)
        {
            cout<<"You're Grade is an A\n";
        }else if (Grade >=80 && Grade < 90)
        {
           cout<<"You got a B\n";
        }else if(Grade >= 70 && Grade < 80){
            cout<<"You got a C\n";
        }else if(Grade >= 60 && Grade < 70){
            cout<<"You got a D\n";
        }else if (Grade >= 0 && Grade < 60)
        {
            cout<<"You got F\n";
        }
        
        
        cout<<"_____________________\n";
        cout<<"Would you like to run another grade?";
        cin>>checking_Grade;

        if (checking_Grade == "N"|| checking_Grade == "n")
        {
            cout<<"Shutting down!";
            break;
        }
        











    }
    













}