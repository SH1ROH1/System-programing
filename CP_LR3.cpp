#define _USE_MATH_DEFINES 
#include <cmath>
#include <iostream>
#include <iomanip>
#include <locale.h>
#include <cstdio>
using namespace std;

int main() {
  setlocale(LC_ALL, "Ukr.UTF-8");
	setlocale(LC_NUMERIC, "C");

	// lab_work_03_01
	double pi = M_PI;
	double r, h;
	cout.setf( ios::fixed );
  cout << "Введіть радіус основи циліндра: " << endl;
  cin >> r;
	cout << "Введіть висоту циліндра: " << endl;
  cin >> h;
	
  double sb = 2 * pi * r * h;          // Бічна поверхня
  double sp = sb + 2 * pi * r * r;     // Повна поверхня
  double v  = pi * r * r * h;          // Об'єм

  cout << "Вхідні величини та результати обчислень: "  << endl
	<< "Радіус основи циліндра: " << setprecision(3) << r << endl
  << "Висота циліндра: " <<  h << endl
  << "Бічна поверхня циліндра: " <<  sb << endl
  << "Повна поверхня циліндра: " << sp << endl
  << "Об'єм циліндра: " << v << endl;

	// lab_work_03_02
	double x,y,z;
	cout <<"Введіть значення трьох дійсних змінних: " << endl;
	cin >> x >> y >> z ;
	double a1 = pow(pi+pow(x,2)+pow(sin(y*z),2),0.5);
	double a2 = log(2/(pow(x,2)+pow(y,2)+1));
	double a3 = a1 - a2;
	double a4 = (y/(2+pow(y,2)+fabs(y*z)));
	double a5 = (acos(a4));
	double a = a5 * a3;
	double b1 = exp(-3 * pow(x, 2) + (y / 5) - z);
	double b2 = pow(tan(x),2);
	double b3 = b2/(1+sin((pi*y)/2));
	double b4 = pow(b3,1/3.0);
	double b5 = ((x+y+z)/(x*y*z));
	double b = b1+b4+b5;
	cout <<"Вхідні величини та результати обчислень: " << endl
	<<"Вхідні величини: " << endl
	<<"x = " << setprecision(3) <<  x << endl
	<<"y = " << y << endl
	<<"z = " << z << endl
	<<"Результати обчислень: " << endl
	<<"a1= " << a1 << " b1= " << b1 << endl
	<<"a2= " << a2 << " b2= " << b2 << endl
	<<"a3= " << a3 << " b3= " << b3 << endl
	<<"a4= " << a4 << " b4= " << b4 << endl
	<<"a5= " << a5 << " b5= " << b5 << endl
	<<"a= " << a << " b= " << b << endl;

	// lab_work_03_03
	char ac='A',bc='B',cc,dc;
	int ai=18,bi=-18,ci,di;
	unsigned int au=18,bu=24,cu,du;
	float af=12.34567,bf=12.34567,cf,df;
	cout << "Введіть значення змінних cc та dc символьного типу: " << endl;
	cin >> cc >> dc;
	cout << "Значення змінної ac "<< setprecision(3) << ac << endl
	<<"Значення змінної bc = " << bc << endl
	<< "Значення змінної cc = " << cc << endl
	<< "Значення змінної dc = " << dc << endl
	<< "Введіть значення змінних ci та di цілого типу зі знаком: " << endl;
	cin >> ci >> di;
	cout << "Значення змінної ai = " << setprecision(3) << ai << endl
	<< "Значення змінної bi =" << setprecision(3) << bi << endl
	<< "Значення змінної ci = " << setprecision(3) << ci << endl
	<< "Значення змінної di = " << setprecision(3) << di << endl
	<< "Введіть значення змінних cu та цілого типу без знаку: " << endl;
	cin >> cu >> du;
	cout << "Значення змінної au = "<< au << endl
	<< au << " - in 10-й нотації "<< endl
	<< oct << au << " - in 8-й нотації "<< endl
	<< hex << au << " - in 16-й нотації "<< endl
	<< "Значення змінної bu = "<< bu << endl
	<< bu << " - in 10-й нотації "<< endl
	<< oct << bu << " - in 8-й нотації "<< endl
	<< hex << bu << " - in 16-й нотації "<< endl
	<< "Значення змінної cu = "<< cu << endl
	<< cu << " - in 10-й нотації "<< endl
	<< oct << cu << " - in 8-й нотації "<< endl
	<< hex << cu << " - in 16-й нотації "<< endl
	<< "Значення змінної du = "<< du << endl
	<< du << " - in 10-й нотації "<< endl
	<< oct << du << " - in 8-й нотації "<< endl
	<< hex << du << " - in 16-й нотації "<< endl
	<< "Введіть значення змінних cf та df дійсного типу" << endl;
	cin >> cf >> df;
	cout << "Значення змінної af= " << scientific << setprecision(4) << af << endl
	<< "Значення змінної bf= " <<  bf<< endl
	<< "Значення змінної cf= " << cf<< endl
	<< "Значення змінної df= " <<  df<< endl
	<< "Значення змінної af-"<< setfill("X") << setw(6)<< setprecision(4) << af<< endl
	<< "Значення змінної af-"<< left <<setfill("X") << setw(6)<< setprecision(4) << af<< endl
	<< "Значення змінної af-" <<setfill("X") << setw(3)<< setprecision(4) << af<< endl
	<< "Значення змінної af-"<< left << setfill("X") << setw(3)<<setprecision(4)<<af<< endl;
	return 0;
}