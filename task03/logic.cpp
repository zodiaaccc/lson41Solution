#define N 5 

int sum_element_of_main_diagonale(int matrix[N][N]) {

	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum += matrix[i][i];
	}
	return sum;
}