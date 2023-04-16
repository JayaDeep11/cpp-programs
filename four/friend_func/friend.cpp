#include <iostream>
using namespace std;
 
class Base {
  private:
    int private_variable;
  
  protected:
    int protected_variable;
  
  public:
    Base() {
      private_variable = 143;
      protected_variable = 139;
    }

    friend void friendFunction(Base& obj);
};
 
 
void friendFunction(Base& obj) {
  cout << "Friend Function Called" << endl;
  cout << "Private Variable: " << obj.private_variable << endl;
  cout << "Protected Variable: " << obj.protected_variable << endl;
}
 
int main() {
  Base object1;
  friendFunction(object1);

  return 0;
}