// Chertousova PE
// Task 3 DZ
// 15.10.2022
#include <iostream>
using namespace std;
int main()
{
	float a, b, c, D;

	cin >> a >> b >> c;

	D = b * b - 4 * a * c;

	if (D > 0) {
		cout << "2";
	}
	if (D == 0) {
		cout << "1";
	}
	if (D < 0) {
		cout << "0";
	}

}