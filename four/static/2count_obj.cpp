#include <iostream>

using namespace std;

static int numAccounts;

class BankAccount {
    public:
        BankAccount() {
            numAccounts++;
        }
        static int getnumAccounts() {
            return numAccounts;
        }
};

int main() {
    BankAccount a1, a2, a3;
    cout << BankAccount :: getnumAccounts() << endl;
}
