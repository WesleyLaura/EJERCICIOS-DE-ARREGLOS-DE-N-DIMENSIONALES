/*4. Intercambio de Filas: Desarrolle un programa que intercambie dos filas específicas de una matriz
de 4x4 y muestre la matriz resultante. 
Ejemplo de Entrada
Matriz:
1  2  3  4
5  6  7  8
9  10 11 12
13 14 15 16

Filas a intercambiar:
0
2 
Matriz resultante:
9  10 11 12
5  6  7  8
1  2  3  4
13 14 15 16 */

#include <iostream>
using namespace std;

int main() {
int matriz[4][4] = {
    {1,2,3,4},
    {5,6,7,8},
	{9,10,11,12},
	{13,14,15,16}
};
int matrizIntercambiada[4][4];
//copia de la matriz
for (int i=0;i<4;i++) {
	for (int j=0;j<4;j++) {
		matrizIntercambiada[i][j]=matriz[i][j];
   }
}

int aux;
int n,m;
cout<<"Programa que intercambia dos filas especificas de una matriz\n"<<endl;
cout<<"MATRIZ DE ORDEN 4:\n"<<endl;
for (int i=0;i<4;i++) {
	for (int j=0;j<4;j++) {
		cout<<matriz[i][j]<<" ";	
   }
   cout<<endl;
}
cout<<"\nIngrese las dos filas a intercambiar: "<<endl;
cin>>n>>m;
for (int j=0;j<4;j++) {
   	aux=matrizIntercambiada[n][j];
   	matrizIntercambiada[n][j]=matrizIntercambiada[m][j];
   	matrizIntercambiada[m][j]=aux;
	}
cout<<"\nMATRIZ ORIGINAL:\tMATRIZ CON FILAS INTERCAMBIADAS:"<<endl;
 for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << "\t\t\t";
        for (int j = 0; j < 4; j++) {
            cout << matrizIntercambiada[i][j] << " ";
        }        
        cout << endl;
    }
return 0;
}