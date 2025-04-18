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

void test_pValues(void)
{
	CMesure a = CMesure(0.5, 0.1);
	CMesure b = CMesure(1.0, 0.1);
	CMesure c = CMesure(1.1, 0.1);
	CMesure d = CMesure(1.5, 0.1);
	CMesure e = CMesure(0.1, 1.0);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "d = " << d << "\td.pValue() = " << d.pValue() << endl;
	cout << "e = " << e << "\te.pValue() = " << e.pValue() << endl;

	cout << "a == d [ FAUX ] => " << (a==d ? "VRAI" : "FAUX") << endl; // significativement différents
	cout << "(a - d).pValue() = " << (a - d).pValue() << endl; // significativement différents

	cout << "b == c [ VRAI ] => " << (b==c ? "VRAI" : "FAUX") << endl; // insignificativement différents
	cout << "(b - c).pValue() = " << (b - c).pValue() << endl; // insignificativement différents
}

void benchMark1(void)
{

	CMesure a(0.23, 0.07);               // CMesure(double v, double it, char loi = 'N');
	CMesure b(2.0, 0.1, 'R');            // CMesure(double v, double it, char loi);
	CMesure c(-1.0, 0.19);               // CMesure(double v, double it, char loi = 'N');
	CMesure d(1.0, 0.1, 120.0);          // CMesure(double v, double e, double a);
	CMesure e((char*)"(3.1 +/- 0.00005 | 95.45%)"); // CMesure(char* m);
	CMesure f;                           // CMesure();
	CMesure g(0.0);



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
	e = CMesure(0.1, 1.0);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;
	cout << "e = " << e << endl;
	


	cout << endl;

	cout << "a == d [ FAUX ] => " << (a==d ? "VRAI" : "FAUX") << endl; // significativement différents
	cout << "b == c [ VRAI ] => " << (b==c ? "VRAI" : "FAUX") << endl; // insignificativement différents

	cout << "a != d [ VRAI ] => " << (a!=d ? "VRAI" : "FAUX") << endl; // significativement différents
	cout << "b != c [ FAUX ] => " << (b!=c ? "VRAI" : "FAUX") << endl; // insignificativement différents

	cout << "a < d  [ VRAI ] => " << (a<d  ? "VRAI" : "FAUX") << endl; // a.valeur < d.valeur et a!=d
	cout << "d < a  [ FAUX ] => " << (d<a  ? "VRAI" : "FAUX") << endl; // d.valeur > a.valeur et d!=a
	cout << "c < b  [ FAUX ] => " << (c<b  ? "VRAI" : "FAUX") << endl; // insignificativement différents
	cout << "b < c  [ FAUX ] => " << (b<c  ? "VRAI" : "FAUX") << endl; // insignificativement différents

	cout << "a > d  [ FAUX ] => " << (a>d  ? "VRAI" : "FAUX") << endl; // a.valeur < d.valeur et a!=d
	cout << "d > a  [ VRAI ] => " << (d>a  ? "VRAI" : "FAUX") << endl; // d.valeur > a.valeur et d!=a
	cout << "c > b  [ FAUX ] => " << (c>b  ? "VRAI" : "FAUX") << endl; // insignificativement différents
	cout << "b > c  [ FAUX ] => " << (b>c  ? "VRAI" : "FAUX") << endl; // insignificativement différents

	cout << "a <= d [ VRAI ] => " << (a<=d ? "VRAI" : "FAUX") << endl; // a.valeur < d.valeur et a!=d
	cout << "d <= a [ FAUX ] => " << (d<=a ? "VRAI" : "FAUX") << endl; // d.valeur > a.valeur et d!=a
	cout << "c <= b [ VRAI ] => " << (c<=b ? "VRAI" : "FAUX") << endl; // insignificativement différents
	cout << "b <= c [ VRAI ] => " << (b<=c ? "VRAI" : "FAUX") << endl; // insignificativement différents

	cout << "a >= d [ FAUX ] => " << (a>=d ? "VRAI" : "FAUX") << endl; // a.valeur < d.valeur et a!=d
	cout << "d >= a [ VRAI ] => " << (d>=a ? "VRAI" : "FAUX") << endl; // d.valeur > a.valeur et d!=a
	cout << "c >= b [ VRAI ] => " << (c>=b ? "VRAI" : "FAUX") << endl; // insignificativement différents
	cout << "b >= c [ VRAI ] => " << (b>=c ? "VRAI" : "FAUX") << endl; // insignificativement différents

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

void test_incertitude_U_egal_RI(void)
{
    CMesure fc(250000.0);
    CMesure Ct(0.000000001, 10.0,'P');

    CMesure Rt = 1.0 / (fc * Ct);
	
    CMesure trois(27.0, 1.0, 'R');

    cout << "fc =" << fc << endl;
	cout << "Ct =" << Ct << endl;
	cout << "Rt =" << Rt << endl;

    CMesure R1(Rt.Val(), 5.0,'P');
    CMesure ft = 1.0 / (R1 * Ct);

	cout << "R1 =" << R1 << endl;
	cout << "ft =" << ft << endl;
}

void test_incertitude_w0_FiltrePasseBande(void)
{
	CMesure L(1.08 / 1000.0, 5.0, 'P');			// 1.08 mH
	CMesure Cu(470.0 / 1000000000.0, 10.0, 'P');	// 470.0 nF

	CMesure C = 2.0 * Cu;

	CMesure R1(10.0, 10.0, 'P');		// 10.0 Ohm
	CMesure R2(100.0, 10.0, 'P');	// 100.0 Ohm

	CMesure w0 = 1.0 / sqrt(L * C);		// rad/s
	CMesure f0 = w0 / (2.0 * M_PI);		// Hz
	CMesure Q1 = 1.0 / (R1 * C * w0);
	CMesure Q2 = 1.0 / (R2 * C * w0);

	cout << "L = " << L << endl;
	cout << "Cu = " << Cu << endl;
	cout << "C = " << C << endl;
	cout << "R1 = " << R1 << endl;
	cout << "R2 = " << R2 << endl;
	cout << endl;

	cout << "f0 = " << f0 << endl;
	cout << "Q1 = " << Q1 << endl;
	cout << "Q2 = " << Q2 << endl;
}


double sg_square(double periode, double kTe)
{
	double reste = kTe - (floor(kTe / periode) * kTe);

	if (reste < (periode/2.0)) return 12.00;
	else 					   return  0.00; 
}

void test_incertitude_filtrage_prem_ordre(void)
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


	cout << "Out = " << Out_eq1 << endl;
	cout << "Meas = " << Meas << endl;
	cout << "fac = " << fac << endl;

	cout << "Out[init].Uc() = " << Out_eq1.Eps() << endl;
	cout << "Out[init].Uc() = " << Out_eq2.Eps() << endl;

	for(int NumIteration = 0; NumIteration < 200; NumIteration++)
	{
		Meas = CMesure(sg_square(periode_square, NumIteration * Te), 0.01, 'R');

		// version distribuée --> IT converge
		Out_eq1 = ((1.0 - fac) * Out_eq1_zm1) + (fac *  Meas); // equation 1

		// version factorisée --> IT diverge
		Out_eq2 = (Out_eq2_zm1) + (fac * (Meas - Out_eq2_zm1)); // equation 2

		/*
		if (b_print) cout << "[" << NumIteration << "]\t-->\t" << Meas << "\t" << Out_eq1_zm1 << endl;
		if (b_print) cout << "[" << NumIteration << "]\t-->\t" << Meas << "\t" << Out_eq2_zm1 << endl;
		if (b_print) cout << endl;
		*/
		cout << "[" << NumIteration << "]\t-->\t" << Out_eq1_zm1.IT() << "\t" << Out_eq2_zm1.IT() << endl;

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


//int main(int argc, char *argv[])
int main(void)
{

	// benchMark1();
	test_pValues();
	// test_incertitude_U_egal_RI();
	// test_incertitude_w0_FiltrePasseBande();

	// test_incertitude_filtrage_prem_ordre();
	// test_incertitude_filtrage_prem_ordre_z();

	// getchar();

	return 0;
}
