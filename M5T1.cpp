#include <iostream>
using namespace std;

void ProduceAnswer(int number, int doubled);
int Double_Answer(int number);



int main(){
    int Number;    
    cout<<"Please Input any number you like!\n";
    cin>>Number;
    
    ProduceAnswer(Number,Double_Answer(Number));
    



    return 0;
}


void ProduceAnswer(int number,int doubled){

    cout<<number<<" Doubled is "<<doubled;

}


int Double_Answer(int number){

    return number * 2;

}