
#include <iostream>
#include <string>

using namespace std; 


const int len = 7;

int vector [len]  = { 9, 4,6,3,8,5,1 }; 

void ordenar(int vector[] ,int len) {
	
	int aux = 0; 
	for (int i = 0 ; i < len; i = i + 1) { 
	//	cout << "i=" << i << " ; vector[i]=" << vector[i]<< endl;
		for (int j = 0; j < len; j = j + 1) { 
	//		cout << "comparar con j=" << j << " ; vector[j]=" << vector[j]<< endl;
			if (vector[i] < vector[j]) { 
	//			cout << "Intercambiamos posiciones"<<endl; 
				aux = vector[i];
				vector[i] = vector[j]; 
				vector[j] = aux;

			}
		} 
	}
}

int main () { 
	ordenar(vector, len);
	cout  << "-------------------------------------------" << endl;
	for (int i = 0 ; i < len; i = i + 1) { 
		cout << "i=" << i << " ; vector[i]=" << vector[i]<< endl;
	
	} 

}
