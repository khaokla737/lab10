#include<iostream>
using namespace std;

int main(){
    char grade;
    int total=1;
 int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
 cout << "Please input grade of each student (A-F) or input 0 to exit."<<endl;
 do{
  cout << "Student [" << total << "]: ";
  cin >> grade; 
  
  if(grade == '0') {
      break;
  } //The loop must be terminated when grade = '0'
  
  if(grade == 'A'){
      count[0]++;
      total++;// if grade is A
   //Do something
  }else if(grade == 'B'){
      count[1]++;
      total++;// if grade is B
   //Do something
  }else if(grade == 'C'){
      count[2]++;
      total++;
  }else if(grade == 'D'){
      count[3]++;
      total++;
  }else if(grade == 'F'){
      count[4]++;
      total++;
  //and so on ... for grade = C, D, F 
  }else{
      cout << "Wrong input. Please input again." << endl;// grade is wrong input
   //Do something
  } 
 }while(true);
 
 
 cout << "In total "<< total-1 <<" students."<<endl;
 cout << "A = " << count[0] <<", ";
 cout << "B = " << count[1] <<", ";
 cout << "C = " << count[2] <<", ";
 cout << "D = " << count[3] <<", ";
 cout << "F = " << count[4];
 // and so on ... for grade = C, D, F 
 
 return 0;
}