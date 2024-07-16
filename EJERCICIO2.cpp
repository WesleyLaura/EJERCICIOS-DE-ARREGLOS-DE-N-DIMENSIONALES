/*2. Buscar un Valor en una Matriz: Escriba un programa que busque un valor específico en una matriz
de 3x3 y devuelva todas las posiciones donde se encuentra, indicando la fila y la columna de cada
ocurrencia. 
Ejemplo de entrada          Ejemplo de Salida
Matriz:						El valor 2 se encuentra en:
1 2 3						Fila 0, Columna 1
4 2 6						Fila 1, Columna 1
7 2 9						Fila 2, Columna 1
Valor a buscar: 2 
 */
#include <iostream>
using namespace std;
int main(){
	
	int matriz[3][3]{
		{1,2,3},
		{4,2,6},
		{7,2,9}
	};
	 int  i,j,k;
	 //mostrar la matriz
	 cout<<"MATRIZ\n\n";
	 for(i=0;i<3;i++){
	 	for(j=0;j<3;j++){
	 		cout<<matriz[i][j]<<" ";
		 }
		 cout<<"\n";
	 }
	 cout<<"\n";
	 cout<<"VALOR A BUSCAR ES: ";
	  cin>>k;
	 cout<<"\n";
	 //buscar el valor en la matriz y almacenar las posiciones
	 bool encontrado=false;
	 
	 for(i=0;i<3;i++){
	 	for(j=0;j<3;j++){
	 		if(matriz[i][j]==k){
	 		encontrado=true;
			}
		}
		
	}
	 	cout<<"MATRIZ INICIAL:\t\tEL VALOR DE "<<k<<" SE ENCUENTRA EN: "<<endl;
	 	cout<<"\n";
	 	//mostrar las matrices en horizontal
	 	for(i=0;i<3;i++){
	 	for(j=0;j<3;j++){
	 		cout<<matriz[i][j]<<" ";
		 }
		 cout<<"\t\t\t";
	 	for(j=0;j<3;j++){
	 		if(matriz[i][j]==k){
	 		cout<<" Fila "<<i<<","<<"Columna "<<j;
			}

		}
		cout<<"\n";
	 }
	
	return 0;
	
}