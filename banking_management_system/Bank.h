#include<stdio.h>
#include<iostream>
#include<vector>
#include"Account.h"

using namespace std;
class Bank{
    private:
    vector<Account> accounts;
    public:
    void createaccount();
    void findaccount(int accountnumber);
    void deleteaccount(int accountnumber);
    void performTransaction();
};