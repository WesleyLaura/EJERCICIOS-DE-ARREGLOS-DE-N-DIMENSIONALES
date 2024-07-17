/*10. Generador de Tablero de Buscaminas: Desarrolla un programa que genere un tablero inicial para
el juego de Buscaminas en una cuadrícula de 10x10. El programa debe: 
a) Crear aleatoriamente un tablero donde cada celda puede contener una mina (1) o estar vacía (0). 
b) Para cada celda, calcular y mostrar el número de minas en las ocho celdas adyacentes (no se
cuenta la celda misma). 
c) Mostrar el tablero original con las minas y el tablero con los números lado a lado. 
Nota: Recuerda que en Buscaminas, el número en una celda indica cuántas minas hay alrededor, no
incluyendo la propia celda.
*/

#include <iostream>
#include <cstdlib>
#include <ctime> 
#include <windows.h>
using namespace std;

const int FILAS=10;
const int COLUMNAS=10;

void inicializarTablero(int tablero[FILAS][COLUMNAS]) {
    srand(time(0));

    for (int i=0;i<FILAS;i++) {
        for (int j=0;j<COLUMNAS;j++) {
            tablero[i][j]=rand()%2; // Para valores 0 o 1
        }
    }
}

int contarMinasAdyacentes(int tablero[FILAS][COLUMNAS],int fila,int columna) {
    int contador=0;
    
    //Direcciones de los vecinos adyacentes
    int direcciones[8][2]={
        {-1,-1},{-1,0},{-1,1},
        {0,-1},        {0,1},
        {1,-1},{1,0},{1,1}
    };
    //Contar minas en los vecinos
    for (int d=0;d<8;d++) {
        int vecinoFila=fila+direcciones[d][0];
        int vecinoColumna=columna+direcciones[d][1];
        
        // Verificar límites del tablero y contar mina si existe
        if (vecinoFila>=0 && vecinoFila<FILAS &&
            vecinoColumna>=0 && vecinoColumna<COLUMNAS &&
            tablero[vecinoFila][vecinoColumna]==1) {
            contador++;
        }
    }
    return contador;
}

void mostrarTablero(int tablero[FILAS][COLUMNAS]) {
    int tableroNumeros[FILAS][COLUMNAS];
	for (int i=0;i<FILAS;i++) {
    	for (int j=0;j<COLUMNAS;j++) {
    		tableroNumeros[i][j]=tablero[i][j];
		}
	}
	for (int i=0;i<FILAS;i++) {
        for (int j=0;j<COLUMNAS;j++) {
            cout<<tablero[i][j]<<" ";
    	}
    	cout<<"\t\t";
		for (int j=0;j<COLUMNAS;j++) {
            int minasAdyacentes=contarMinasAdyacentes(tableroNumeros,i,j);
            cout<<minasAdyacentes<<" ";
        }
        cout<<endl;
    }
}

int main() {
	SetConsoleOutputCP(CP_UTF8);
    int tablero[FILAS][COLUMNAS];

    inicializarTablero(tablero);

    cout<<"Programa generador de tablero de BUSCAMINAS:\n"<<endl;
    cout<<"Tablero original:\t\tTablero con número de minas:" << endl;
    cout<<"\n";
    mostrarTablero(tablero);
	
    return 0;
}