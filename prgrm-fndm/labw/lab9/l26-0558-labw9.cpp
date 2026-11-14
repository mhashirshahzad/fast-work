#include <climits>
#include <iostream>
using namespace std;

// Problems 1 to 7
void pyramid();
void patternPrinting();
void hollowDiamond();
void numberPyramid();
void floydTriangle();
void palindromicNumberPyramid();
void xPattern();

/* Problem 8
(copyable input)
8 9 7 10 6 5 7 8 6 9 9 8 10 9 7 6 5 9 7 8 10 9 8 7 10 7 6 5 8 9 4 6 5 7 5 9 9 9 10 9 8 7 8 9 8 6 8 6 7 6
*/
void takeInput(int marks[10][5]);
void printMarksRow(int marks[10][5]);
void printMarksCol(int marks[10][5]);
void returnAverageStudents(float avgQuizes[5], float &avgStudents);
void returnAverageQuiz(int marks[10][5], float avgQuizes[5]);
void findMaxNMin(int marks[10][5], int &max, int &min);

// Problem 9
#define c 5
void matixInput(int m1[][c], int m2[][c], int &r1, int &r2, int &c1, int &c2) {}
void matrixPrint(int m1[][c], int r1, int c1) {}
void matrixPrintDiagonals(int m1[][c], int r1, int c1) {}
bool matrixAdd(int m1[][c], int m2[][c], int m3[][c], int &r1, int &r2, int &r3, int &c1, int &c2, int &c3) {return 0;}
bool matrixSubtract(int m1[][c], int m2[][c], int m3[][c], int &r1, int &r2, int &r3, int &c1, int &c2, int &c3) { return 0;}
bool matrixMultiply(int m1[][c], int m2[][c], int &r1, int &r2, int &c1, int &c2) {return 0;}
bool matrrixSortColumns(int m1[][c], int r1, int c1) {return 0;}
bool matrrixSpiralTraversal(int m1[][c], int r1, int c1) {return 0;}



int main() {
  {
    cout << "\n\n === PROBLEM 1 === \n\n";
    pyramid();
  }
  {
    cout << "\n\n === PROBLEM 2 === \n\n";
    patternPrinting();
  }
  {
    cout << "\n\n === PROBLEM 3 === \n\n";
    hollowDiamond();
  }
  {
    cout << "\n\n === PROBLEM 4 === \n\n";
    numberPyramid();
  }
  {
    cout << "\n\n === PROBLEM 5 === \n\n";
    floydTriangle();
  }
  {
    cout << "\n\n === PROBLEM 6 === \n\n";
    palindromicNumberPyramid();
  }
  {
    cout << "\n\n === PROBLEM 7 === \n\n";
    xPattern();
  }
  {
    cout << "\n\n === PROBLEM 8 === \n\n";
    int marks[10][5];
    float avgStudents;
    float avgQuizes[5];
    int max = 0, min = INT_MAX;
    takeInput(marks);  
    printMarksRow(marks);
    printMarksCol(marks);
    returnAverageQuiz(marks, avgQuizes);
    returnAverageStudents(avgQuizes, avgStudents);
    findMaxNMin(marks, max, min);
  }
  {
    cout << "\n\n === PROBLEM 9 === \n\n";
    cout << "This doesnt work :( ";
    int m1[5][5], m2[5][5], m3[5][5];
    int r1 = 5, r2 = 5, r3 = 5, c1 = 5, c2 = 5, c3 = 5;
    matrixPrint(m1, r1, c1);
    matrixPrint(m2, r2, c2);
    matrixPrintDiagonals(m1, r1, c1);

    // ... js function calling
  }
  return 0;
}

void findMaxNMin(int marks[10][5], int &max, int &min) {
  cout << "\n\n--- Max & Min Marks of student --- \n";
  max = marks[0][0];
  min = marks[0][0];
  for (int i = 0; i < 10; i++) {
   for (int j = 0; j < 5; j++) {
      if (marks[i][j] > max)
        max = marks[i][j];
      if (marks[i][j] < min)
        min = marks[i][j];
    }
  }
  cout << "\nMax: " << max;
  cout << "\nMin: " << min;
}
void returnAverageStudents(float avgQuizes[5], float &avgStudents) {
  avgStudents = 0;
  cout << "\n\n--- Avg Marks of student --- \n";
  for (int i = 0; i < 5; i++) {
    avgStudents += (float)avgQuizes[i] / 5;
  }
  cout << "\nAverage of students: " << avgStudents;
}
void returnAverageQuiz(int marks[10][5], float avgQuizes[5]) {
  
  cout << "\n\n--- Avg Marks of each quiz --- \n";
  for (int i = 0; i < 5; i++) {
    avgQuizes[i] = 0;
    for (int j = 0; j < 10; j++) {
      avgQuizes[i] += (float)marks[j][i] / 10;
    }
    cout << "\nQuiz #" << i + 1 << " average:  " << avgQuizes[i];
  }
}
void printMarksRow(int marks[10][5]) {
  cout << "\n\n--- RowWise Output (student by student) --- \n";
  for (int i = 0; i < 10; i++) {
    cout << "\nStudent# " << i + 1 << ": ";
    for (int j = 0; j < 5; j++) {
      cout << " " << marks[i][j];
    }
  }
}
void printMarksCol(int marks[10][5]) {
  cout << "\n\n--- ColWise Output (quiz by quiz)--- \n";
  for (int i = 0; i < 5; i++) {
    cout << "\nQuiz# " << i + 1 << " : ";
    for (int j = 0; j < 10; j++) {
      cout << " " << marks[j][i];
    }
  }
}
void takeInput(int marks[10][5]) {
  
  for (int i = 0; i < 10; i++) {
    cout << "\n\n--- Student #" << i + 1 << "'s marks --- \n";
    for (int j = 0; j < 5; j++) {
      cout << "\n Quiz #" << j + 1 << "  marks: ";
      cin >> marks[i][j];
      if (marks[i][j] < 0) {
        cout << "-ve marks entered try again: <";
        j--;
      }
    }
  }
}

void pyramid() {
  
  unsigned int r = 0;
  cout << "Enter the number of rows: ";
  cin >> r;

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < r * 2; j++) {
      if (j <= r + i && j >= r - i)
        cout << " * ";
      else
        cout << "   ";
    }
    cout << "\n";
  }

}
void floydTriangle() {
  
  unsigned int n = 0;
  cout << "Enter the number of rows: ";
  cin >> n;

  int k = 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      cout << " " << k++ << " ";
    }
    cout << "\n";
  }

}
void numberPyramid() {
  
  unsigned int r = 0;
  cout << "Enter the number of rows: ";
  cin >> r;

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < r * 2; j++) {
      if (j <= r + i && j >= r - i)
        if (j > r)
          cout << " " << i - (j - r) + 1 << " ";
        else
          cout << " " << i - (r - j) + 1 << " ";
        
      else
        cout << "   ";
    }
    cout << "\n";
  }

}
void palindromicNumberPyramid() {
  
  unsigned int r = 0;
  cout << "Enter the number of rows: ";
  cin >> r;

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < r * 2; j++) {
      if (j <= r + i && j >= r - i)
        if (j > r)
          cout << " " << (j - r) + 1 << " ";
        else
          cout << " " << (r - j) + 1 << " ";
        
      else
        cout << "   ";
    }
    cout << "\n";
  }

}
void hollowDiamond() {
  
  unsigned int r = 0;
  cout << "Enter the number of rows: ";
  cin >> r;


  for (int i = 0; i < r; i++) {
    for (int j = 0; j < r * 2; j++) {
      if (j == r + i || j == r - i)
        cout << " * ";
      else
        cout << "   ";
    }
    cout << "\n";
  }
  for (int i = r; i >= 0; i--) {
    for (int j = 0; j <= r * 2; j++) {
      if (j == r + i || j == r - i)
        cout << " * ";
      else
        cout << "   ";
    }
    cout << "\n";
  }
}
void xPattern() {
  
  unsigned int r = 0;
  cout << "Enter odd number of rows: ";
  cin >> r;

  if ( r % 2 == 0) {
    cout << "Enter odd number";
    return;
  }
  for (int i = r / 2; i > 0; i--) {
    for (int j = 0; j <= r * 2; j++) {
      if (j == r + i || j == r - i)
        cout << "*";
      else
        cout << " ";
    }
    cout << "\n";
  }

  for (int i = 0; i <= r / 2; i++) {
    for (int j = 0; j <= r * 2; j++) {
      if (j == r + i || j == r - i)
        cout << "*";
      else
        cout << " ";
    }
    cout << "\n";
  }
}
void patternPrinting() {
  
  int r = 0;
  cout << "Enter the number of rows: ";
  cin >> r;

  if (r > 9 || r < 0) {
    cout << "Invalid Input :(";
    return;
  }
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < r * 2 - 1 ; j++) {
      if (j < r + i - 1 && j > r - i - 1)
        cout << " .";
      else
        if (j >= r) cout  << " " <<  r - ((j + 1) - r) << "";
        else cout << " " << (j + 1) << "";
      // cout << "@" << j;
    }
    cout << "\n";
  }

}
