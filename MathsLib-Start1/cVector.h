// cVector.h
#ifndef cVector_H_
#define cVector_H_
#include <iostream>
class cVector
{
private:
	double X;
	double Y;
	double Z;
		
public:
	cVector();
	cVector(double x, double y, double z);
	double length() const;						// Report the length of the vector
	cVector normalize();						// Normalize the vector
	cVector cproduct(const cVector& b) const;	// Vector cross product
	double dproduct(const cVector& b) const;	// Vector dot product
	void show() const;							// Output the vector
	double distance(const cVector& b) const;	// Distance between two point
	// operator overloading
	cVector operator+(const cVector& b) const;	// Vector Addition
	cVector operator-(const cVector& b) const;	// Vector Substraction
	cVector operator-() const;					// Vector Negation
	cVector operator*(const cVector& b) const;	// Vector Multiplication
	cVector operator+(double n) const;			// Vector-Scalar Addition
	cVector operator-(double n) const;			// Vector-Scalar Substraction
	cVector operator*(double n)	const;			// Vector-Scalar Multiplication
	// friends
	friend cVector operator+(double n, const cVector& a);	// Scalar-Vector Addition
	friend cVector operator-(double n, const cVector& a);	// Scalar-Vector Substraction
	friend cVector operator*(double n, const cVector& a);	// Scalar-Vector Multiplication
	friend std::ostream& operator<<(std::ostream& os, const cVector& a); // Output Vector
};

#endif // !cVector_H_