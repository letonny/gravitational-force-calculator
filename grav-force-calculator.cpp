#include <iostream>
#include <cmath>
using namespace std;

//****************************************************************************************************

void massInputs(double&, double&);
double convertedValues(double&);
void radiusInput(double&);
double calcForce (double, double, double);
void displayForce(double);

int main ()
{
    double mass1,
           mass2,
           convertedmass1,
           convertedmass2,
           radius,
           force;


    massInputs(mass1, mass2);

    convertedmass1 = convertedValues(mass1);
    convertedmass2 = convertedValues(mass2);

    radiusInput(radius);

    force = calcForce(convertedmass1, convertedmass2, radius);

    displayForce(force);

    return 0;
}

//****************************************************************************************************

void massInputs(double & m1, double & m2)
{
    cout << "Enter the mass 1 and mass 2 in lbs: "; 
    cin >> m1 >> m2; 
}

//****************************************************************************************************

double convertedValues (double & mass_kg)
{
    double conversion;
    const double KG = 0.45;

    conversion = (mass_kg * KG);

    return conversion;
}

//****************************************************************************************************

void radiusInput(double & radius)
{
    cout << "Enter the distance between the centers of the masses in meters: ";
    cin >> radius;
    cout << endl;
}

//****************************************************************************************************

double calcForce(double m1, double m2, double radius)
{
    double force;
    const double GRAVCONST = 6.674 * pow(10, -11);

    force = (GRAVCONST * (m1 * m2)) / radius;

    return force;
}

//****************************************************************************************************

void displayForce(double force)
{
    cout << "The gravitational force is: " << force << " N" <<endl;
}


/*

Enter the mass 1 and mass 2 in lbs: 24 95
Enter the distance between the centers of the masses in meters: 6000

The gravitational force is: 5.13564e-12 N

*/
