#include <iostream>
using namespace std;

#define N 5
#define M 10
int sum_element_of_main_diagonale(int matrix[N][N]);
int main() {
	int matrix[N][M]{};

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			matrix[i][j] = rand() % 101;
		}
		cout << endl;
	}


	cout << "Sum: " << sum_element_of_main_diagonale(matrix[N][N]);
}