#include <iostream>
#include <cstring>

using namespace std;

int main()

{
  char input [80];
  int count = 0;
  bool isPalindrome = true;
  int counter = 0;
  char input2 [80];
  char input3 [80];
  for (int i = 0; i < 80; i++) {
    input[i] = 0;
  }
  for (int i = 0; i < 80; i++) {
    input2[i] = 0;
  }
  for (int i = 0; i < 80; i++) {
    input3[i] = 0;
  }
  cin.get(input, 80);
  cin.get();
  for (int i = 0; i < 80; i++) {
    if ((input[i] >= 97 && input[i] <= 122) || (input[i] >= 65 && input[i] <= 90)) {
      input2[counter] = input[i];
      counter++;
    }
  }
  for (int i = 0; i < 80; i++) {
    if (input2[i] >= 65 && input2[i] <= 90) {
      input3[i] = input2[i] + 32;
    }
    else {
      input3[i] = input2[i];
    }
  }
  for (int i = 0; i < 80; i++) {
    if (input3[i] >= 97 && input3[i] <= 122) {
      count++;
    }
  }
  for (int i = 0; i < count; i++) {
    if (input3[i] != input3[count - i - 1]) {
	isPalindrome = false;
        }
      
  }

    if (isPalindrome == false) {
      cout << "This is not a palindrome";
      
    }
    else {
      cout << "This is a palindrome";
    }

  
  return 0;
}
