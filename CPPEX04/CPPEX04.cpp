#include <iostream>
#include "getVolumeSurface.h"
using namespace std;
int main() {
	double x, y, z;
	cout << "•‚ð“ü—Í:";
	cin >> x;
	cout << "‚‚³‚ð“ü—Í:";
	cin >> y;
	cout << "‰œs‚ð“ü—Í:";
	cin >> z;
	double volume, suraface;
	volume = getVolumeSurface(x, y, z, &suraface);
	cout << "‘ÌÏ‚Í" << volume << endl << "•\–ÊÏ‚Í" << suraface << endl;
	return 0;
}