#include<iostream>
using namespace std;
double add(double y, double x)
{
	return y + x;
}
double mult(double y, double x)
{
	return y * x;
}
double sub(double y, double x)
{
	return y - x;
}
double div1(double y, double x)
{
	return y / x;
}		
void read(double &a, double &b)
{
	cout << "\nEnter tow number please :: \n";
	cout << "Enter number 1 :: ";
	cin >> a;
	cout << "Enter number 2 :: ";
	cin >> b;	
}
int Choose()
{
	int c = 0;
	cout << "1) Add tow number  ::Enter --> 1 " << endl;
	cout << "2) sub tow number  ::Enter --> 2 " << endl;
	cout << "3) Mult tow number ::Enter --> 3 " << endl;
	cout << "4) div tow number  ::Enter --> 4 " << endl;
	cout << "5) Exit Program    ::Enter --> 5 " << endl<<endl;
	cout << "Enetr number of operation :: ";
	cin >> c;
	return c;

}
void Calculator()
{
	double a = 0, b = 0,i=0,r=0;
	
	while (true)
	{
		bool x = true;
		i = Choose();
		if(i>=1&&i<=4)
		read(a, b);

		if (i == 1)
		{
			r=add(a, b);
		}
		else if (i == 2)
		{
			r = sub(a, b);
		}
		else if (i == 3)
		{
			r = mult(a, b);
		}
		else if (i == 4)
		{
			if (b == 0)
			{
				cout << "Erorr Don't divide by zero" << endl;
				x = false;
			}
			else
			{
				r = div1(a, b);
			}
		}
		else if (i == 5)
		{
			x = false;
			break;
		}
		else
		{
			cout << "\nError !!?..\nPlease Enter form Rang 1 t0 5 only. \n\n";
			x = false;
		}

		if(x==true)
		cout <<endl<< "Result = " << r << endl << endl;
		
	}
}
int main()
{
	Calculator();
}