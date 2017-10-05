#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <fstream>

using namespace std;

double xArcEnding ()
{
	double x = 0.0;
	double radius = 0.0;
	double angle = 0.0;
	cout << "Please enter starting x value, radius(cm), and angle(degrees)"
		<< endl;
	cin >> x >> radius >> angle;
	return (radius * cos(angle * M_PI / 180) + x);
}

double yArcEnding ()
{
	double y = 0.0;
	double radius = 0.0;
	double angle = 0.0;
	cout << "Please enter starting y value, radius(cm), and angle(degrees)"
		<< endl;
	cin >> y >> radius >> angle;
	return (radius * sin(angle * M_PI / 180) + y);

}
int main()
{
	string choice = "";
	while (choice != "end")
	{
		cout << "a, b, c, or end" << endl;
		cin >> choice;
		if (choice == "a")
		{
			double xEnding = 0.0;
			xEnding = xArcEnding();
			cout << "The x coordinate is " << xEnding;
		}
		else if (choice == "b")
		{
			double yEnding = 0.0;
			yEnding = yArcEnding(y, radius, angle);
			cout << "The y coordinate is " << yEnding;
		}
		else if (choice == "c")
		{
			
		}
	}
}
