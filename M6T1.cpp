// M5T2
// Nicholas Thebeau
// 3/30/2026
#include <iostream>
using namespace std;


void method1();
void method2();

int main(){

    method1();
    method2();


    return 0;
}


void method1(){
    cout <<"Enter each car that passes per day \n";
    cout<<"Day 0 = Monday, Day 4 = Friday \n";
    int Size = 5;
    int count = 0;
    int Cars_today;
    int Cars_total;
    double Cars_Avg;

    while (count < Size)
    {
        cout<< "Day "<< count <<": ";
        cin>>Cars_today;
        Cars_total += Cars_today;
        count++;
    }
    cout<< "Total = "<< Cars_total<<endl;
    Cars_Avg = (double)Cars_total/Size;
    cout<<"Average = "<< Cars_Avg<<endl;



}

void method2(){
    const int SIZE = 5;
    string days[SIZE] = {"M","T","W","Th","F"};
    int Cars[SIZE];
    int Cars_total =0;
    double Cars_Avg = 0.0;

    for (int i = 0; i < SIZE; i++)
    {
        cout<<"# on " << days[i] <<": \n";
        cin>>Cars[i];
    }
    
    cout<<"Day\tCars"<<endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout<<days[i]<<"\t"<<Cars[i]<<endl;
        Cars_total += Cars[i];
    }

    Cars_Avg = (double)Cars_total / SIZE;
    cout<<"Total = "<< Cars_total<<endl;
    cout<<"Average = "<<Cars_Avg<<endl;
    


}