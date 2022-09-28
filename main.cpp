
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
