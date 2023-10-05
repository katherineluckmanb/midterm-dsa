#include <cmath>
#include <stdexcept>
#include <iostream>

class Operation
{
private:
    double angle;

public:
    Operation(double a) : angle(a) {}

    double sine()
    {
        return sin(angle);
    }

    double cosine()
    {
        return cos(angle);
    }

    double tangent()
    {
        if (cos(angle) == 0)
        {
            std::cout << "tan(" << angle << ") is not defined." << std::endl;
            throw std::invalid_argument("tan()");
        }
        return tan(angle);
    }

    double squareRoot()
    {
        if (angle < 0)
        {
            std::cout << "sqrt(" << angle << ") is not defined for negative numbers." << std::endl;
            throw std::invalid_argument("sqrt()");
        }
        return sqrt(angle);
    }

    double exponential()
    {
        return exp(angle);
    }

    double logarithm()
    {
        if (angle <= 0)
        {
            std::cout << "log(" << angle << ") is not defined for non-positive numbers." << std::endl;
            throw std::invalid_argument("log()");
        }
        return log(angle);
    }

    double naturalLogarithm()
    {
        if (angle <= 0)
        {
            std::cout << "ln(" << angle << ") is not defined for non-positive numbers." << std::endl;
            throw std::invalid_argument("ln()");
        }
        return log(angle);
    }
};