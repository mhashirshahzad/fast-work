#include <iostream>
using namespace std;


bool checkHappy(unsigned n, unsigned prevPattern[15], unsigned currentIndex);

int main() {

  unsigned prevPattern[15] = {0};
  unsigned n;
  unsigned i = 0;
  
  cout << "Enter a +ve number: ";
  cin >> n;
  prevPattern[i++] = n;

  bool res = checkHappy(n, prevPattern, i);

  if (res == true)
    cout  << "\n" << n << " is a happy Number :)"; 
  else if (res == false)
    cout  << "\n" << n << " isn't a happy Number :("; 

  cout << "\n-------------------------------------";
  return 0;
}

bool checkHappy(unsigned n, unsigned prevPattern[15], unsigned currentIndex) {
  cout << n << " -> ";
  int newN = 0;

  if (currentIndex >= 14) currentIndex = 0;

  if (n == 1) {
    cout << n;
    return 1;
  };

  while (n != 0) {
    int d = n % 10;
    newN += d * d;
    n /= 10;
  }

  if (newN == 1) {
    cout << newN;
    return 1;
  }
    
  for (int i = 0; i < 14; i++) {
    if (prevPattern[i] == newN) {
      cout << newN;
      cout << "\n-------------------------------------";
      cout << "\n" << newN << " appeared before :<";
      cout << "\nRepeating pattern detected !";
      return 0;
    }
  }
  prevPattern[currentIndex++] = newN;
  return checkHappy(newN, prevPattern, currentIndex);
}
