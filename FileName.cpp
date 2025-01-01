/* Koristeci C ili C++ programski jezik napisati funkciju koja kao argument uzima
string sa heksadecimalnim znamenkama, a vraca decimalnu vrijednost tog broja. Kod
testirati unutar terminala na vasem racunalu.*/

#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int fun(string hex) {
	char const* c = hex.c_str();
	int dec = 0;
	int i = 0;

	int position = 0;
	while (c[position] != '\0')
		position++;

	while (c[i] != '\0') {

		switch (toupper(c[i]))
		{
		case 'A':
			dec += 10 * pow(16, (position - 1 - i));
			break;
		case 'B':
			dec += 11 * pow(16, (position - 1 - i));
			break;
		case 'C':
			dec += 12 * pow(16, (position - 1 - i));
			break;
		case 'D':
			dec += 13 * pow(16, (position - 1 - i));
			break;
		case 'E':
			dec += 14 * pow(16, (position - 1 - i));
			break;
		case 'F':
			dec += 15 * pow(16, (position - 1 - i));
			break;

		default:
			dec += ((int)c[i] - '0') * pow(16, (position - 1 - i));
			break;
		}
		i++;
	}

	return dec;
}
int main() {
	string str;
	cin >> str;
	int dec = fun(str);
	cout << dec;
}