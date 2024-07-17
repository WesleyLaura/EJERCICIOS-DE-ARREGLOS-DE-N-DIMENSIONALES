/*9. Programa que imprime un cuadrado latino de orden N. Un cuadrado latino de orden N es una matriz
cuadrada en la que la primera fila contiene los N primeros números naturales y cada una de las
siguientes N-1 filas contiene la rotación de la fila anterior un lugar a la derecha. Ejemplo: Cuadrado
latino de orden 4.  
1 2 3 4 
4 1 2 3 
3 4 1 2 
2 3 4 1 */

#include <iostream>
using namespace std;

void CuadradoLatino(int N) {
    int matriz[N][N];

    //primera fila N números naturales
    for (int j=0;j<N;j++) {
        matriz[0][j]=j+1;
    }
    //rotar a la derecha las filas siguientes
    for (int i=1;i<N;i++) {
        for (int j=0;j<N;j++) {
            matriz[i][j]=matriz[i-1][(j+N-1)%N];
        }
    }

    cout<<"CUADRADO LATINO DE ORDEN "<<N<<":"<<endl;
    for (int i=0;i<N;i++) {
        for (int j=0;j<N;j++) {
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int N;
    cout<<"Programa que imprime un cuadrado latino\n"<<endl;
    cout<<"Introduce el orden del cuadrado latino (N): ";
    cin>>N;
	cout<<endl;
    if (N>0) {
        CuadradoLatino(N);
    } else {
        cout<<"Numero de orden invalido"<<endl;
    }

    return 0;
}