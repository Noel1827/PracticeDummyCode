#include <iostream>
#include <cmath>
#include "cmath"

using namespace std;




void radius(double x1, double y1, double xCenter, double yCenter) {
    cout << "The circle's center x y is: " << xCenter << "-" << yCenter << endl;
    cout << "A given point on circle x1 y1 is: " << x1 << "-" << y1 << endl;
    cout << "The radius is: " << sqrt(pow(x1-xCenter,2)+ pow(y1-yCenter,2))  << endl;
};
