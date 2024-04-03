#include <iostream>

void leitor(int v[], int tam) {

	for (int i = 0; i < tam; i++) {

		std::cin >> v[i];

	}

}

void rep(int v1[], int tam) {
	int a = 1;
	for (int i = 0; i < tam; i++) {

		for (int j = a; j < tam; j++) {
			
			if (v1[i] == v1[j])
				std::cout << "Valor: " << v1[i] << "na posição: " << j << std::endl;

		}
		a++;

	}

}




int main() {

	int v1[10];
	int tam = 10;

	leitor(v1, tam);
	rep(v1, tam);
	

}



