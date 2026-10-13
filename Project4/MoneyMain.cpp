#include <iostream>
#include "Money.h"

using namespace std;

int main()
{
	Money m1, m2;
	cin >> m1; cout << m1 << endl;
	cin >> m2; cout << m2 << endl;

	Money m3;
	m3 = m1 + m2;
	cout << m3 << endl;

	cout << m1 << "==" << m2 << "is";
	if (m1 == m2) cout << "true";
	else cout << "false";



	return 1;
}