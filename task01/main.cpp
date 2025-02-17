#include <iostream>
int find_best_group(double a, double b, double c);
double middle_arythemytc(int* vector, int size);
using namespace std;
int main() {

	int a[]{ 10,8,9,8,10 };
	int b[]{ 7,8,9,9,9 };
	int c[]{ 9,7,7,5,4 };

	int size = sizeof(a) / sizeof(int);

	double first_group = middle_arythemytc(a, size);
	double second_group = middle_arythemytc(b, size);
	double third_group = middle_arythemytc(c, size);



	cout << "the best group have avg mark: " << find_best_group(first_group, second_group, third_group);


}