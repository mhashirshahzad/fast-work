///     #include <iostream>
///     using namespace std;
///     bool checkHappy(unsigned n, unsigned prevSequence[15], unsigned currentIndex);
///     bool isPresentInArray(unsigned n, unsigned prevSequence[15], unsigned currentIndex);
///     int main() {
///     
///       unsigned prevSequence[15] = {0};
///       unsigned prevSequence2[15] = {0};
///       unsigned prevSequence3[15] = {0};
///       unsigned i = 0;
///       
///       prevSequence[i++] = 4;
///       prevSequence[0] = 167;
///       prevSequence[0] = 12;
///       cout << "For 4 we get\n";
///       bool res = checkHappy(4, prevSequence, i);
///     
///       if (res == true)
///         cout  << "\n" << 4 << " is a happy Number :)"; 
///       else if (res == false)
///         cout  << "\n" << 4 << " isn't a happy Number :("; 
///     
///       cout << "\n\n\n=======================================\n\n\n";
///       cout << "For 167 we get\n";
///       bool res2 = checkHappy(167, prevSequence2, 1);
///       if (res2 == true)
///         cout  << "\n" << 167 << " is a happy Number :)"; 
///       else if (res2 == false)
///         cout  << "\n" << 167 << " isn't a happy Number :("; 
///       cout << "\n\n\n=======================================\n\n\n";
///       cout << "For 12 we get\n";
///       bool res3 = checkHappy(12, prevSequence3, 1);
///       if (res3 == true)
///         cout  << "\n" << 12 << " is a happy Number :)"; 
///       else if (res3 == false)
///         cout  << "\n" << 12 << " isn't a happy Number :("; 
///     
///       return 0;
///     }
bool checkHappy(unsigned n, unsigned prevSequence[15], unsigned currentIndex) {
  bool finished = false; bool isHappy = false; // flags
  while(!finished) {
///    cout << n << " -> ";
    unsigned newN = 0;

    if (currentIndex >= 14) currentIndex = 0; // reset index to overwrite

    if (n == 1 && !isHappy) { // stays the same
///      cout << n;
      finished = true;
      isHappy = true;
    };

    while (n != 0 && !isHappy) {  // stays the same
      int d = n % 10;
      newN += d * d;
      n /= 10;
    }

    if (newN == 1 && !isHappy) { // stays the same
///      cout << newN;
      finished = true;
      isHappy = true;
    }
  
    if (isPresentInArray(newN, prevSequence, currentIndex)) { // loops over
///      cout << newN;
///      cout << "\n-------------------------------------";
///      cout << "\n" << newN << " appeared before :<";
///      cout << "\nRepeating pattern detected !";
      finished = true;
      isHappy = false;
    }
    
    prevSequence[currentIndex++] = newN; // add and increment the index
    n = newN;
  }
  return isHappy;
}

///   bool isPresentInArray(unsigned newN, unsigned prevSequence[15], unsigned currentIndex) {
///       for (int i = 0; i < currentIndex; i++) {
///         if (prevSequence[i] == newN) {
///           return true;
///         }
///       }
///       return false;
///   }
