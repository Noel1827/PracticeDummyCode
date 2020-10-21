#include <string>
class Polynomial
{
    double coeficient;
    double exponent;

public:
    Polynomial(double, double);
    double getCoeficient();
    double getExponent();
    std::string ToString();
    double evaluateAt(int);
    Polynomial getDerivative();
};
