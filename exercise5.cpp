#include <iostream>
#include <cmath>
using namespace std;

float calculateTriangleArea(float base, float height) {
    return 0.5 * base * height;
}

float calculateRectangleArea(float length, float width) {
    return length * width;
}

float calculateSquareArea(float side) {
    return side * side;
}

int main() {
    int choice = 0;
    
    while (true) {
        cout << "Choose a shape to calculate the area:\n";
        cout << "1. Triangle\n";
        cout << "2. Rectangle\n";
        cout << "3. Square\n";
        cout << "4. Quit the program\n";
        cout << "Enter selection : ";
        cin >> choice;

        if(choice == 4) {
            break;
        }
        else if(choice == 3) {
            float side;
            cout << "Enter the side length of the square: ";
            cin >> side;
            cout << "The area of the square is: " << calculateSquareArea(side) << endl;
        }
        else if (choice == 2) {
            float length, width;
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            cout << "The area of the rectangle is: " << calculateRectangleArea(length, width) << endl;
        }
        else if(choice == 1)  {
            float base, height;
            cout << "Enter the base length of the triangle: ";
            cin >> base;
            cout << "Enter the height of the triangle: ";
            cin >> height;
            cout << "The area of the triangle is: " << calculateTriangleArea(base, height) << endl;
        }
        else {
            cout << "Your input was " << choice << " which is invalid input." << endl;
            cout << "Please enter a valid input." << endl;
        }
    }
    
    cout << "Program exited successfully." << endl;
    return 0;
}