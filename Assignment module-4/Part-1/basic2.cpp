#include<iostream>
using namespace std;
class Bank_account{
  public:
  string name_borr, acc_type;
  int acc_num, bal, amt, curr_bal;
  public:
  int assigValue(){
    cout<<"Enter some detils below:"<<endl;
    cout<<"Borrower Name : ";
    getline(cin, name_borr);
    cout<<"Accout type :";
    cin>>acc_type;
  }
  int depostion(){
    cout<<"Enter Deposit amount : "<<endl;
    cin>>amt;
    cout<<"Borrower Name : "<<endl<<name_borr<<endl<<"current Balance :"<<amt<<endl;
  }
  int checkBalance(){
    curr_bal=50000;
    cout<<"Your current balance is : "<<curr_bal<<endl;
  }
  int withdrawal(){
    cout<<"Enter withdrawal amount : "<<endl;
    cin>>amt;
    cout<<"Borrower Name : "<<name_borr<<endl<<"Current Balance : "<<curr_bal-amt<<endl;
  }
};
int mian(){
    Bank_account BA;
    BA.assigValue();
    int choice;

    cout<<"1.deposition."<<endl;
    cout<<"2.withdrawal."<<endl;
    cout<<"Select transaction type:"<<endl;
    cin>>choice;

    switch (choice)
    {
    case 1 :
        BA.depostion();
    case 2 :
        BA.checkBalance();
        BA.withdrawal();
        break;

    default:
        cout<<"\nInvalid choice, select from option.\n";
        break;
        
    }
}