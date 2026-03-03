//CSC 134
// m1lab
// Nicholas Thebeau
// 3/2/2026

#include <iostream>
using namespace std;


int main(){

    // Variables
    double len1, wid1, len2, wid2; 
    double area1, area2;

    cout << "What's the length and width of the first rectangle? \n";
    cin >> len1;
    cout << "What's the width of the first rectangle? \n";
    cin >> wid1;
    cout << "What's the length of the second rectangle? \n";
    cin >> len2;
    cout << "What's the width of the second rectangle? \n";
    cin >> wid2;

    area1 = len1 * wid1;
    area2 = len2 * wid2;

    
    cout<< "The area of the first rectangle is: " << area1 << endl;
    cout<< "The area of the second rectangle is: " << area2 <<endl;
    if (area1 > area2)
    {
        cout <<"The first rectangle is the biggest";
    }else if (area2 > area1)
    {
        cout << "The second rectangle is the biggest";
    }else if (area1 == area2)
    {
        cout << "The Rectangles are the same size";
    }
    
    
    

    

    return 0;
}