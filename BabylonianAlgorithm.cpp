#include<iostream>

using namespace std; 

int main (){
  
  float number,result,guess,previous_guess ,estimate=0.001;
  
  cout << "Please enter a number:" << endl;
  cin >> number; 
  
   guess = number / 2;
   
   do{
     previous_guess = guess;
    result = number / guess;
    guess = (guess + result) / 2;

   }while(previous_guess - guess > estimate);
  cout << "The result is:" << guess << endl;
}
