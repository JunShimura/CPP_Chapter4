#include <iostream>
#include "getVolumeSurface.h"
using namespace std;
int main() {
	double x, y, z;
	cout << "�������:";
	cin >> x;
	cout << "���������:";
	cin >> y;
	cout << "���s�����:";
	cin >> z;
	double volume, suraface;
	volume = getVolumeSurface(x, y, z, &suraface);
	cout << "�̐ς�" << volume << endl << "�\�ʐς�" << suraface << endl;
	return 0;
}