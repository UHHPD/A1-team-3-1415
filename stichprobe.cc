#include <iostream>
#include <fstream>

int main() {
  std::ifstream fin("datensumme.txt");
  double a,N = 0;
  for (int d=1; d < 235; ++d){
    fin >> a;
    N = N + a;
  }
  std::cout << N << std::endl;
  double avr = N/234;
  std::cout << "Mittelwert: " << avr << std::endl;
  fin.close();
  
  /*std::ifstream fin("datensumme");
  double b,dif,var = 0;
  for (int d=1;d < 235; ++d){
    fin >> b;
    dif = ( b - avr )*(b - avr) + dif;
  }
  var = dif/234;
  std::cout << "Varianz: " << var << std::endl;
  fin.close();*/
}