#include <iostream>
using namespace std;
#include "chapter4.h"

int main() {
  double height;	// �g��
  double weight;	// �̏d
  double bmi;		// BMI

  // �L�[���͂�height�Ɋi�[����
  cout << "�g���icm�j����͂��Ă��������F";
  cin >> height;

  // �L�[���͂�weight�Ɋi�[����
  cout << "�̏d�ikg�j����͂��Ă��������F";
  cin >> weight;

  // �g���Ƒ̏d����BMI���v�Z����
  bmi = getBmi(height, weight);

  // BMI����ʂɕ\������
  cout << "���Ȃ���BMI�́A" << bmi << "�ł��B" << endl;

  return 0;
}
