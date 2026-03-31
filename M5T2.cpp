// M5T2
// Nicholas Thebeau
// 3/30/2026
#include <iostream>
using namespace std;

int Square(int NumberToSquare){
    int result;

    result = NumberToSquare * NumberToSquare;


    return result;
}


void printAnswerLine(int Count, int Square){

    cout<<Count << " Squared is: "<<Square<<endl;


}

int main(){

    int Count = 0;

    while (Count < 11)
    {
        
        printAnswerLine(Count,Square(Count));
        Count++;

    }
    







 return 0;   
}

