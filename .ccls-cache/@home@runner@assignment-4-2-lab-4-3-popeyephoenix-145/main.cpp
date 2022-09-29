
//?  [Problem Definition]
//*     Write a program that asks for the weight of the package and
//*     the distance it is to beshipped, and then displays the charges.
//** Input Validation :
//* 	Do not accept values of 0 or less for the weight of the package.
//* 	Do not accept weights of more than 20 kg (this is the maximum weight the company will ship).
//* 	Do not accept distances of less than 10 miles or more than 3,000 miles.
//*     These are the company’s minimum and maximum shipping distances.

// Program Outline
// Input
// 	Two Integers, weight and distance.  ( 0< weight <= 20, 10 <= distance < 3000)
// Output
// 	the Charges, Weight,  and Distances
// Program Logic
// 	Input statement for user input
// 	make the validation statement for the input value
// 	make the decision structure to determine the rate based on weight
// 	calculate the total charges
// 		if distance > 500, ( charges = (distance / 500) * rate);
// 		else, charges = rate;
// 	print out the charge, distance, weight.

#include <iostream>
using namespace std;
int main() {
  const double RATE2 = 1.10;
  const double RATE6 = 2.20;
  const double RATE10 = 3.70;
  const double RATE20 = 4.80;
  double weight, distance, dRate, price;

  cout << "Enter the package weight and distance\n";
  cin >> weight >> distance;
  //? Input Validation
  if ((weight < 0) && (weight > 20)) {
    cout << "The package weight must be a positive number and less than 20.\n";
    exit(0);
  }

  if (weight < 2)
    dRate = RATE2;
  else if (weight < 6)
    dRate = RATE6;
  else if (weight < 10)
    dRate = RATE10;
  else if (weight <= 20)
    dRate = RATE20;
  else {
    cout << "The weight must be less than 20\n";
    exit(0);
  }

  if (distance < 500)
    price = dRate;
  else
    price = (distance / 500.0) * dRate;
  cout << "The shipping price for package is " << price << endl;
}
