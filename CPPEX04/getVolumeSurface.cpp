double getVolumeSurface(double x, double y, double z, double* suraface) {
	double volume = x * y * z;
	*suraface = (x * y + x * z + y * z) * 2.0;
	return volume;
}