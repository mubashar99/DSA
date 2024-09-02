/*Consider an object Shape that encompasses both a Square and a
Rectangle as the data members. The Square object should have an
attribute for its area, while the Rectangle object should have
attributes for length and breadth. Identify the most suitable data
structures for this scenario and write a C program to define the
structure and demonstrate their usage.*/


#include <stdio.h>
// Define a structure for Square
struct Square {
    double side; // Side length of the square
};
// Define a structure for Rectangle
struct Rectangle {
    double length; // Length of the rectangle
    double breadth; // Breadth of the rectangle
};
// Calculate the area of a Square
double calculateSquareArea(struct Square s) {
    return s.side * s.side;
}
// Calculate the area of a Rectangle
double calculateRectangleArea(struct Rectangle r) {
    return r.length * r.breadth;
}
int main() {
    // Create instances of Square and Rectangle
    struct Square mySquare = { 5.0 }; // Assume a side length of 5 units
    struct Rectangle myRectangle = { 6.0, 8.0 }; // Assume length = 6 units, breadth = 8 units
 // Calculate areas
    double squareArea = calculateSquareArea(mySquare);
    double rectangleArea = calculateRectangleArea(myRectangle);
 // Display results
    printf("Square Area: %.2lf square units\n", squareArea);
    printf("Rectangle Area: %.2lf square units\n", rectangleArea);

    return 0;
}
