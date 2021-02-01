#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double Reynolds_calc(double rho,double u,double D,double mu)
{
   double Re;
   Re=rho*u*D/mu;
   return Re;
}

int main ()
{ 
  double rho,u,D,mu;

  cout << "input density in kg/m3 : ";
  cin >> rho;
  cout << "input velocity in m/s :";
  cin >> u;
  cout <<"input characteristic lengh in m :";
  cin >> D;
  cout <<"input dynamic viscosity :";
  cin >> mu;
  // calculate Re number
  cout<< "Reynolds classicWrite : ";
  cout<< rho*u*D/mu<< endl;
  cout<< "Reynolds withFunction : ";
  cout<< Reynolds_calc(rho,u,D,mu)<< endl;

    return 0;
}

// void Reynolds_calc(double rho,double u,double D,double mu)
