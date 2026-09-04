#include <iostream>
//Must include a I/O library or sytem doesn't know what to do

// Practice 2 — Richard Webster
// CIS 5 Week 02 · Structure polish

int main() {
//int main() is where the program starts
  
  std::cout << "=== About me ===\n";
  
  std::cout << "Name: Richard Webster\n";
  std::cout << "Hometown: Moreno Valley, CA \n";
  std::cout << "College Major: Electrical Engineering \n";
  std::cout << "Favorite Food: Pizza \n" << "\n";
  //Here I used the std namespace with cout to print text
  //Also used the << insertion operator to send the text to the console

  std::cout << "=== Week 02 goals ===\n";
  
  std::cout << "1) I became familiar with the 5 basic parts of a C++ program \n"
            << "   which are #include, int main() line, std::cout (console output), \n"
            << "   insertion operator, and return 0.\n";
  std::cout << "2) I can write a simple program that prints text organized the \n"
            << "   way I want it to print. \n";
  std::cout << "3) I was able to compile with errors a few times \n"
            << "   but I was able to fix and run the program. \n";

}
//return 0 tells the system the program ended.