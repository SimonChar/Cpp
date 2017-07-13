#include<iostream>

using namespace std; 

const double annualint = 0.18;
const double monthly_payment = 50;

int main (){
  
  int count;
  double cost, debt, inter;
  double monthly_inte = annualint/12;
  
  cout << "Please enter the cost value of the item. An 18% anual interest will be applied." << endl;
  
  cin >> cost;
  
  debt = cost; 
  while (debt > 0){
    
    count++;
    inter = debt * monthly_inte;
    debt = debt - (monthly_payment - inter) ;
    
    if (debt < monthly_payment){
      debt = monthly_payment - debt;
        cout << "Month: " << count << endl;
        cout << "Your Change: "  << debt << endl;
      break;
    }
   
    cout << "Month: " << count << endl;
    cout << "Remaining Debt: "  << debt << endl;
  }
  return 0; 
}
