// Cette ligne est spécifique à Visual C++
// pour pouvoir utiliser le scanf
//#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>

#include <iostream>
//#include <fstream>
//#include <time.h>
#include <cmath>

#include <CMesure.h>
#include <FctMathMesure.h>

#define MAXCHAR 255

using namespace std;


void benchMark1(void)
{

	CMesure a(0.23, 0.07);               // CMesure(double v, double it, char loi = 'N');
	CMesure b(2.0, 0.1, 'R');            // CMesure(double v, double it, char loi);
	CMesure c(-1.0, 0.19);               // CMesure(double v, double it, char loi = 'N');
	CMesure d(1.0, 0.1, 120.0);          // CMesure(double v, double e, double a);
	CMesure e((char*)"(3.1+/-0.00005|95.45%)"); // CMesure(char* m);
	CMesure f;                           // CMesure();
	CMesure g(0.0);

	char ReInit[MAXCHAR];


	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;
	cout << "e = " << e << endl;
	cout << "f = " << f << endl;
	cout << "g = " << g << endl;

	cout << endl;

    cout << "fabs(c)   = " << fabs(c)   << endl;
	cout << "sin(a)    = " << sin(a)    << endl;
	cout << "cos(a)    = " << cos(a)    << endl;
	cout << "tan(a)    = " << tan(a)    << endl;
	cout << "acos(cos(a))   = " << acos(cos(a))   << endl;
	cout << "asin(sin(a))   = " << asin(sin(a))   << endl;
	cout << "atan(tan(a))   = " << atan(tan(a))   << endl;
	cout << "cosh(a)   = " << cosh(a)   << endl;
	cout << "sinh(a)   = " << sinh(a)   << endl;
	cout << "tanh(a)   = " << tanh(a)   << endl;
	cout << "log(a)    = " << log(a)    << endl;
	cout << "log10(a)  = " << log10(a)  << endl;
	cout << "exp(a)    = " << exp(a)    << endl;
	cout << "sqrt(a)   = " << sqrt(a)   << endl;

	cout << "ceil(a)   = " << ceil(a)   << endl;
	cout << "floor(a)  = " << floor(a)  << endl;

	cout << "pow(a, b) = "       << pow(a, b)       << endl;
	cout << "pow(a.Val(), b) = " << pow(a.Val(), b) << endl;
	cout << "pow(a, b.Val()) = " << pow(a, b.Val()) << endl;
	cout << "atan2(a, b) = " << atan2(a, b) << endl;

	cout << endl;
	cout << "e = "           << e           << endl;
	cout << "g = "           << g           << endl;
	cout << "modf(e, &g) = " << modf(e, &g) << endl;
	cout << "e = "           << e           << endl;
	cout << "g = "           << g           << endl;
    
	cout << endl;


    cout << "a+b        = " << (a+b)       << endl;
    cout << "a-b        = " << (a-b)       << endl;
    cout << "a*b        = " << (a*b)       << endl;
    cout << "a/b        = " << (a/b)       << endl;

    a+=b;		cout << "a+=b       = " << a         << endl;
    a-=b;       cout << "a-=b       = " << a         << endl;
    a*=b; 		cout << "a*=b       = " << a         << endl;
    a/=b;       cout << "a/=b       = " << a         << endl;
    a=b;        cout << "a=b        = " << a         << endl;

	cout << endl;

	//cout << system("DIR .") << endl;

	
	a = CMesure(0.5, 0.1);
	b = CMesure(1.0, 0.1);
	c = CMesure(1.1, 0.1);
	d = CMesure(1.5, 0.1);

	/*
	fstream fin("./input.txt", ios::in);
	fin.getline(ReInit, MAXCHAR, '\n');	a = CMesure(ReInit);
	fin.getline(ReInit, MAXCHAR, '\n'); b = CMesure(ReInit);
	fin.getline(ReInit, MAXCHAR, '\n');	c = CMesure(ReInit);
	fin.getline(ReInit, MAXCHAR, '\n');	d = CMesure(ReInit);
	fin.close();
	*/

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;
	


	cout << endl;

	cout << "a == d [ FAUX ] => " << (a==d ? "VRAI" : "FAUX") << endl; // significativement diff�rents
	cout << "b == c [ VRAI ] => " << (b==c ? "VRAI" : "FAUX") << endl; // insignificativement diff�rents

	cout << "a != d [ VRAI ] => " << (a!=d ? "VRAI" : "FAUX") << endl; // significativement diff�rents
	cout << "b != c [ FAUX ] => " << (b!=c ? "VRAI" : "FAUX") << endl; // insignificativement diff�rents

	cout << "a < d  [ VRAI ] => " << (a<d  ? "VRAI" : "FAUX") << endl; // a.valeur < d.valeur et a!=d
	cout << "d < a  [ FAUX ] => " << (d<a  ? "VRAI" : "FAUX") << endl; // d.valeur > a.valeur et d!=a
	cout << "c < b  [ FAUX ] => " << (c<b  ? "VRAI" : "FAUX") << endl; // insignificativement diff�rents
	cout << "b < c  [ FAUX ] => " << (b<c  ? "VRAI" : "FAUX") << endl; // insignificativement diff�rents

	cout << "a > d  [ FAUX ] => " << (a>d  ? "VRAI" : "FAUX") << endl; // a.valeur < d.valeur et a!=d
	cout << "d > a  [ VRAI ] => " << (d>a  ? "VRAI" : "FAUX") << endl; // d.valeur > a.valeur et d!=a
	cout << "c > b  [ FAUX ] => " << (c>b  ? "VRAI" : "FAUX") << endl; // insignificativement diff�rents
	cout << "b > c  [ FAUX ] => " << (b>c  ? "VRAI" : "FAUX") << endl; // insignificativement diff�rents

	cout << "a <= d [ VRAI ] => " << (a<=d ? "VRAI" : "FAUX") << endl; // a.valeur < d.valeur et a!=d
	cout << "d <= a [ FAUX ] => " << (d<=a ? "VRAI" : "FAUX") << endl; // d.valeur > a.valeur et d!=a
	cout << "c <= b [ VRAI ] => " << (c<=b ? "VRAI" : "FAUX") << endl; // insignificativement diff�rents
	cout << "b <= c [ VRAI ] => " << (b<=c ? "VRAI" : "FAUX") << endl; // insignificativement diff�rents

	cout << "a >= d [ FAUX ] => " << (a>=d ? "VRAI" : "FAUX") << endl; // a.valeur < d.valeur et a!=d
	cout << "d >= a [ VRAI ] => " << (d>=a ? "VRAI" : "FAUX") << endl; // d.valeur > a.valeur et d!=a
	cout << "c >= b [ VRAI ] => " << (c>=b ? "VRAI" : "FAUX") << endl; // insignificativement diff�rents
	cout << "b >= c [ VRAI ] => " << (b>=c ? "VRAI" : "FAUX") << endl; // insignificativement diff�rents

	cout << endl;

    cout << "Conjug(c) = " << Conjug(c) << endl;
	// cout << "Nulle(c)  = " << Nulle(c)  << endl;

	cout << endl;

	cout << "-b  = "         << (-b)          << endl;
	cout << "a.Val() + b = " << (a.Val() + b) << endl;
	cout << "a.Val() - b = " << (a.Val() - b) << endl;
	cout << "a.Val() * b = " << (a.Val() * b) << endl;
	cout << "a.Val() / b = " << (a.Val() / b) << endl;

	cout << endl;
}

void benchMark2(void)
{
	
	CMesure A(0, 0);
	CMesure B(1, 1);
	CMesure C(0, 0);
	CMesure D(0, 0);

	C = A * B;	// C = (0, 1.0e260)
	D = C - A;	// D = (0, 1.0e260)


	cout << "A = " << A << endl;
	cout << "B = " << B << endl;
	cout << "C = A * B = " << C << endl;
	cout << "D = C - A = " << D << endl;

	cout << "C == A => " << (C == A ? "VRAI" : "FAUX") << endl;
	cout << "C != A => " << (C != A ? "VRAI" : "FAUX") << endl;
	
	cout << endl;
}

void test_incertitude_U_egal_RI(void)
{
    CMesure fc(250000.0);
    CMesure Ct(0.000000001, 2.0,'P');

    CMesure Rt = 1.0 / (fc * Ct);
	
    CMesure trois(27.0, 1.0, 'R');

    cout << "fc =" << fc << endl;
	cout << "Ct =" << Ct << endl;
	cout << "Rt =" << Rt << endl;

    CMesure R1(Rt.Val(), 5.0,'P');
    CMesure ft = 1.0 / (R1 * Ct);

	cout << "R1 =" << R1 << endl;
	cout << "ft =" << ft << endl;

    cout << "log10(Rt) = " << log10(Rt) << endl;
	cout << "trois = " << log2(cbrt(trois)) << endl;
}


double sg_square(double periode, double kTe)
{
	double reste = kTe - (floor(kTe / periode) * kTe);

	if (reste < (periode/2.0)) return 12.00;
	else 					   return  0.00; 
}

void test_incertitude_filtrage_prem_ordre(bool b_print)
{
	double periode_square = 4.0;

	CMesure Meas = sg_square(periode_square, 0.0);

	CMesure Out_eq1(00.00,0.01, 'R');
	//CMesure Out_eq1;
	CMesure Out_eq2 = Out_eq1;
	CMesure Out_eq1_zm1 = Out_eq1;
	CMesure Out_eq2_zm1 = Out_eq2;

	double Te = 0.04; // 40ms
	double Tf = 1.0; // 1sec
	CMesure fac = (1.0 - exp(-2.0 * M_PI * Te/Tf));


	if (b_print) cout << "Out = " << Out_eq1 << endl;
	if (b_print) cout << "Meas = " << Meas << endl;
	if (b_print) cout << "fac = " << fac << endl;

	if (b_print) cout << "Out[init].Uc() = " << Out_eq1.Eps() << endl;
	if (b_print) cout << "Out[init].Uc() = " << Out_eq2.Eps() << endl;

	for(int NumIteration = 0; NumIteration < 1000; NumIteration++)
	{
		Meas = CMesure(sg_square(periode_square, NumIteration * Te), 0.01, 'R');
		// Meas = sg_square(periode_square, NumIteration * Te);

		Out_eq1 = ((1.0 - fac) * Out_eq1_zm1) + (fac *  Meas               ); // equation 1
		Out_eq2 = (              Out_eq2_zm1) + (fac * (Meas - Out_eq2_zm1)); // equation 2

		/*
		if (b_print) cout << "[" << NumIteration << "]\t-->\t" << Meas << "\t" << Out_eq1_zm1 << endl;
		if (b_print) cout << "[" << NumIteration << "]\t-->\t" << Meas << "\t" << Out_eq2_zm1 << endl;
		if (b_print) cout << endl;
		*/
		if (b_print) cout << "[" << NumIteration << "]\t-->\t" << Out_eq1_zm1.IT() << "\t" << Out_eq2_zm1.IT() << endl;

		Out_eq1_zm1 = Out_eq1;
		Out_eq2_zm1 = Out_eq2;
	}
}

void test_incertitude_filtrage_prem_ordre_z(void)
{
	double periode_square = 4.0;

	CMesure Meas = sg_square(periode_square, 0.0);
	CMesure Meas_zm1 = Meas;
	CMesure Meas_zm2 = Meas;

	CMesure Out_euler(00.00,0.01, 'R');
	CMesure Out_euler_zm1 = Out_euler;

	CMesure Out_trapeze(00.00,0.01, 'R');
	CMesure Out_trapeze_zm1 = Out_trapeze;

	CMesure Out_simpson(00.00,0.01, 'R');
	CMesure Out_simpson_zm1 = Out_simpson;
	CMesure Out_simpson_zm2 = Out_simpson_zm1;

	double Te = 0.04; // 40ms
	double tau = 1.0; // 1sec


	for(int NumIteration = 0; NumIteration < 1000; NumIteration++)
	{
		Out_euler_zm1 = Out_euler;
		Out_trapeze_zm1 = Out_trapeze;

		Out_simpson_zm2 = Out_simpson_zm1; 
		Out_simpson_zm1 = Out_simpson;
		
		Meas_zm2 = Meas_zm1;
		Meas_zm1 = Meas;
		
		Meas = CMesure(sg_square(periode_square, NumIteration * Te), 0.01, 'R');
		// Meas = sg_square(periode_square, NumIteration * Te);

		Out_euler   = ((Te / (tau + Te)) * Meas_zm1) + ((1.0 - (Te / (tau + Te))) * Out_euler_zm1); // equation 1 (EULER)
		Out_trapeze = (Te/(Te+2.0*tau))*(Meas + Meas_zm1) - Out_trapeze_zm1 * ((Te - 2.0*tau)/(Te + 2.0*tau)); // TRAPEZES
		Out_simpson = (Te/(Te + 3.0*tau))*(Meas + Meas_zm2) + ((4*Te)/(Te + 3*tau))*(Meas_zm1 - Out_simpson_zm1) - Out_simpson_zm2 * ((Te - 3.0*tau)/(Te + 3.0*tau)); // SIMPSON


		cout << "[" << NumIteration * Te << "]\t-->\t" << Meas << "\t" << Out_euler << "\t" << Out_trapeze << "\t" << Out_simpson << endl;		
	}
}


int main(int argc, char *argv[])
{

	//benchMark1();
	//benchMark2();
	//test_incertitude_U_egal_RI();

	//test_incertitude_filtrage_prem_ordre(true);
	test_incertitude_filtrage_prem_ordre_z();

	//getchar();

	return 0;
}
