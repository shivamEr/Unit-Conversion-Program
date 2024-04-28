#include <iostream>
using namespace std;
// Celsius to kelvin and fahrenheit converting
void kelFah(float celsius)
{
    double k, f;
    k = celsius + 273.15;
    f = (celsius * 9 / 5) + 32;
    cout << "\n\t\t\t\t" << k << " Kelvin\n";
    cout << "\n\t\t\t\t" << f << " Fahrenheit\n";
}

// Kelvin to Celsius and Fahrenheit converting
void celFah(int kelvin)
{
    double c, f;
    c = kelvin - 273.15;
    f = kelvin * 9 / 5 - 459.67;
    cout << "\n\t\t\t\t" << c << " Celsius\n";
    cout << "\n\t\t\t\t" << f << " Fahrenheit\n";
}

// Fahrenheit to Kelvin and Celsius Converting
void celKel(int fahrenheit)
{
    double c, k;
    c = (fahrenheit - 32) * 5 / 9;
    k = (fahrenheit + 459.67) * 5 / 9;
    cout << "\n\t\t\t\t" << c << " Celsius\n";
    cout << "\n\t\t\t\t" << k << " Kelvin\n";
}
int main()
{
    double temperature;
    char unit;
    while (1)
    {
        cout << "\n\n\t\t\t\t*********** Temperature Converter *************:";
        cout << "\n\n\t\t\t\tEnter Temperature : ";
        cin >> temperature;
        cout << "\n\t\t\t\tc for Celsius\n\t\t\t\tk for Kelvin\n\t\t\t\tf for Fahrenheit\n\t\t\t\tEnter Unit :";
        cin >> unit;
        switch (unit)
        {
        case 'c':
            kelFah(temperature);
            break;
        case 'f':
            celKel(temperature);
            break;
        case 'k':
            celFah(temperature);
            break;

        default:
            exit(0);
        }
    }
}