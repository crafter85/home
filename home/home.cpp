#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
#include <cstring>
using namespace std;
void check_value()
{
	if (cin.fail() || cin.peek() != '\n')
	{
		cerr << "Error!Input is not correct.\n";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		exit(1);
	}
}
void replase_matrix_1(int  matrix_1[4][4])
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i != j)

			{
				matrix_1[i][j] = 0;
			}
		}
	}
}
void print_matrix_1(int matrix_1[4][4])
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << matrix_1[i][j] << " ";
		}
		cout << endl;
	}
}
void print_matrix_2(int matrix_2[4][4])
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << matrix_2[i][j] << " ";
		}
		cout << endl;
	}
}
int main()
{
	int matrix_1[4][4];
	int matrix_2[4][4];

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)	
		{
			cout << "Input nuber:";
			cin >> matrix_1[i][j];
			check_value();
		}
	}
	print_matrix_1(matrix_1);
	cout << "\n";
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << "Input nuber:";
			cin >> matrix_2[i][j];
			check_value();
		}
	}
	print_matrix_2(matrix_2);
	cout << "\n";
	int n = memcmp(matrix_1, matrix_2, 64);
	if (n > 0 || n < 0)
	{
		cout << " Matrix is not equal. ";
	}
	else
	{
		cout << " Matrix is equal. ";
	}
	return 0;
}
