// M5LAB2
// Nicholas Thebeau
// 3/24/2026
// Gold

#include <random>
#include <map>
#include <ctime>
#include <iostream>
using namespace std;


bool NPC(int Key_Cost, int Coins){
 int Choice;
 bool Got_key = false;
   while (Choice != 3)
   {
     cout<<"You see the janitor what would you like to do? \n";
     cout<<"1: Ask him to open the locker?\n";
     cout<<"2: Purchase a new key?\n ";
     cout<<"3: Continue guessing rooms\n";
     cin>> Choice;

     if (Choice == 1)
     {
        cout<<"I can't I'm sorry! New school rules if you lose your key you must purchase a new one\n";
        cout<<"if you don't have the money you could always try looking in the classrooms! \n";
        cout<<"Though not every class room has money, and not every classroom has the same ammount!\n";
        cout<<"You can always ask me to purchase a key to find the price or purchase it if you have enough!\n";
        cout<<"Good luck to you!\n";
     }else if (Choice == 2)
     {
        if (Coins >= Key_Cost)
        {
            cout<<"Sure! here's your key!\n";
            cout<<"Good luck to you going foward!\n";
            Got_key = true;
        }else{
            cout<<"You don't have enough coins right now you need: " << Key_Cost << endl;
        }
        
     }else if (Choice == 3)
     {
        cout<<"Good luck going foward!\n";
     }else{
        cout<<"He stars at you confused\n";
        cout<<"(Please select a appropriate action)\n";
     }
     
     
     


    
   }
   
        
    
   return Got_key;
}


int Correct_Room_Generator(){
    int Room = rand() % 4 + 1;


    return Room;
}


int Collect_Reward(){
   int reward = rand() % 6 + 1;

    return reward;  
}


int Correct_Room(){
    
    int Reward = Collect_Reward();
    cout<<"You've Found " << Reward << " Coins! \n";

    return Reward;
}

int Incorrect_Room(){
    cout<<"There is nothing here\n";

    return 0;
}


void Loser(){
    cout<<"you've given up. No project.";
}

void Winner(int NumberOfRooms,int Coins){
    cout<<"You have Opened the locker!\n";
    cout<<"______Stats_______\n";
    cout<<"You finished the game after guessing: "<< NumberOfRooms<< " Doors Correct";
    cout<<"You finished with: "<<Coins<<" Left over!";
}




map<string,int> Key_Generator(){
  map<string,int> KeyMap;  
    KeyMap["Cost"] = rand() %101;
    return KeyMap;
}


int main(){
 //Game Set up
 srand(time(0));
 
 bool Winner = false;
 int Coins = 0;
 int Correct_Rooms = 0;
 map<string,int>Key_Map;
 Key_Map = Key_Generator();
    cout<<"Oh no! your mom is coming and you've lost your locker key!\n";
 while (Winner == false){
    int Choice;
    cout<<"What would you like to do?\n";
    cout<<"1: Talk to the janitor?\n";
    cout<<"2: Search a Room?\n";
    cout<<"3: Check Coins? \n";
    cout<<"4: Give up?\n";
    cin>>Choice;
    if (Choice == 1)
    {
        int Key_Cost = Key_Map["Cost"];
       Winner = NPC(Key_Cost,Coins);

    }else if (Choice == 2)
    {   
        int Chosen_Door;
        int Reward;
        int Correct_Door = Correct_Room_Generator();
        cout<< "Please pick a door, 1 through 4\n";
        cin>> Chosen_Door;
        if (Chosen_Door == Correct_Door)
        {
            Correct_Room();
        }else{
            Incorrect_Room();
        }
        
        Coins += Reward;

    }else if (Choice == 3)
    {
        cout << "You currently have: " << Coins << " Coins";
    }else if (Choice == 4)
    {
        break;
    }
    
    
    
    



 };
 
 






    return 0;
}