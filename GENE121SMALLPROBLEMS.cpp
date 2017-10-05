#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <fstream>

using namespace std;

double xArcEnding (double x, double radius, double angle)
{
	return (radius * cos(angle * M_PI / 180) + x);
}

double yArcEnding (double y, double radius, double angle)
{
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
			double x = 0.0;
			double radius = 0.0;
			double angle = 0.0;
			double xEnding = 0.0;
			cout << "Please enter starting x value, radius(cm), and angle(degrees)"
				<< endl;
			cin >> x >> radius >> angle;
			xEnding = xArcEnding(x, radius, angle);
			cout << "The x coordinate is " << xEnding;
		}
		else if (choice == "b")
		{
			double y = 0.0;
			double radius = 0.0;
			double angle = 0.0;
			double yEnding = 0.0;
			cout << "Please enter starting y value, radius(cm), and angle(degrees)"
				<< endl;
			cin >> y >> radius >> angle;
			yEnding = yArcEnding(y, radius, angle);
			cout << "The y coordinate is " << yEnding;
		}
		else if (choice == "c")
		{
			
		}
	}
}
