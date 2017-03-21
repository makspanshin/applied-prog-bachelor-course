#pragma once
#include <stdio.h>
#include <iostream>

using namespace std;

class line
{
public:
	double a, b, c;
	line()
	{
		double A = a;
		double B = b;
		double C = c;
	}
	


	bool peresech(line first, line second)
	{
		
        double zn = det(first.a, first.b, second.a, second.b);
		if (abs(zn) == 0)
			return false;
		else
		{


			double x = -det(first.c, first.b, second.c, second.b) / zn;
			double y = -det(first.a, first.c, second.a, second.c) / zn;
			cout << x<<endl;
			cout << y<<endl;
			return true;

		}
	}
	
	double det(double a, double b, double c, double d)
	{
		return a * d - b * c;
	}



	~line();
};

int main()
{
	line line1;
	line line2;
	line1.a = 1;
	line1.b = 9;
	line1.c = 2;
	line2.a = 2;
	line2.b = 6	;
	line2.c = 7;
	line k;
	k.peresech(line1, line2);
	system("pause");
  return 0;
}