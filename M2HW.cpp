/*
CSC 134
M2HW1 - Gold
Thebeau
9/16/2025

*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

//Variables
//Loop
string Start = "Y";
int Question;



//Bank 
string name_on_account;
double deposit,
       withdraw,
       account_number,
       account_balance;



//General Crates
    const double COST_PER_CUBIC_FOOT = 0.3;
    const double CHARGE_PER_CUBIC_FOOT = 0.52;
    double length, // The Crate's length
            width, // The Crate's width
            height, // The Crate's height
            volume, // The Volume of the crate
            cost, // The Cost to buuild the Crate
            charge, // The customer charge for the crate
            profit; // The profit made on the crate



// Pizza
int Ordered,
    Guests,
    SPP,
    Total_Slices,
    Left_Over_Pizza;


// Cheer
string Letsgo,
       School,
       team,
       cheerOne,
       cheerTwo;

void Bank();
void General_crates();
void Pizza();
void Cheer();
int main(){
    
    while (Start == "Y" || Start == "y") // Start looping, so checking questions doesn't require a restart
    {
        
        cout << "\nWhat Question would you like to start with? 1,2,3,4  or 5 to quit\n";
        cin>>Question;
        Question = std::round(Question);
        
        while (Question <=0 || Question >= 6)
        {
            cout<<"Please Input a proper Question Number! 1,2,3,4";
            cin>>Question;
            Question = std::round(Question);
        }
        
        if (Question == 1)
        {
            Bank();
        }else if (Question == 2)
        {
            General_crates();
        }else if (Question == 3)
        {
            Pizza();   
        }else if (Question == 4)
        {
            Cheer();
        }else if (Question == 5)
        {
            cout << "Closing!";
            break;
        }
        
        
        
        
        




        


    }
    











}


void Pizza(){

    string Pizza_time = "y";

    while (Pizza_time == "y" || "Y")
    {
        cout<<"How many Pizzas did you order?\n";
        cin>>Ordered;
        cout<<"How many slices per pizza?\n";
        cin>>SPP;
        cout<<"How many guests did you invite?\n";
        cin>>Guests;
        
        Total_Slices = Ordered * SPP;
        Left_Over_Pizza = Total_Slices - 3;
        if (Left_Over_Pizza < 0)
        {
            cout<<"You are short: " << Left_Over_Pizza << " pizzas this is not enough pizza\n";
        }else{
            cout<<"You have: " << Left_Over_Pizza << " Left over Pizza\n";
        }

        cout<<"________________________________\n";
        cout<<"Would you like to try again?\n";
        cin>>Pizza_time;
        if (Pizza_time == "n"|| Pizza_time == "N")
        {
            break;
        }
        

    }
    



}

void Bank(){

    ///Initilization requirments
    string Banking = "y";
    srand(time(0));
    long long account_number = rand()% 99999999 + 10000000; // Took this as a challenge. 
    //Setting so it works well
    
    
    
    while (Banking == "y" || Banking == "Y") // Start loop for multible transactions
    {
            //Collect User Data
        cout<<"\nWhat is your name?\n";
        cin.ignore();
        getline(cin,name_on_account); // This was an intresting discovery
        
        
        //Collect Transaction Data
        cout<<"How much would you like to deposit?\n";
        cin>>deposit;

        cout<<"How Much would you like to withdraw?\n";
        cin>>withdraw;
        
        
        account_balance = deposit-withdraw;     
        
        cout << setprecision(2) << fixed;

        cout<<  "Account Holder: " <<     name_on_account << "\n";
        cout<<  "Withdraw ammount: $"<< withdraw << "\n";
        cout<< "Deposit ammout: $" << deposit << "\n";
        cout<< "Final Account Balance: $" << account_balance<<"\n";
        cout<< "_____________________________________\n";
        cout<<"Would you like to start another transaction? (Y/N)\n";
        cin>>Banking;
    


        if (Banking == "n" or Banking == "N")
        {
            break;
        }
        



    }
    
  






}

void General_crates(){
     cout << setprecision(2) << fixed;
     string Crateing = "Y";


    while (Crateing == "Y" || Crateing == "y")
    {
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
        cout << "cost to build: $" << cost<< endl;
        cout << "charge to customer: $ " << charge << endl;
        cout << "Profit: $"<<profit<<endl;
        cout << "\n__________________________\n";
        cout<< "Would you like to place another order?\n";
        cin >> Crateing;
        if (Crateing == "n" || Crateing == "N")
        {
            break;
        }
        



    }
    




}


void Cheer(){
    // Unsure if you where allowing lets go to be equal to "Let's go" but school made a suitable replacment given the constraints.
    Letsgo = "Let's ";
    School = "go ";
    team = "FTCC";
    cheerOne = "Trojans";
    cheerTwo = Letsgo + School+ team;
    cheerOne = Letsgo + School + cheerOne;
    
    //Horriable naming conventions I know. However based on the bonus challenge this is all I could come up with.




    for (size_t i = 1; i <= 3; i++)
    {
        cout<<cheerTwo<<endl;
    }

        cout<<cheerOne<<endl;
    
}

























