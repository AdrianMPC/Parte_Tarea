#include <iostream>
#include <algorithm>
using namespace std;

float promedio;
int sizearray;

int main() {
  int numeros[7];
  int sizearray = sizeof(numeros)/sizeof(numeros[0]);
  for ( int i = 0; i < sizearray; i++ )  //for loop para insertar los [7] números
  {
    cout<<"Digite un numero "<<(i+1)<<": ";
    cin>>numeros[i];
  }
  int sum = 0; 
    for_each(begin(numeros), end(numeros), //sumo los elementos del array...
    [&] (int &i) {
      sum += i;
    });
  promedio = sum / sizearray;
  cout<<"El promedio del estudiante es: "<<promedio;
  return 0;
}  