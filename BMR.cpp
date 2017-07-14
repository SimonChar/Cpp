#include<iostream>

using namespace std;

double inch_to_meters(double x);
double pounds_to_kg(double x);
bool validate_sex(char c);
bool validate_flag(char c);
bool validate_age(int x);
const double MASSKG = 0.453592;
const int CHOCOBAR = 230;
const double LENGTHM = 0.0254;



int main (){

double height, weight, bmr;
char measurement_flag, sex ;
int age;

cout << "Do you prefer to enter in imperial or metric measurements? " << endl;
cout << "Enter i for imperial or m for metric:" << endl;

do{
    cin >> measurement_flag;
  } while(validate_flag(measurement_flag));
 
  cout << endl << "Please enter your sex: " << endl;
 
  do{
      cin >> sex;
    } while(validate_sex(sex));
   
  cout << endl << "Please enter your age: " << endl;
 
  do{
      cin >> age;
    } while(validate_age(age));
    
   do{
     cout << endl << "Please enter your weight: " << endl;
     cin >> weight;
   }while(cin.fail());

  do{
      cout << endl << "Please enter your height: " << endl;
      cin >> height;
    }while(cin.fail());
  

   if(measurement_flag == 'm' || measurement_flag == 'M'){
   height = inch_to_meters(height);
   weight = pounds_to_kg(weight);
}

if(sex == 'm' || sex == 'M')
  bmr = 66 + (6.3 *weight) + (12.9 * height) - (6.8 * age);
  
  else
  bmr = 655 + (4.3 * weight) + (4.7 * height) - (4.7 * age);
  
  cout << "Your BMR is: " << bmr << endl;

  return 0;
}

double inch_to_meters(double x){
  x = x / LENGTHM;
  return x;
}

double pounds_to_kg(double x){
  x = x / MASSKG;
  return x;
}

bool validate_sex (char sex){
  if( sex != 'm' && sex != 'M' && sex != 'F' && sex != 'f'){
     cout << "PLease enter a valid character! (M or F)" << endl;
     return true;
  }
  else
  return false;
}

bool validate_flag (char measure){
  if( measure != 'i' && measure != 'I' && measure != 'm' && measure != 'M'){
     cout << "PLease enter a valid character! (I or M)" << endl;
     return true;
  }
  else
  return false;
}
  
  bool validate_age(int x){
    
      if( x < 0 && x > 100 && cin.fail()){
     cout << "PLease enter a valid age! (0 -100)" << endl;
     return true;
  }
  else
  return false;
    
  }
  
  
  
  
  
