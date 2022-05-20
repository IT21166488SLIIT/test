#include <iostream>
#include <string>
using namespace std;
#include "user.h"

int main(void){

  cout<<"Hello World!"<endl;

  return 0;
  //User class object
	cout << "User" << endl;
	user u2 = user("R001", "okok", "email@", 07657, "omer12", "pass#");
	u2.displayuser();
}