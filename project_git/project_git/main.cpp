#include <iostream>
#include "input.h"
using namespace std;

int main(int argc, const char * argv[]) 
{
  User user;
  Input_Field inputF;
  inputF.input(user.name, user.surname, user.birthday, user.country, user.username, user.password);
}
