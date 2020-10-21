#include "Polynomial.hpp"
#include <string>
#include <cmath>
#include <iostream>

Polynomial::Polynomial(double coeficient, double exponent)
{
    this->coeficient = coeficient;
    this->exponent = exponent;
}

double Polynomial::getCoeficient()
{
    return this->coeficient;
}

double Polynomial::getExponent()
{
    return this->exponent;
}

std::string Polynomial::ToString()
{
    return std::to_string(this->getCoeficient()) + "x^" + std::to_string(this->getExponent());
}

double Polynomial::evaluateAt(int x)
{
    return this->getCoeficient() * pow(x, getExponent());
}

Polynomial Polynomial::getDerivative()
{
    // double exponent;
    // double coeficient;

    // coeficient = this->coeficient * this->exponent;
    // exponent = this->exponent - 1;
    // Polynomial derivative(coeficient, exponent);
    return Polynomial(this->coeficient * this->exponent, this->exponent - 1);
}

int main()
{

    Polynomial *polynomial = new Polynomial(3, 4);
    std::cout << polynomial->getCoeficient() << std::endl;
    std::cout << polynomial->getExponent() << std::endl;
    Polynomial derivative(polynomial->getDerivative());
    std:: cout << derivative.getCoeficient() << std::endl;
    std::cout << derivative.getExponent() << std::endl;

    //    std:: cout << polynomial->getDerivative() << std::endl;

    return 0;
}

// TRY TO FIND THE INTEGRAL !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!