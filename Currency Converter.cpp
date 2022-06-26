#include <iostream>
#include <string.h>
#include <ctime>

using namespace std;

void convert(double amount, string cur, string cur2)   
{
    double amount2;

    if (cur == "usd")
    {
        if (cur2 == "euro")
        {
            amount2 = amount * 0.95;
            cout << "USD is eqaul to " << amount2 << " EURO";
        }
        if (cur2 == "pkr")
        {
            amount2 = amount * 208.40;
            cout << "USD is equal to " << amount2 << " PKR";
        }
        if (cur2 == "inr")
        {
            amount2 = amount * 78.25;
            cout << "USD is equal to " << amount2 << " INR";
        }
        if (cur2 == "aed")
        {
            amount2 = amount * 3.67;
            cout << "USD is equal to " << amount2 << " AED";
        }
    }
    if (cur == "euro")
    {
        if (cur2 == "usd")
        {
            amount2 = amount * 1.06;
            cout << "EURO is eqaul to " << amount2 << " USD";
        }
        if (cur2 == "pkr")
        {
            amount2 = amount * 220.10;
            cout << "EURO is equal to " << amount2 << " PKR";
        }
        if (cur2 == "inr")
        {
            amount2 = amount * 82.64;
            cout << "EURO is equal to " << amount2 << " INR";
        }
        if (cur2 == "aed")
        {
            amount2 = amount * 3.88;
            cout << "EURO is equal to " << amount2 << " AED";
        }
    }
    if (cur == "pkr")
    {
        if (cur2 == "usd")
        {
            amount2 = amount * 0.0048;
            cout << "PKR is eqaul to " << amount2 << " USD";
        }
        if (cur2 == "euro")
        {
            amount2 = amount * 0.0046;
            cout << "PKR is equal to " << amount2 << " EURO";
        }
        if (cur2 == "inr")
        {
            amount2 = amount * 0.38;
            cout << "PKR is equal to " << amount2 << " INR";
        }
        if (cur2 == "aed")
        {
            amount2 = amount * 0.018;
            cout << "PKR is equal to " << amount2 << " AED";
        }
    }
    if (cur == "inr")
    {
        if (cur2 == "usd")
        {
            amount2 = amount * 0.013;
            cout << "INR is eqaul to " << amount2 << " USD";
        }
        if (cur2 == "euro")
        {
            amount2 = amount * 0.012;
            cout << "INR is equal to " << amount2 << " EURO";
        }
        if (cur2 == "pkr")
        {
            amount2 = amount * 2.66;
            cout << "INR is equal to " << amount2 << " PKR";
        }
        if (cur2 == "aed")
        {
            amount2 = amount * 0.047;
            cout << "INR is equal to " << amount2 << " AED";
        }
    }
    if (cur == "aed")
    {
        if (cur2 == "usd")
        {
            amount2 = amount * 0.013;
            cout << "AED is eqaul to " << amount2 << " USD";
        }
        if (cur2 == "euro")
        {
            amount2 = amount * 0.012;
            cout << "AED is equal to " << amount2 << " EURO";
        }
        if (cur2 == "pkr")
        {
            amount2 = amount * 2.66;
            cout << "AED is equal to " << amount2 << " PKR";
        }
        if (cur2 == "inr")
        {
            amount2 = amount * 0.047;
            cout << "AED is equal to " << amount2 << " INR";
        }
    }
}


int main()
{
    double amount;
    string cur, cur2;
    cout << "Which currency do you want to convert from\n";
    cout << "The currency options are: USD, EURO, PKR, INR, AED\n";
    cin >> cur;

    cout << "Enter the amount you want to convert\n";
    cin >> amount;

    cout << "Which currency do you want to conver to\n";
    cout << "The currency options are: USD, EURO, PKR, INR, AED\n";
    cin >> cur2;

    convert(amount, cur, cur2);
}

