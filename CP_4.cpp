// СР №3: «Функції математичної бібліотеки»
// Варіант 19 == 7
#include <iostream>
#include <math.h>
using namespace std;
int main(void) {
	// 1
	int a = 3, x = 2, e = 5, c = 6;
	float L = (pow(pow(e,x)-pow(cos(pow(x,2)*pow(a,5)),4) + pow(atan(a-pow(x,5)),4),1/2.0))/(pow(fabs(a+x*pow(c,4)),1/e) );
	printf("%f\n", L);
	// 2
	int y = 4, h = 11;
	float A = (tan(pow(y,3)-pow(h,4))+pow(h,2))/(pow(sin(h),3)+y);
	printf("%f\n", A);
	// 3
	int t= 9;
	float P = (pow(sin(x),3)+log(2*y + 3*x))/(pow(t,e)+pow(x,1/2.0));
	printf("%f\n", P);
	// 4
	// cot() немає в math.h => cos / sin
	L = pow(cos(c)/sin(c),2)+((2*pow(x,2)+5)/(pow(c+t,1/2.0)));
	printf("%f\n",L);
}