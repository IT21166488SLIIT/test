#include <iostream>
#include <string>
#include "admin.h"
using  namespace std;

admin(string aname, int aage){
  name = aname;
  age = aage;
}

void admin::display(){
  cout<<"Admin Name: "<<name<<endl;
  cout<<"Age: "<<age<<endl;
}