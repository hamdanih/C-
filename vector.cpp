#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double vector_length(double x,double y,double z)
{
   double l;
   l = sqrt(pow(x,2.0)+pow(y,2.0)+pow(z,2.0));
   return l;
}

int main ()
{
  double l,x,y,z;
  // double vector[3][1];
  cout << "input x : ";
  cin >> x;
  cout << "input y :";
  cin >> y;
  cout <<"input z :";
  cin >> z;
  double vector[3][1]={{x},{y},{z}};


  // cout << "input x : ";
  // cin >> vector[0][0];
  // cout << "input y :";
  // cin >> vector[1][0];
  // cout <<"input z :";
  // cin >> vector[2][0];
  // // cout <<"input l:";
  // // cin >> l;
  // // calculate Re number
  // cout<< "the length is : ";
  l=vector_length(vector[0][0],vector[1][0],vector[2][0]);
  std::cout<< l <<std::endl;

    return 0;
}

// void Reynolds_calc(double rho,double u,double D,double mu)
