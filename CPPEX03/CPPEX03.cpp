#include <iostream>
using namespace std;
#include "chapter4.h"
#include "getObesity.h"

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

  int obesity = getObesity(bmi);
  const string obesityMessage[] = { "��̏d�ł�","���ʑ̏d�ł�","�얞(1�x)�ł�","�얞(2�x)�ł�", "�얞(3�x)�ł�", "�얞(4�x)�ł�" };
  cout << obesityMessage[obesity+1] << endl;

  return 0;
}
