#include <iostream>
using namespace std;

int main() {
  int array[10];

  // allocate space on the stack for the array
  asm("sub esp, 40");

  // initialize the values of the array to 0
  asm("mov ebp, esp");  // set the base pointer to the start of the array
  asm("mov ecx, 10");   // set the loop counter to 10
  asm("xor eax, eax");  // clear the accumulator register
  asm("loop1:");        // loop label
  asm("mov dword ptr [ebp], eax");  // set the value of the array element to 0
  asm("add ebp, 4");                // move to the next array element
  asm("dec ecx");                   // decrement the loop counter
  asm("jnz loop1");                 // jump to loop1 if ecx is not zero

  // print the values of the array and calculate their sum
  asm("mov ebp, esp");  // set the base pointer to the start of the array
  asm("mov ecx, 10");   // set the loop counter to 10
  asm("xor eax, eax");  // clear the accumulator register
  asm("loop2:");        // loop label
  asm("mov ebx, dword ptr [ebp]");  // move the value of the array element into
                                    // ebx
  asm("add eax, ebx");  // add the value of the array element to the accumulator
                        // register
  asm("push eax");      // push the value of the


  // print the user's name
  cout << "Hello, " << array << "!" << endl;

  // deallocate the stack space used for the buffer
  asm("add esp, 256");

  return 0;
}
