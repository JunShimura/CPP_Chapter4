int getObesity(double bmi) {
	int obesity;
	if (bmi < 18.5) {
		obesity = -1;	//��̏d
	}
	else if (bmi < 25.0) {
		obesity = 0;	//�W���̏d
	}
	else if (bmi < 30.0) {
		obesity = 1;	//�얞�x�P
	}
	else if (bmi < 35.0) {
		obesity = 2;	//�얞�x2
	}
	else if (bmi < 40.0) {
		obesity = 3;	//�얞�x3
	}
	else {
		obesity = 4;
	}
	return obesity;
}