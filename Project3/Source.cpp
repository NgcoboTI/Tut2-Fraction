
#include <iostream>

using namespace std;

class Fraction
{
private :
	int num;
	int den;

public:
	Fraction()                          // contructor
	{
		num = 0;
	    den = 1;
	}

	void setNumDenom(int n, int d) {     //accessor
		num = n;
		den = d;

	}
	void getNumDenom(int n, int d) {      //mutator
		num;
		den;
	}
	                      
	Fraction& operator+(const Fraction& f)
	{
		Fraction myFrac;
		myFrac.num = num*f.den + den*f.num;
		myFrac.den = den*f.den;
		return myFrac;

	}

	Fraction& operator-(const Fraction& part)   //subtaction
	{
		Fraction myFrac;
		myFrac.num = num*part.den - den*part.num;  
		myFrac.den = den*part.den;
		return myFrac;
	}

	Fraction& operator*(const Fraction& p)
	{
		Fraction myFrac;
		myFrac.num = num*p.num;
		myFrac.den = den*p.den;
		return myFrac;
	}

	Fraction& operator/(const Fraction& p)    //Division overloaded
	{
		Fraction myFrac;
		myFrac.num = num*p.den;
		myFrac.den = den*p.num;
		return myFrac;
	}

	void print()       // void method for printing
	{
		cout << num << "/" << den << endl;
	}

	~Fraction() {                         //deconructor
	}
};


int main()
{
	int a, b, c, d;
	Fraction part1, part2;
	Fraction myFrac, result;

	cout << "Do arithemitic operation on two fractions" << endl;
	cout << "Enter first fraction : (a/b)" << endl;
	cin >> a;
	cin >> b;
	cout << "Your fraction :" << a << "/" << b << endl;
	cout << "Enter first fraction : (a/b)" << endl;
	cin >> c;
	cin >> d;
	cout << "Your fraction :" << c << "/" << d << endl;

	part1.setNumDenom(a, b);
	part2.setNumDenom(c, d);
	//display all the achieve results
	cout << "=======================================================================" << endl << endl << "Resluts" << endl<<endl;
	
	result = part1 + part2;        
	cout << "Addition :   ";
	result.print();

	myFrac = part1 - part2;
	cout << "Subtrction :  ";
	myFrac.print();

	myFrac = part1*part2;
	cout << "Multiplication : ";
	myFrac.print();

	myFrac = part1/part2;
	cout << "Division :    ";
	myFrac.print();

	system("pause");
	return 0;
}
//T.I