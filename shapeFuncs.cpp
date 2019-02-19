#include <iostream>
#include <string>
#include <sstream>  // for ostringstream
#include <iomanip> // for setprecision
#include <cmath>

using namespace std;


#include "shapes.h"
#include "shapeFuncs.h"
#include "utility.h"

// Compute distance between two points

double distanceBetween(Point p, Point q) {
  // Precondition: Two real points are inputted to the diagram
  // Postcondition: Distance between points is outputted
  double distance = sqrt(pow((q.x-p.x),2)+pow((q.y-p.y),2));
  return distance;
}

 
// The function initPoint below illustrates passing a struct by pointer.
// Inside this function:
//  p   is the address of the struct Point
// (*p) refers to the struct Point itself (we dereference the pointer)
// (*p).x refers to the x member of the point
// (*p).y refers to the y member of the point
// p->x is a shortcut for (*p).x ( -> means deference AND THEN go inside the struct)
// p->y is a shortcut for (*p).y ( -> means deference AND THEN go inside the struct)


void initPoint(struct Point *p, double xVal, double yVal) {
  // Precondition: Pointer and 2 expected values are inputted to function
  // Postcondition: Pointer points at the 2 expected values
  p->x = xVal;
  p->y = yVal;
  return;
}


string pointToString(Point p, int precision) {
  ostringstream oss;
  oss << setprecision(precision); // set precision to 3 decimal places
  oss << "(" << p.x << "," << p.y << ")";
  return oss.str();
}

string boxToString(Box b, int precision) {
  
  // SAMPLE FORMAT: ul=(3.4,-5),w=5,h=7
  
  return "stub!"; // TODO: Delete this line and comment and replace with appropriate code
}
 


bool pointsApproxEqual(Point p1, 
		       Point p2, 
		       double tolerance) {
  // Two points are approximately equal if the distance between them
  // is less than our tolerance.  (If we want to test for 
  // exact equality, we can pass in a value of zero.)

  return distanceBetween(p1,p2) < tolerance;

}

bool boxesApproxEqual(Box b1, Box b2, double tolerance) {
  // Precondition: Two boxes are inputted to the function
  // Postcondition: Outputs whether or not the boxes are approximately equal
  if (fabs((b2.ul.x - b1.ul.x)) < tolerance && fabs((b2.ul.y - b1.ul.y)) < tolerance && fabs((b2.width - b1.width)) < tolerance && fabs((b2.height - b1.height)) < tolerance) return true;
  return false;

}


// Now write a function to initialize a box.
// You'll need to initialize the upper left x and y,
// the width and the height.
// Note: there is a struct Point inside the struct Box.
// So here's a clue: For the x value, use (*b).ul.x or (b->ul).x 
//  The y value is similar.
// There is also a way to "reuse" initPoint, if you are feeling 
//  confident in your understanding of pointers and structs.

void initBox(struct Box *b, double ulx, double uly, double w, double h)
{
  // Precondition: Empty struct and 4 points are inputted
  // Postcondition: A pointer to a box is created

  (b->ul).x = ulx;
  (b->ul).y = uly;
  b->width = w;
  b->height = h;
  return; // @@@ For a void function a "naked return" is a "do nothing" stub
}


double areaOfBox(Box b) {
  // Precondition: Actual box with 4 different points is inputted
  // Postcondition: Area of box is outputted
 
  return b.width * b.height; 
  
}
