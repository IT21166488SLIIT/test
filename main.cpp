#include <iostream>
#include <string>
using namespace std;
#include "user.h"
#include "admin.h"

int main(void){

  cout<<"Hello World!"<endl;

  admin a1 = admin("Diwan" , 22);
  a1.display();

  return 0;
  //User class object
	cout << "User" << endl;
	user u2 = user("R001", "okok", "email@", 07657, "omer12", "pass#");
	u2.displayuser();
}