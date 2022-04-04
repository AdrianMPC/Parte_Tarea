#include <iostream>
using namespace std;

int main() {
  int numeros[10];
  int tam = (sizeof(numeros) / sizeof(numeros[0]));
  for ( int i = 0; i < tam; i++ )  //for loop para insertar los [10] números
  {
    cout<<"Digite un numero: ";
    cin>>numeros[i];
  }
  for ( int i = 0; i < tam; i++)  // checkea uno por uno si es positivo e imprime esos
  {
    if ( numeros[i] < 0 )  // checkea si es posi o negativo e imprime solo posi
      continue;
      cout<<numeros[i]<<"\n";
  }
  return 0;
} 