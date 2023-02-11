//BANK SYSTEM PROGRAM

#include <iostream>
#include <vector>
#include <string>

#include "customer.hpp"
#include "functions.hpp"
#include "banktransaction.hpp"

using namespace std;

int main()
{
    string request;                         //input by user
    vector<banktransaction> alltransaction; //list for save transactions for each customer
    vector<customer> cus;                   //list of customer class.
    message();                              //show abilty of program
    getline(cin, request);
    cout << "========================" << endl;
    while (request != "exit")
    {
        command(request, cus, alltransaction);
        message();
        getline(cin, request);
        cout << "========================" << endl;
    }
    cout << "*********************" << endl;
    cout << "End of program!" << endl;
    cout << "*********************" << endl;
    return 0;
}