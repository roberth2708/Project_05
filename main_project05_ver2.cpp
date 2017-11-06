/*****
*
*   PROGRAMMER:
*   COURSE:
*
*   PROJECT 05: Circle Class
*   Write a Circle class  that has the following member variables:
*           radius: a double
*           pi: a double initialized with the value 3.14159
*   The class should have the following member functions:
*           Default Constructor. A default constructor  that sets radius
*                                to 0.0.
*           Constructor. Accepts the radius of the circle as an argument.
*           setRadius. A mutator function for the radius variable.
*           getRadius. An accessor function for the radius variable.
*           getArea. Returns the area of the circle, which is calculated
*                    as area = pi * radius * radius
*           getDiameter. Returns the diameter of the circle, which is
*                        calculated as diameter = radius * 2
*           getCircumference. Returns the circumference of the circle,
*                             which is calculated as
*                             circumference = 2 * pi * radius
*   Write a program that demonstrates the Circle class by asking the user
*   for the circle’s radius, creating a Circle object, and then reporting
*   the circle’s area, diameter, and circumference.
*
*****/
#include <iostream>
#include <iomanip>
using namespace std;

/***
*   Class
***********/
class Circle
{
private:
    double radius;
    const double PI = 3.14159;
public:
    // Default constructor: Set radius to zero
    Circle()
        { radius = 0.0; }

    // Constructor: set value of the radius variable
    void setRadius(double r)
        { radius = r; }

    double getRadius() const
        { return radius; }

    double getArea() const
        { return (PI * radius * radius); }

    double getDiameter() const
        { return (radius * 2); }

    double getCircumference() const
        { return (2 * PI * radius); }
};


/***
*   Prototype Functions
***********************/
void programInfo();


/***
*   Main function
*****************/
int main()
{
    double radiusOfCircle;          // Radius
    Circle circle;                  // Object of class Circle

    programInfo();

    /// User enters radius
    cout << "Type the radius of the circle: ";
    cin >> radiusOfCircle;
    circle.setRadius(radiusOfCircle);

    /// Display results
    cout << "\nRESULTS:";
    cout << "\nRadius of the circle = " << circle.getRadius();
    cout << "\nArea of the circle = " << circle.getArea();
    cout << "\nDiameter of the circle = " << circle.getDiameter();
    cout << "\nCircumference of the circle = " << circle.getCircumference();

    return 0;
}

/***
*   Function Definitions
************************/
/// programInfo: This function explain the program
void programInfo()
{
    cout << "\nPROGRAMMER: "
         << "\nCOURSE: ";
    cout << "\n\nPROJECT 05: Circle Class"
         << "\nThis program uses a class to calculate the area, diameter, "
         << "\nand circumference of a circle. The user has to enter the size "
         << "\nof the radius."
         << "\n--------------------------------------------------------------"
         << endl;
}
