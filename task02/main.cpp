#include <iostream>
using namespace std;

#define N 5
#define M 10
int main() {
	int matrix[N][M]{};
	
	for (int  i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << "["<<i<<"][" <<j << "] ";
		}
		cout << endl;
	}
	
	
	cout << "Sum: " << sum;
}