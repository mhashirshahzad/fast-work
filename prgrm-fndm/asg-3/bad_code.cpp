/// #include<iostream>
/// bool happy = false;
/// bool checkHappy(int n);
/// int main(int argc, char **argv) {
///  std::cout << "checkHappy(19) gives:\n";
///  if (checkHappy(19)) {
///    std::cout << "\nFor input 19 it is true";
///  } return 0;
/// }
bool checkHappy(int n) {
  while(!happy) { // happy is false by def
///    std::cout << n << " -> ";
    int newN = 0;

    if (n == 1) { // if input is 1 we return
      happy = true;
    };

    while (n != 0) { 
      int d = n % 10; // get every digit
      newN += d * d; // square it
      n /= 10;
    }

    if (newN == 1) { // if new is 1 we return
///      std::cout << newN;
      happy = true;
    }
    n = newN;
  }
  return happy;
}
