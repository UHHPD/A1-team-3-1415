#include <iostream>
#include <fstream>
#include <cmath>

int main() {
  std::ifstream fin1("mittelwerte.txt");
  std::ifstream fin2("varianzen.txt");
  double a,N,b,M = 0;
  for (int d=1; d < 27; ++d){
    fin1 >> a;
    fin2 >> b;
    N = N + a;
    M = M + b;
  }
  double avravr = N/26;
  double avrvar = M/26;
  std::cout << "Mittelwert der 26 Mittelwerte: " << avravr << std::endl;
  std::cout << "Mittelwert der 26 Varianzen: " << avrvar << std::endl;
  fin1.close();
  fin2.close();
}
// Wenn wir den Mittelwert der 234 datensumen nehmen erhalten wir einen Wert von 3.11538 und bei den Mittelwerten der Mittelwerte von 9er Blöcken erhalten wir 3.11539. Diese stimmen also fast perfekt überein. Die Varianzen hingegen weichen merklich voneinander ab. Die Varianz für die 234 Datensummen beträt 2.73455 wohingegen der Mittelwert der Varianzen der 9er Blöcke bei 2.4359 liegt. 