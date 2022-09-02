#include <iostream>
#include <string>
using namespace std;

class User {
public:
  string name;
  string surname;
  string birthday;
  string yb;
  string country;
  string username;
  string password;

private:
  bool check_birthday(string year) {
    int sl_counter = 0;
    for (int i = 0; i < year.length(); i++) {
      if (year[i] == '/') {
        sl_counter++;
      }
      if (sl_counter == 2) {
          yb += year[i];
      }
    }
    if (2022 - stoi(yb.erase(0)) >= 14) {
      return true;
    } else {
      return false;
    }
  }

public:
  bool getBirthday(string year) {
    if (check_birthday(year)) 
    {
      return true;
    } 
    else 
    {
      return false;
    }
  }
};