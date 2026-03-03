#include <iostream>
#include <cmath>    
#include <ctime>
using namespace std;



//Global Variables
const int Max_side = 6;




//Keeping some of the main function smaller.
int RollDice(){

    
    int roll = (rand() %Max_side) + 1;


    return roll;

}


void Waitforenter(){
    cout<<"Press enter To continue\n";
    cin.ignore();
    cin.get();
}


int main(){
    srand(time(0));
    //Starting Variables not to be reset every loop
    int Chips = 100;
    string Playing = "Y";
    bool First_role = true;
    while (Playing == "Y" || Playing == "y")
    {
        
        int Roll_one,
            Roll_Two,
            Total,
            Point_line;
        
        double Bet,
            Odds; 

        //Set up if statment for fresh start!
        if (First_role == true)
        {
            //Game Set up
            cout<<"Let's Play some Crabs!\n";
            cout<<"Starting Balance: " << Chips<<endl;
            cout<<"What is your bet?\n";
            cin>>Bet;
            
            //Roll and Set
            Roll_one = RollDice();
            Roll_Two = RollDice();
            Total = Roll_one + Roll_Two;

            //Get win loss or point line, and set the first_role var to false.
           
            cout<<"You rolled a : "<<Total<< " "<<endl;
            if(Total == 2 || Total == 3 || Total == 12  ){
                
                cout << "Crabs! You Lost!\n";
                Chips -= Bet;
            }else if (Total == 4 || Total == 10)
            {
                Point_line = Total;
                Odds = 2;
               cout<<"Your points line is: "<< Point_line << " Odds: " << Odds<<endl;
               First_role = false;
            }else if (Total == 5 or Total == 9)
            {
                Point_line = Total;
                Odds = 3.0/2;
                cout<<"Your points line is: "<< Point_line << " Odds: " << Odds<<endl;
                First_role = false;
            }else if (Total == 6 || Total == 8)
            {
                Point_line = Total;
                Odds = 6.0/2;
                cout<<"Your points line is: "<< Point_line << " Odds: " << Odds<<endl;
                First_role = false;
            }else if (Total == 7 || Total == 11)
            {
                cout<<"You win!\n";
                Chips += Bet;
            }
            
            cout<<"Would you like to continue?(Y/N)\n";
            cin>> Playing;
           
            if (Playing == "N" || Playing == "n")
            {
                break;
            }
            


        }else{

        
             Roll_one = RollDice();
             Roll_Two = RollDice();
             Total = Roll_one + Roll_Two;
            

             //Roll for the line, or seven out, If win set first_role to true.
             if (Total == Point_line)
             {
                cout<<"You rolled a: "<< Point_line <<" \n";
                cout<<"You win!\n";
                Chips += Bet * Odds;
                cout<<"Chips are now: "<<Chips<<endl;
                cout<<"Would you like to keep playing?\n";
                cin>>Playing;
                if (Playing == "n"|| Playing == "N")
                {
                    break;
                }
                First_role = true;
                
             }else if (Total == 7)
             {
                cout<<"You sevened out! you lose\n";
                Chips -= Bet;
                cout<<"Would you like to keep playing?\n";
                cin>>Playing;
                if (Playing == "n"||Playing == "N")
                {
                    break;
                }
                First_role = true;
             }else{
                //Inform them of the role, and keep going. 
                cout<<"You rolled: "<< Total<<" Keep going!\n";
                Waitforenter(); //The pause makes it enjoyable
             }
            }    
            
            //If chips run out player loses
        if (Chips<=0)
        {
            cout<<"You've ran out of chips! Better luck next time!";
            Playing = false;
            break;
        }
        


        
        
        
        



  







    }
    




}