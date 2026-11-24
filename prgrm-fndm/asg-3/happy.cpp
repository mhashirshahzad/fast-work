#include <iostream>
using namespace std;

bool checkHappy(unsigned n, unsigned prevSequence[15], unsigned currentIndex);
bool isPresentInArray(unsigned n, unsigned prevSequence[15], unsigned currentIndex);

int main() {

  unsigned prevSequence[15] = {0};
  unsigned n;
  unsigned i = 0;
  
  cout << "Enter a +ve number: ";
  cin >> n;
  prevSequence[i++] = n;

  bool res = checkHappy(n, prevSequence, i);

  if (res == true)
    cout  << "\n" << n << " is a happy Number :)"; 
  else if (res == false)
    cout  << "\n" << n << " isn't a happy Number :("; 

  cout << "\n-------------------------------------";
  return 0;
}

bool checkHappy(unsigned n, unsigned prevSequence[15], unsigned currentIndex) {
  bool finished = false; bool isHappy = false;
  while(!finished) {
    cout << n << " -> ";
    unsigned newN = 0;

    if (currentIndex >= 14) currentIndex = 0;

    if (n == 1 && !isHappy) {
      cout << n;
      finished = true;
      isHappy = true;
    };

    while (n != 0 && !isHappy) {
      int d = n % 10;
      newN += d * d;
      n /= 10;
    }

    if (newN == 1 && !isHappy) {
      cout << newN;
      finished = true;
      isHappy = true;
    }
  
    if (isPresentInArray(newN, prevSequence, currentIndex)) {
      cout << newN;
      cout << "\n-------------------------------------";
      cout << "\n" << newN << " appeared before :<";
      cout << "\nRepeating pattern detected !";
      finished = true;
      isHappy = false;
    }
    
    prevSequence[currentIndex++] = newN;
    n = newN;
  }
  return isHappy;
}

bool isPresentInArray(unsigned newN, unsigned prevSequence[15], unsigned currentIndex) {
    for (int i = 0; i < currentIndex; i++) {
      if (prevSequence[i] == newN) {
        return true;
      }
    }
    return false;
}
