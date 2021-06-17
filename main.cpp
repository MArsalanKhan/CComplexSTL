
#include <iostream>
#include <list>

#include "CComplex.h"




int main()
{
	//Declare the list
	list<CComplex> cl;

	//Add some elements
	cl.push_back(CComplex(1,2));
	cl.push_back(CComplex(2));
	cl.push_back(CComplex(-1,2));
	cl.push_back(CComplex(1,23));

	//Define an iterator
	list<CComplex>::iterator i;

	int count = 0;
	for(i = cl.begin(); i != cl.end(); i++)
	{
		cout << count++ << ": = " << *i << endl;
	}

	//Sort the list
	cl.sort();
	count = 0;
	for(i = cl.begin(); i != cl.end(); i++)
	{
		cout << count++ << ": = " << *i << endl;
	}

	return 0;
}

