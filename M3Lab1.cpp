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


// I did not define prior, and make them after. 
void number_fight(int Picks){

   int fighting_number = rand() %100  + 1;

   if (Picks > fighting_number)
   {
    // Win if they pick higher
    cout<<"You Picked: " << Picks << " I picked " << fighting_number << endl <<"You win"<<endl;

   }else{
    
    cout<<"You Picked: "<< Picks << " I Picked: " << fighting_number << endl << "You lose" <<endl;
    
  }
   
}

void Greeting(string Name){

    cout<<"Hello! Nice to meet you"<< Name<<endl;

}

int main(){
  
    int Decsision;
    string Start;
    int number_pick;
    string Name;
   
   
   
    cout<<"Start? Y/N"<<endl;
    cin>>Start;
    // Ask user, if they meant to run the program. 
 
      if (Start == "N" or Start == "n")
    {
        cout<<"Program will now close"<<endl;
        
    }else{
         while (Start == "Y" or "Y" ) // Did not want to deal with transform. 
        {
        
            cout<<"Would you like to number fight(1), or greeting(2)"<<endl;    
            cin>>Decsision;

            if (Decsision == 1) // Number fight
            {

             cout<<"Pick a number 1 through 99"<<endl;
             cin>>number_pick;
           
             while (number_pick >= 100 or number_pick <= 0) // Force Correct Number selection
                {
                    cout<<"Please Pick a number greater then 0, and below 100"<<endl;
                    cin>>number_pick;

                }
            
                number_fight(number_pick);

            }else if(Decsision == 2){

                cout<<"What is your name?"<<endl;
                cin>>Name;
                Greeting(Name);

            }
            
            cout<<"Would you like to continue? (Y/N)"<<endl;
            cin>>Start;

            if (Start == "n" or Start == "N")
            {
                cout<<"The Program will not close"<<endl;
                break;
            }
        
        }
    }

   
    
    
    
    return 0;
}





