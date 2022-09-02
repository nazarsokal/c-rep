#include <iostream>
#include "user.h"
using namespace std;

class Input_Field {
public:
  void input(string name, string surname, string birthday, string country, string username, string password) {
    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your surname: ";
    cin >> surname;

    cout << "Enter birthday(dd/mm/yy): ";
    cin >> birthday;

    User usr;
    
    if(!usr.getBirthday(birthday))
    {
      cout << "You are to young" << "\n";
    }
    else
    {
      cout << "OK" << "\n";
    }
    
    cout << "Enter your country: ";
    cin >> country;

    cout << "Enter your username: ";
    cin >> username;

    cout << "Enter your password: ";
    cin >> password;
  }
};