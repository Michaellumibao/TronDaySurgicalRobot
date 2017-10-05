#include <cmath>
#include <iostream>
#include <cstdlib>
#include <iomanip>


using namespace std;

double endEffectorX(double alpha, double theta)
{
	return cos(alpha * M_PI / 180) * cos(theta * M_PI / 180);
}
double endEffectorY(double alpha, double theta)
{
	return sin(alpha * M_PI / 180) * cos(theta * M_PI / 180);
}
double endEffectorZ(double theta)
{
	return sin(theta * M_PI / 180);
}

int main()
{
	double alpha = 0.0;
	double theta = 0.0;
	cout << "Please enter alpha ";
	cin >> alpha;
	alpha = alpha;
	cout << "Please enter theta ";
	cin >> theta;

	double x = endEffectorX(alpha, theta);
	double y = endEffectorY(alpha, theta);
	double z = endEffectorZ(theta);

	cout << fixed << setprecision(2);
	cout << "x = " << x << endl << "y = " << y << endl << "z = " << z;
}
