#include<iostream>

using namespace std;

const int AMOUNTOFNUMERS = 10; 

int main (){

int number [AMOUNTOFNUMERS], pos_sum=0, neg_sum=0, sum=0;
int pc=0, nc =0;
cout << "Enter 10 whole numbers in any order."  << endl;

  for(int i = 0; i <AMOUNTOFNUMERS; i++){
    cin >> number[i];
    sum += number[i];
  
      if(number[i] > 0){
        pos_sum += number[i];
        pc += 1;
       }

       else{
         neg_sum += number[i];
         nc += 1;
        }
  }
  
cout << "Total Sum: " << sum << "\t" << "   Average: " << sum/AMOUNTOFNUMERS <<endl;
cout << "Positive Sum: " << pos_sum << "\t" << "   Average: " << pos_sum/pc <<endl;
cout << "Negative Sum: " << neg_sum <<"\t" << "   Average: " << neg_sum/nc <<endl;
  return 0;
}
