/*
CSC 134
M3HW1 - Gold
Thebeau
9/16/2025

*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;


void First_Question(){
    string Answer;

    cout<<"Hello, I'm a C++ program! Do you like me?\n";
    cin>>Answer;
    
    if (Answer == "Yes" || Answer == "yes" || Answer == "Y")
    {
        cout<<"That's great! I'm sure we'll get along\n";
      
    }else if(Answer == "No" || Answer == "no" || Answer == "n"){
        cout<<"Well, maybe you'll learn to like me later.\n";
    }else{

            cout<<"If you're not sure .. That's okay\n";

    };
    
};

void Second_Question(){
    //Item Info
    string item = "Pizza combo";
    string store_name = "Thebeau Pizzaria";
    //Prices
    double price;
    double tax_percent = .08;
    double tax_ammount;
    double total_price;
    double tip_Precent = .15;
    double Tip; 
    int Place_Of_Consumption;
    cout<<"Please enter the price of the meal, excluding all symbols\n";
    cin>>price;
    while (price < 0 )
    {
        cout<<"You've enter an invalid ammount, please try again!\n";
        cin>>price;
    };

    cout<<"Dine in(1), or Carray out(2) \n";

    while (Place_Of_Consumption != 1 || Place_Of_Consumption != 2)
    {
        cout<<"Please enter a valid option, 1 for dine in, 2 for carray out.\n";
        cin>>price;
    }
    
    if(Place_Of_Consumption == 1){

        Tip = price * tip_Precent;
        tax_ammount = price * tax_percent;
        total_price = Tip + tax_ammount + price;


        cout<<"______Thebeaus Pizzara_____\n";
        cout<<"Price of Items: $" << price<<endl;
        cout<<"Tax Paid: $" << tax_ammount<<endl;
        cout<<"Gratuity: $"<< Tip<<endl;
        cout<<"Total: "<<total_price<<endl;
        cout<<"______________________________";
        
    
    
    
    }else{

        
        tax_ammount = price * tax_percent;
        total_price = tax_ammount + price;


        cout<<"______Thebeaus Pizzara_____\n";
        cout<<"Price of Items: $" << price<<endl;
        cout<<"Tax Paid: $" << tax_ammount<<endl;
        cout<<"Total: "<<total_price<<endl;
        cout<<"______________________________";

    }


  






    
};

void Third_Question(){
    int Question_One;
    int Question_Two;
    
    cout<<"You are meet in the edge of the woods.\n" <<"Will you take Path 1: The fields?(1)\n  Path 2: The Forest?(2)";
    cin>>Question_One;

    if(Question_One == 1){

        cout<<"As you walk through the field, you are spotted by a bear.\n";
        cout<<"Open Field make for easy targets\n";

    }else{

        cout<<"As you wonder through the Forest you spot a River\n Go up the river?(1)\n Down the river?(2)\n";
        cin>>Question_One;
        
        if(Question_One == 1){

                cout<<"Up the river you spot a clearing\n Set off the flare(1)\n Start a Camp fire(2) \n";
                cin>>Question_One;
                
                if(Question_One == 1){
                    cout<<"No one spotted you, no one came\n";
                }else(
                  
                    cout<<"Later at night, a passing helicopter spotted you, you survived\n"
                );
            


        }else{

            cout<<"You are spotted and hunted down by the tribe\n";
            cout<<"Outsiders aren't welcome\n";

        };


    };





};

void Fourth_Question(){
    int First_Number = rand() %100;
    int Second_Numner = rand() % 100;
    int Answer = First_Number + Second_Numner;
    int User_Answer;
    cout<<"What is "<<First_Number<<" + "<< Second_Numner << "?\n";
    cin>>User_Answer;

    if (User_Answer == Answer)
    {
        cout<<"You got it correct!";
    }else 
    {
        cout<<"Incorrect :(\n";
    };
    
    




}



int main(){
    //Question 1
    cout<<"Question 1:\n";
    First_Question();
    cout<<"\n";
    cout<<"Question 2: \n";
    Second_Question();
    cout <<"Question 3: \n";
    Third_Question();
    cout<<"Question 4: \n";
        Fourth_Question();    

};