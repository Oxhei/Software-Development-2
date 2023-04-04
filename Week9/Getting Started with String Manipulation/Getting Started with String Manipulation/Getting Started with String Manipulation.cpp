#include<iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

void change_assembly(string& str) {
  auto data = str.c_str();
  auto len = str.length();
  __asm
  {
    // Load length into ecx register
    // Used for loop counting
        mov ecx, len;
        // Load the memory location into ebx register
        // Used to access correct element in array
        mov ebx, data;
    start_loop:
        // Load 'Y' into memory location pointed to by ebx + ecx - 1
        mov byte ptr[ebx + ecx - 1], 'Y';
    // If ecx > 1, decrement ecx and jump back to start_loop
        loop start_loop;
  }
}

void change(string& str) {
  for (int i = 0; i < str.length(); ++i) {
    str[i] = 'X';
  }
}

int main(int argc, char** argv) {
  string test = "kevin";
  change(test);
  cout << test << endl;
  change_assembly(test);
  cout << test << endl;
  return 0;
}