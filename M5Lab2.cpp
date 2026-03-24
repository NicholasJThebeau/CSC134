// M5LAB2
// Nicholas Thebeau
// 3/24/2026

#include <iostream>
#include <limits>
using namespace std;

// Declare (Write the prototypes for)
// the getLength,
// getWidth, getArea, and displayData
// functions here.
double getLength();
double getWidth();
double getArea();
void displayData();

int main()
{
	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors
	
   double length,    // The rectangle's length
          width,     // The rectangle's width
          area;      // The rectangle's area
          
   // Get the rectangle's length.
   length = getLength();
   
   // Get the rectangle's width.
   width = getWidth();
   
   // Get the rectangle's area.
   area = getArea();
   
   // Display the rectangle's data.
   displayData(length, width, area);
          
   return 0;
}

double getLength(){
    double Length;
    cout<<"Please input a length\n";
    cin>>Length;
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout<<"Invalid input, must be a number.";
        cin>>Length;
    }
    

    return Length;

}

double getWidth(){
    double Width;
    cout<<"Please input a length\n";
    cin>>Width;
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout<<"Invalid input, must be a number.";
        cin>>Width;
    }
    

    return Width;

}

double getArea(double Length, double width){
    return Length * width;
}

void displayData(double length, double width, double area){
    cout<<"Length: "<<length<<endl;
    cout<<"Width: "<<width<<endl;
    cout<<"Area: "<<area<<endl;


}
