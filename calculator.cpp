#include "calculator.h"

int Calculator::Add (double a, double b)
{
    return a + b+0.5;

}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}

int Calculator::Div (double a, double b)
{
	return a/b+0.5;
}

int Calculator::Pow(double a, double b)
{
    int result = 1;
    
    // Перевірка на випадок, якщо b дорівнює 0.
    if (b == 0) {
        return 1;
    }
    
    for (int i = 0; i < b; i++) {
        result *= a;
    }

    return result;
}
