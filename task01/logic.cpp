double middle_arythemytc(int* vector , int size) {
	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += vector[i];
	}
	return sum / size;
}


int find_best_group(double a, double b, double c) {
   
	return a > b && a > c ? a :
		b > c ? b : c;
}

