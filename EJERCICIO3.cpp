/*3. 	Suma de Diagonales: Desarrolle un programa que sume los elementos de las dos diagonales de una
matriz de 4x4 y muestre el resultado. */
#include <iostream>
using namespace std;

int main() {
int matriz[4][4] = {
    {1,2,3,1},
    {4,6,9,6},
	{2,5,8,2},
	{3,1,4,1}
};
int j=3;
int sumaDiagonales=0;
for (int i=0;i<4;i++) {
   	for (int j=0;j<4;j++) {
   		if (i==j) {
   			sumaDiagonales+=matriz[i][j];
		}
	}
	sumaDiagonales+=matriz[i][j];
	j--;
}
cout<<"Programa que suma las diagonales de una matriz\n"<<endl;
cout<<"MATRIZ DE ORDEN 4:\n"<<endl;
for (int i=0;i<4;i++) {
	for (int j=0;j<4;j++) {
		cout<<matriz[i][j]<<" ";	
   }
   cout<<endl;
}
cout<<"\nLa suma de la diagonal principal y secundaria es: ";
cout<<sumaDiagonales;
cout<<endl;
}