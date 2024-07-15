/*1. Producto de Dos Matrices: Implemente un programa que multiplique dos matrices de 3x3 y
muestre el resultado, y muestre las dos matrices y su resultado en horizontal
Ejemplo de Salida
Matriz A: Matriz B:       Resultado:
1 2 3    9 8 7           30 24  18
4 5 6    6 5 4           84 69  54
7 8 9   3 2 1           138 114 90
*/
#include <iostream>
using namespace std;

int main(){
	int matrizA[3][3]={
		{1,2,3},
		{4,5,6},
		{7,8,9}	
	};
	 
	 int matrizB[3][3]={
		{9,8,7},
		{6,5,4},
		{3,2,1}	
	};
	int i,j,k;
	int resultado[3][3];
	 // inicializar todos elementos de la matriz resultado en 0
	 
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			resultado[i][j]=0;
		}
	}
	//multiplicacion de matrizA y matrizB
	
	 for(i=0;i<3;i++){
	 	for(j=0;j<3;j++){
	 		for(k=0;k<3;k++){
	 			resultado[i][j]+=matrizA[i][k]*matrizB[k][j];
	 		}
		 }
	 }
	 
	 //mostrar la matrizA , matrizB y resultado
	 cout<<"MULTIPLICACION DE MATRIZ AXB=RESULTADO"<<endl<<endl;
	 cout<<"MATRIZ A:\tMATRIZ B:\tRESULTADO:\n"<<endl;
	 for(i=0;i<3;i++){
	 	for(j=0;j<3;j++){
	 		cout<<matrizA[i][j]<<" ";
		}
		 cout<<"\t\t";
		
	 	for(j=0;j<3;j++){
	 		cout<<matrizB[i][j]<<" ";
	 		}
			cout<<"\t\t";
		for(j=0;j<3;j++){
	 		cout<<resultado[i][j]<<" ";
		}
		 cout<<"\n";
	 }


	return 0;
}