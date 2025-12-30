#include<stdio.h>
#include<iostream>
#include<vector>

using namespace std;

class Account{
    private:
    int accountnumber;
    string account_name;
    double balance;
    public:
    string getName() { return account_name; }
    int getAccountNumber() { return accountnumber; }
    void deposit(double amount,int accountnumber);
    void withdraw(double amount,int accountnumber);
    double getbalance(int accountnumber);
    void displaydetails(int accountnumber);
    Account(int accnum,string acc_name ,double bal)
    : accountnumber(accnum),account_name(acc_name) ,balance(bal){}
};