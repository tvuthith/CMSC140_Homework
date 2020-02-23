#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int units;
	double cost;

	cout << "How many units were sold?: ";
	cin >> units;
	if (units <= 0) cout << "Units must be greater than 0";
	else
		if (units >= 1 && units <= 9) cout << "The total cost is $ " << units * 99;
		else
		if (units >= 10 && units <= 19) cout << "The total cost is $" << setprecision(2) << fixed << showpoint
			<< static_cast<double>(units * 99 * 4 / 5);
		else
			if (units >= 20 && units <= 49) cout << "The total cost is $" << setprecision(2) << fixed << showpoint
				<< static_cast<double>(units * 99 * 7 / 10);
			else
				if (units >= 50 && units <= 99) cout << "The total cost is $" << setprecision(2) << fixed << showpoint
					<< static_cast<double>(units * 99 * 3 / 5);
				else
					if (units >= 100) cout << "The total cost is $" << setprecision(2) << fixed << showpoint
						<< static_cast<double>(units * 99 * 1 / 2);
	return 0;

}
