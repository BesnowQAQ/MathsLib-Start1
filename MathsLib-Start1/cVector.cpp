// cVector.cpp -- Methods for the cVector class
#include <cmath>
#include "cVector.h"

using std::sqrt;

// cVector public method
cVector::cVector()	// Default constructor
{
	X = Y = Z = 0;
}

cVector::cVector(double x, double y, double z)	// Construct vector with given value
{
	X = x;
	Y = y;
	Z = z;
}

double cVector::length() const	// Report the length of the vector
{
	return sqrt(X * X + Y * Y + Z * Z);;
}

cVector cVector::normalize()	// Normalize the vector
{
	double len = length();
	return *this * (1.0 / len);
}

cVector cVector::cproduct(const cVector& b) const	// Cross product of vector a, b
{
	return cVector(Y * b.Z - Z * b.Y, X * b.Z - Z * b.X, X * b.Y - Y * b.X);
}

double cVector::dproduct(const cVector& b) const	// Dot product  of vector a and b
{
	return X * b.X + Y * b.Y + Z * b.Z;
}

void cVector::show() const							// Output the vector
{
	std::cout << "(" << X << "," << Y << "," << Z << ")";
}

double cVector::distance(const cVector& b) const
{
	return (*this - b).length();
}
// cVector operator overloading
cVector cVector::operator+(const cVector& b) const	// Add two vector a, b
{
	return cVector(X + b.X, Y + b.Y, Z + b.Z);
}

cVector cVector::operator-(const cVector& b) const	// Substract vector b from vector a
{
	return cVector(X - b.X, Y - b.Y, Z - b.Z);
}

cVector cVector::operator-() const					// Reverse sign of the vector
{
	return cVector(-X, -Y, -Z);
}

cVector cVector::operator*(const cVector& b) const	// Multiply vector a by vector b
{
	return cVector(X * b.X, Y * b.Y, Z * b.Z);
}

cVector cVector::operator+(double n) const			// Add scalar n to vector a
{
	return cVector(X + n, Y + n, Z + n);
}

cVector cVector::operator-(double n) const			// Substract scalar n from vector a
{
	return cVector(X - n, Y - n, Z - n);
}

cVector cVector::operator*(double n) const			// Multiply vector a by scalar n
{
	return cVector(X * n, Y * n, Z * n);
}

// friends method
cVector operator+(double n, const cVector& a)		// Add scalar n to vector a
{
	return a * n;
}

cVector operator-(double n, const cVector& a)		// Substract a from scalar n
{
	return cVector(n - a.X, n - a.Y, n - a.Z);
}

cVector operator*(double n, const cVector& a)		// Multiply scalar n by vector a
{
	return a * n;
}

std::ostream& operator<<(std::ostream& os, const cVector& a) // Output vector with the form (X,Y,Z)
{
	os << "(" << a.X << "," << a.Y << "," << a.Z << ")";
	return os;
}



