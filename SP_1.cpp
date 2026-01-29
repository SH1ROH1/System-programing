#include <iostream>

using namespace std;


double z1_2 = 5.12 ;/* 1.2) */

double totalCost;

int main(void) {
  //1)
  cout << "1) " << endl;
  const char x1 = 'a';
  const char y1 = 'b';
  const char z1 = 'c';
  cout << x1 << " , " << y1 << " , " << z1 << endl;

  //1.2)
  cout << "1.2) " << endl;
  int x1_2 = 10;
  cout << x1_2 << " , " << z1_2 << endl;
  //2)
  cout << "2) " << endl;
  int x2 = 56;
  unsigned long y2 = 65687653;
  cout << x2 << " , " << y2 << endl;
  //3)
  cout << "3) " << endl;
  int notebooks = 5;
  int pencils = 3;
  int rulers = 1;

  double notebookPrice = 12.5;
  double pencilPrice = 5.0;
  double rulerPrice = 20.0;

  cout << notebooks << " , " << pencils << " , " << rulers << endl;
  totalCost = notebooks * notebookPrice + pencils * pencilPrice + rulers * rulerPrice;
  cout << "Total cost: " << totalCost << endl;
  cin.ignore();
  cin.get();
}