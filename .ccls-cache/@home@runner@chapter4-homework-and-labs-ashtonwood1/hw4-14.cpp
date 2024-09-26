// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int small;
  int medium;
  int large;
  int family;

  cout << "Small Pizzas:";
  cin >> small;

  cout << "Medium Pizzas:";
  cin >> medium;

  cout << "Large Pizzas:";
  cin >> large;

  cout << "Family Pizzas:";
  cin >> family;

  double total = small + medium + large + family;

  double psmall = (double)small / total;
  double pmedium = (double)medium / total;
  double plarge = (double)large / total;
  double pfamily = (double)family / total;
  
  cout << "Total Pizzas Sold: " <<	total << endl;
  cout << "Precentage of Small: " <<	(psmall*100) << endl;
  cout << "Precentage of Medium: " <<	(pmedium*100) << endl;
  cout << "Precentage of Large: " <<	(plarge*100) << endl;
  cout << "Precentage of Family: " <<	(pfamily*100) << endl;
  return 0;
} // end of main function