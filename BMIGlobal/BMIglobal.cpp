#include <iostream>
using namespace std;
double height;	// �g��
double weight;	// �̏d
double bmi;		// BMI
void getBmi() {
	int bmi = 0;
	height /= 100;							// cm�P�ʂ�m�P�ʂɂ���
	bmi = weight / height / height;	// BMI���v�Z����
	return;								// �߂�l�Ƃ���BMI��Ԃ�
}
int main() {
	cout << "�g���icm�j����͂��Ă��������F";	// �L�[���͂�height�Ɋi�[����
	cin >> height;
	cout << "�̏d�ikg�j����͂��Ă��������F";	// �L�[���͂�weight�Ɋi�[����
	cin >> weight;
	getBmi();	// �g���Ƒ̏d����BMI���v�Z����
	cout << "���Ȃ���BMI�́A" << bmi << "�ł��B" << endl;	// BMI����ʂɕ\������
	return 0;
}
