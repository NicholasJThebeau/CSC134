//CSC 134
// M4T1
// Nicholas Thebeau
// 3/2/2026


//This Program Demonstarts a simple while loop.
#include <iostream>
using namespace std;


int main(){

    int number = 0;

    while (number < 5)
    {
        cout<<"Hello\n";
        number++;
    };
    cout<<"That's all!\n";
    
    
    
    
    const int Min_Number = 1,
              Max_number = 10;
    
    
    int num = Min_Number;

    cout<<"Number Squared\n";
    cout<<"__________________________\n";
    while (num <= Max_number)
    {
        cout<<num<<"\t\t"<<(num * num)<<endl;
        num++;
    };
    
    
    return 0;
};