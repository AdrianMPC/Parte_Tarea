#include <iostream>
#include <vector>
using namespace std;

int main() {
  int i, n;
  float numeros[100];

  cout << "Numero totales de elementos (MAXIMO: 100): ";
  cin >> n;
  cout << endl;

  // Guarda el numero
  for(i = 0; i < n; ++i) {
    cout << "Numero " << i + 1 << ": ";
    cin >> numeros[i];
  }
  
  // encuentra el mas grande
  for (i = 1;i < n; ++i) {
    if(numeros[0] < numeros[i])
    {
      numeros[0] = numeros[i];
    }
  }

  cout << "\n" << "Elemento mas largo " << numeros[0];

  return 0;
}