/// #include<iostream>
/// bool checkHappy(int n);
/// int main(int argc, char **argv) {
///  std::cout << "checkHappy(19) gives:\n";
///  if (checkHappy(19)) {
///    std::cout << "\nFor input 19 it is true";
///  } return 0;
/// }
bool checkHappy(int n) {
///  std::cout << n << " -> ";
  int newN = 0;

  if (n == 1) { // if input is 1 we return
    return true;
  };

  while (n != 0) { 
    int d = n % 10; // get every digit
    newN += d * d; // square it
    n /= 10;
  }

  if (newN == 1) { // if new is 1 we return
///    std::cout << newN;
    return true;
  }    
  return checkHappy(newN); // recall the function
}
