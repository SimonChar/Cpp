#include <iostream>

using namespace std; 

  const double mperkm = 0.621; 

int main() {
  
  
  double km, miles,consumption; 
  char validate; 
  do{
  cout << "Please enter the kilometers \n";
  cin >> km; 
  miles = km * mperkm;
  consumption = 2 * miles; 
  
  cout << "Miles: " << miles << endl;
  cout << "The consumption is: " << consumption << endl << endl;
  
  cout << "Do you want to input another distance? ('y' for Yes)" << endl;
  cin >> validate;
  } while( validate == 'y' || validate == 'Y');
  
  return 0;
}
