#include<iostream>
// #include<Windows.h>

using namespace std;


void takeInputMatrix(int matrix[10][10], int& rowSize, int& colSize);
void outputMatrix(int matrix[10][10], int rowSize, int colSize);
void problem1();
void problem2();
void problem3();

int main() {
	cout << "\n\nProblem 1\n\n";
	problem3();
}

void problem4() {
	int matrixA[10][10] = { {0} };
	int rA = 0, cA = 0;
	
	// inputs
	takeInputMatrix(matrixA, rA, cA);

	int i = 0, j = 0;
	// top left and bottom right of subMatrix
	int top = 0, left = 0, bottom = 0, right = 0;
	
	while (i < rA) {
		j = 0;
		while (j < cA) {

      
			j++;
		}
		cout << "\n";
		i++;
	}
}
// TODO! doesnt work
void problem3() {
	int matrix[10][10] = { {0} };
	int rowSize = 0, colSize = 0;

	cout << "Use this as input (def case) \n";
	cout << "3 4 1 2 3 4 5 6 7 8 9 10 11 12\n\n";

	takeInputMatrix(matrix, rowSize, colSize);

	int left = 0, top = 0, bottom = rowSize, right = colSize;

	cout << "Spiralllyyy! : \n\n\n";
	while (left <= right && top <= bottom) {

		for (int i = left; i <= right; i++) {
			cout << matrix[top][i];
		}

		top++;
		for (int i = top; i <= bottom; i++) {
			cout << matrix[i][right];
		}
		right--;


		if (top <= bottom) {
			for (int i = right; i >= left; --i) {
				cout << matrix[bottom][i];
			}
			bottom--;
		}

		if (left <= right) {
			for (int i = bottom; i >= top; --i) {
				cout << matrix[i][left];
			}
			left++;
		}

	}
}

void problem2() {
	int matrix[10][10] = { {0} };
	int size = 0;
	cout << "Use this as input (def case) \n";
	cout << "3 1 2 3 4 5 6 7 8 9 \n\n";

	takeInputMatrix(matrix, size, size);

	char key = 'c';

	while (key != 's') {
		system("cls");
		cout << "Press 's' to stop, 'r' to rotate:\n";
		if (key == 'r') {
			// transpose
			for (int i = 0; i < size; i++) {
				for (int j = 0; j < size; j++) {
					if (i < j) {
						int t = matrix[i][j];
						matrix[i][j] = matrix[j][i];
						matrix[j][i] = t;
					}

				}
			}
			for (int i = 0; i < size; i++) {
				int left = 0, right = size - 1;
				while (left < right) {
					int t = matrix[i][left];
					matrix[i][left] = matrix[i][right];
					matrix[i][right] = t;
					left++; right--;
				}
			}

		}
		outputMatrix(matrix, size, size);
		cin >> key;
	}

}

void problem1() {
	int matrixA[10][10] = { {0} };
	int matrixB[10][10] = { {0} };
	int rA = 0, rB = 0, cA = 0, cB = 0;
	
	cout << "Use this as input (def case) \n";
	cout << "4 5 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 2 2 8 9 4 5\n\n";
	// inputs
	cout << "Matrix A:\n";
	takeInputMatrix(matrixA, rA, cA);

	cout << "Matrix B:\n";
	takeInputMatrix(matrixB, rB, cB);

	int i = 0, j = 0;
	int k = 0, l = 0;
	int foundAtRow = 0, foundAtCol = 0;
	bool isSubMatrix = false;
	
	while (i < rA && !isSubMatrix) {
		j = 0;
		while (j < cA) {
			cout << " (" << matrixA[i][j] << ", " << matrixB[k][l] << ")";

			if (matrixA[i][j] == matrixB[k][l]) {
				foundAtCol = i;
				foundAtRow = j;
				isSubMatrix = true;
				k = 0;
				cout << "y";
				while (k < rB) {
					l = 0;
					while (l < cB) {
						if (matrixA[i + k][j + l] != matrixB[k][l]) {
							isSubMatrix = false;
						}
						l++;
					}
					k++;
				}
			}
			else 
				cout << "n";
			j++;
		}
		cout << "\n";
		i++;
	}
	if (isSubMatrix) {
		cout << "\n\nSubmatrix found at col: " << foundAtRow << ", row: " << foundAtCol << "\n";
	}
	else {
		cout << "\n\nSubmatrix not found err;";
	}
}


void outputMatrix(int matrix[10][10], int rowSize, int colSize) {
	cout << "Output: \n";
	for (int i = 0; i < rowSize; i++) {
		for (int j = 0; j < colSize; j++) {
			cout << matrix[i][j];
		}
		cout << "\n";
	}
}
void takeInputMatrix(int matrix[10][10], int& rowSize, int& colSize) {
	rowSize = 0; colSize = 0;

	while (rowSize < 1 || rowSize > 10) {
		cout << "Enter row count of Matrix (1 to 10):";
		cin >> rowSize;
	}
	while (colSize < 1 || colSize > 10) {
		cout << "Enter col count of Matrix  (1 to 10):";
		cin >> colSize;
	}
	cout << "Enter matrix:\n";
	for (int i = 0; i < rowSize; i++) {
		for (int j = 0; j < colSize; j++) {
			cin >> matrix[i][j];
		}

	}
}

