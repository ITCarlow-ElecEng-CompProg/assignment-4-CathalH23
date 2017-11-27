/** Electrical of a wire
 * Cathal Hogan
 * C00184521
 * 02-10-17
 */



#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;


//variable declaration
double resistance (double R,double L,double p);

int main()
{
    double R=0,L=0,p=0, Res;

    cout << "Electrical Wire Resistance Calculator\n" << endl;

    //While Loop
    while (R<=0)
    {
        cout<<"Enter a value for Radius: ";
        cin>> R;
    }

      while (L<=0)
    {
        cout<<"Enter a value for Length: ";
        cin>> L;
    }
      while (p<=0)
    {
        cout<<"Enter a value for Resitivity: ";
        cin>> p;
    }

	//Returns values for sub function
    Res = resistance(R,L,p);

    cout << fixed;
    cout << setprecision(2);

    //Cin not required, As the function will contiuinue to loop
    cout << "Wire resistance = " << Res << " Ohms" << endl;


    return 0;
}

// Function will calculate Res value and return to main function
double resistance (double R,double L, double p)
{
    double A,Res;

    A= M_PI * pow(R,2);

    Res = p * (L/A);

    return Res;
}
