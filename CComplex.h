#ifndef CCCOMPLEX_H
#define CCCOMPLEX_H

#include <cmath>
#include <iostream>
#include <string>

using namespace std;

/**
 * class to handle complex numbers
 * c = r + ji 
 * supporting variable data types for r and i
 */

class CComplex {

	friend ostream& operator <<(ostream& out, const CComplex& c)
	{
		out << c.m_real << "+j" << c.m_imaginary;
		return out;
	}

	//Compare operators
	//needed for STL containers
	friend bool operator<(const CComplex& c1, const CComplex& c2) {return c1.abs() < c2.abs();}
	friend bool operator>(const CComplex& c1, const CComplex& c2) {return c1.abs() > c2.abs();}
	friend bool operator==(const CComplex& c1, const CComplex& c2) {return (c1.m_real == c2.m_real) && (c1.m_imaginary == c2.m_imaginary);}
	

public:	
	// Some unary operators
	CComplex& operator++() {++m_real; ++m_imaginary; return *this;}       // Prefix increment operator.
	CComplex operator++(int) {CComplex temp = *this; ++*this; return temp;}    // Postfix increment operator.
	CComplex operator=(const CComplex& c) {m_real = c.m_real; m_imaginary = c.m_imaginary; return *this;}



private:
    /**
     * Real part 
     */
    int m_real;
    /**
     * Imaginary part 
     */
    int m_imaginary;
public:

	CComplex(int real = 0, int imaginary = 0): m_real(real),m_imaginary(imaginary) {}				
	
	CComplex(const CComplex& origin)
	{
		m_real = origin.m_real;
		m_imaginary = origin.m_imaginary;
	}

	float abs() const 
	{
		return sqrt((float)(m_real*m_real+m_imaginary*m_imaginary));
	}
};


#endif /* COMPLEX_H */
