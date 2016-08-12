#include <iomanip>
#include <iostream>

using namespace std;

int menu();
int factorial(int numero);
int formula(int numero,int posicion);
//void CreandoMatriz (int** m, int numero);
//void LlenandoMatriz (int** matriz, int numero);
//void Imprimir (int** m,int numero);
//void liberar_Memoria(int** m, int numero);

int main(int argc, char const *argv[]){
	
	int opcion=0;
	
	while ( (opcion = menu()) != 3){

		if (opcion == 1){
			int gradoPoli,coeficiente;
			double *f;
			cout<<"-------------- EJERCICIO 1 --------------"<<endl;
			cout<<"Ingrese el grado mas alto del polinomio: "<<endl;
			cin>>gradoPoli;
			f = new double [gradoPoli+1];
			
			for (int i = 0; i <=gradoPoli;i++){
                cout<<"INGRESE EL COEFICIENTE-> "<<endl;
                cin>coeficiente;
            }

            //RUFFINI
   			for (i = n - 1; i > -1; i--) {
   				f[i] = f[i] + f[i + 1] * x;
   			}
			
 
		} // fin if 
		else{
			if (opcion==2){
				cout<<"-------------- EJERCICIO 2 --------------"<<endl;
				int numero;
				cout<<"Ingrese la potencia: ";
				cin>>numero;
    			int x = numero * 2;
    			for(int i = 0; i <= numero; ++i,x -= 2){
        			for(int j = 0; j <= x;j++)
            			cout<<" ";
        				for(int k = 0; k <= i;++k){
            				if(formula(i,k) % 2 == 0){
                				cout<<setw(8)<<"☻";
            				}
            				else{
                			cout<<setw(8)<<"☺";
            				}

        				}
        				cout<<endl;
    			}

			} // fin opcion2
		}
			
	} //fin while

	
	return 0;
}

int menu(){
	cout << "1. Ejercicio 1" << endl
	     << "2. Ejercicio 2" << endl
	     << "3. Salir" << endl;
	     cout<<"Ingrese su opcion: ";
	int opcion;
	do{
		cin >> opcion;
		if (opcion != 1 && opcion != 2 && opcion != 3)
			cout << "Introduzca un valor correcto" << endl;
	}while (opcion != 1 && opcion != 2 && opcion != 3);

	return opcion;
}

int factorial(int numero){
    int factorial = 1;
    for(int i = 1; i <= numero;++i){
            factorial *= i;
    }
    return factorial;
}

int formula(int numero,int posicion){
   int combinacion;
   combinacion = factorial(numero)/ (factorial(numero-posicion)* factorial(posicion) );

   return combinacion;  
}

void CreandoMatriz (int** m, int numero){
    for (int i =0; i<numero+1;i++){
        m[i]=new int[numero+1];
    }
}

void LlenandoMatriz (int** matriz, int numero){
    for (int i =0; i<numero+1;i++){
        for (int j = 0; j < numero+1; ++j){
            matriz[i][j]=0;
        }
    }
}

void Imprimir (int** m,int numero){
    for(int i =0; i<numero+1;i++){
            for(int j =0 ;j<numero+1;j++){
                cout<<"["<<m[i][j]<<"]";
            }
        cout<<"\n";
    }   
}

void liberar_Memoria(int** m, int numero){
    for(int i =0 ; i <numero+1;i++){
        delete[] m[i];
    }
    delete[] m;

}

