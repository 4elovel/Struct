#include <iostream>

using namespace std;

struct fractional{
    int numerator;
    int denominator;
    
    fractional(int numerator, int denominator) {

        this->numerator = numerator;
        this->denominator = denominator;

        for (size_t i = 10; i > 1; i--)
        {
            if (this->numerator % i == 0 && this->denominator % i == 0) {

                this->numerator /= i;
                this->denominator /= i;
            }
        }
    }

    void print() {
        cout << "fractional equals " << numerator << "/" << denominator << endl;
    }

};

fractional multiply(fractional frac1,fractional frac2) {

    int buf1 = frac1.numerator * frac2.numerator;
    int buf2 = frac1.denominator * frac2.denominator;

    fractional result(buf1, buf2);
    return result;
}

int main()
{
    int num1, num2;
    cout << "write your first fractional:\n" << "numerator-> \n" ;
    cin >> num1;
    cout << "denominator-> \n";
    cin >> num2;
    
    fractional first(num1,num2);
    first.print();

    cout << "write your second fractional:\n" << "numerator-> \n";
    cin >> num1;
    cout << "denominator-> \n";
    cin >> num2;

    fractional second(num1,num2);
    second.print();

    fractional third = multiply(first, second);
    cout << "\nResult:\n";
    third.print();

}
