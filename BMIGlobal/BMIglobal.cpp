#include <iostream>
using namespace std;
double height;	// 身長
double weight;	// 体重
double bmi;		// BMI
void getBmi() {
	int bmi = 0;
	height /= 100;							// cm単位をm単位にする
	bmi = weight / height / height;	// BMIを計算する
	return;								// 戻り値としてBMIを返す
}
int main() {
	cout << "身長（cm）を入力してください：";	// キー入力をheightに格納する
	cin >> height;
	cout << "体重（kg）を入力してください：";	// キー入力をweightに格納する
	cin >> weight;
	getBmi();	// 身長と体重からBMIを計算する
	cout << "あなたのBMIは、" << bmi << "です。" << endl;	// BMIを画面に表示する
	return 0;
}
