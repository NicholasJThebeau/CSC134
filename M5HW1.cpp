//CSC 134
// M5HW1
//  Gold
// Nicholas Thebeau
// 4/9/2026

#include <iostream>
#include <limits>
#include <iomanip>
#include <vector>
#include <cmath>
using namespace std;

void Rainfall();
void HyperRectangle();
void RomanNumeral();
void Areas_of_All();
void Distance_Travled();

int main(){
    int question;
    cout<<"Which Question would you like to view? Press 7 to close\n";
    cin>>question;

    while (question >=8 || question <=0)
    {
        cout<<"Please pick a question 1-6 and 7 to close\n";
        cin>>question;
    }
    
    if (question == 1)
    {
        Rainfall();
    }else if (question == 2)
    {
        HyperRectangle();
    }else if (question == 3)
    {
        RomanNumeral();
    }else if (question == 4)
    {
        Areas_of_All();
    }else if (question == 5)
    {
        Distance_Travled();
    }else if (question == 6)
    {
        exit;
    }
    
    
    
    
    
    
    main();



    return 0;
}

void Rainfall(){
   vector <string> Month;
   vector <double> Rainfall;
   string current_month;
   double current_RainFall;
   double Avg;
   for ( int i = 0; i < 3; i++)
   {
        cout<<"Please Enter the Month " << i + 1;
        cin>>current_month;
        Month.push_back(current_month);
        cout<<"Please Enter the Rain fall for "<< Month[i]<<endl;
        cin>> current_RainFall;
        Rainfall.push_back(current_RainFall);
    }
   
    for (size_t i = 0; i < Rainfall.size(); i++)
    {
        Avg += Rainfall[i];
    
    }
    Avg = Avg/Rainfall.size();


    cout<<"The Average rain fall for";
    for (size_t i = 0; i < Month.size(); i++)
    {
        cout<<" "<<Month[i];
    }
    
    cout<<" Is: "<<Avg<<endl;

  




    main();


}

double Validate_Hyper(double Dimenstion){

    while (Dimenstion <= 0)
    {
        cout<<"Please enter a number grater then zero\n";
        cin>>Dimenstion;

    };

    return Dimenstion;
    


}

void HyperRectangle(){
    vector <double> Dimensions;
    double Current_Dimensions;
    double Volume = 1; 
   //Length and Validate
    cout<<"Please Input the Length of the box. \n";
    cin >> Current_Dimensions;
    Current_Dimensions = Validate_Hyper(Current_Dimensions);
    Dimensions.push_back(Current_Dimensions);
   //Width and Validate
    cout<<"Please Input the Width of the box. \n";
    cin >> Current_Dimensions;
    Current_Dimensions = Validate_Hyper(Current_Dimensions);
    Dimensions.push_back(Current_Dimensions);
   
   //Height And Validate
    cout<<"Please Input the Height of the box. \n";
    cin >> Current_Dimensions;
    Current_Dimensions = Validate_Hyper(Current_Dimensions);
    Dimensions.push_back(Current_Dimensions);

    for (size_t i = 0; i < Dimensions.size(); i++)
    {
        Volume = Volume * Dimensions[i];
    }
    
    cout<<"The Volume of the box is: " << Volume << endl;

    main();

}

void RomanNumeral(){
    int Number_Covert;

    cout<<"Please enter a number between 1-10\n";
    cin>>Number_Covert;

    switch (Number_Covert)
    {
    case 1:
        cout<<"1 Coverts to: I\n";
        break;
    case 2:
         cout<<"2 Coverts to: II\n";
         break;
    case 3:
        cout<<"3 Coverts to: III\n";
        break;
    case 4:
        cout<<"4 Coverts to: IV\n";
        break;
    case 5:
        cout<<"5 Coverts to: V\n";
        break;
    case 6:
        cout<<"6 Coverts to: VI\n";
        break;
    case 7:
        cout<<"7 Coverts to: VII\n";
        break;
    case 8:
        cout<<"8 Coverts to: VIII\n";
        break;
    case 9:
        cout<<"9 Coverts to: IX\n";
        break;
    case 10:
        cout<<"10 Coverts to: X\n";
        break;
    
    default:
        break;
    }
   

    main();


}

void Areas_of_All(){

    int Selection;
    
    cout<<"Please Select on of the Following: \n";
    cout<<"1: Area of a circle\n";
    cout<<"2: Area Of a Rectangle\n";
    cout<<"3: Area of a Triangle\n";
    cout<<"4: Exit\n";
    cin>>Selection;
    
    while (Selection>=5 || Selection<=0)
    {
        cout<<"Please Select a number 1-4\n";
    };
    
   
    if (Selection == 1)
    {
            double Radius;
             double Pie = 3.14;
             double Area;
             cout<<"Please Input the radius of the circle\n";
             cin>>Radius;
             Area = Pie*sqrt(Radius);
             cout<<"The area of your circle is: "<<Radius << endl;
             Areas_of_All();
    }else if (Selection == 2)
    {
        double Length;
        double Width;
        double Area;

        cout<<"Please Input the Length: \n";
        cin>>Length;
        cout<<"Please Input the Width: \n";
        cin>>Width;

        Area = Length * Width;

        cout<<"The Area of your rectanlge is: "<< Area << endl;



    }else if (Selection == 3)
    {
            double Length;
            double Width;
        
        cout<<"Please Input the length of the base \n";
        cin>>Length;
        cout<<"Please Input the Height of the triangle \n";
        cin>>Width;
        cout<<"The area of your triangle is: "<< Length * Width * .5<<endl;


    }else if (Selection == 4)
    {
        main();
    };
    
    
    
        
    
    Areas_of_All();



}

void Distance_Travled(){
    double Hours;
    double Speed;

    cout<<"What is the Speed in MPH of the vheicle? \n";
    cin>>Speed;
    while (Speed < 0)
    {
        cout<<"Please Input a number grater then 0 for speed\n";
    };
    
    cout<<"How long was the vheicle traveling? \n";
    cin>>Hours;

    while (Hours < 1)
    {
        cout<<"Please input a number of at least 1 for hours \n";
    };
    

    cout<<"Distance Travled\n";
    cout<<"__________________\n";
    for (int i = 0; i < Hours; i++)
    {
        cout<<i + 1<<"    "<< (i + 1) * Speed << endl;
        cout<<"   "<<endl;
    }
    cout<<"_____________________\n";







}

