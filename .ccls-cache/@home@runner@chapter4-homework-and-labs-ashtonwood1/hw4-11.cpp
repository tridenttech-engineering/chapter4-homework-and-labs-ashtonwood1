// Introductory11.cpp - displays ending balance
// Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main() {
double beginning_balance;
double total_deposits;
double total_withdrawals;
double end_balance;

cout << "Beginning Balance:";
cin >> beginning_balance;

cout << "Total Deposits:";
cin >> total_deposits;

cout << "Total Withdrawals:";
cin >> total_withdrawals;


end_balance = beginning_balance + total_deposits - total_withdrawals;

  cout << "End of Month Balance: " <<	end_balance << endl;

  return 0;
} // end of main function