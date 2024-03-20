#include <iostream>
#include <string>
using namespace std;
class BankAccount {
private:
    int accountNumber; 
    double balance; 

public:
   
   BankAccount(int AN,double B){
    accountNumber=AN;
    balance=B;
   }

    int getaccountNumber() {
        return accountNumber;
    }

   double getbalance() {
        return balance;
    }

    void setaccountNumber(int AN) {
        accountNumber = AN;
    }

    void setbalance(double B) {
        balance = B;
    }
};
int main(){

     BankAccount BA  (1234556,10000);

    cout << "AccountNumber: " <<BA.getaccountNumber() << endl;
    cout << "Balance: " << BA.getbalance() << endl;
}