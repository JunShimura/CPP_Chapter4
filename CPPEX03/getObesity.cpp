int getObesity(double bmi) {
	int obesity;
	if (bmi < 18.5) {
		obesity = -1;	//低体重
	}
	else if (bmi < 25.0) {
		obesity = 0;	//標準体重
	}
	else if (bmi < 30.0) {
		obesity = 1;	//肥満度１
	}
	else if (bmi < 35.0) {
		obesity = 2;	//肥満度2
	}
	else if (bmi < 40.0) {
		obesity = 3;	//肥満度3
	}
	else {
		obesity = 4;
	}
	return obesity;
}