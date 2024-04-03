#include <iostream>

void leitor(int v[], int tam) {

	for (int i = 0; i < tam; i++) {

		std::cin >> v[i];

	}

}


void pares(int v[], int tam) {
	int contador = 0;
	for (int i = 0; i < tam; i++) {

		if (v[i] % 2 == 0)
			contador++;

	}

	std::cout << contador;
}


int main() {

	int v[10];
	int tam = 10;

	leitor(v, tam);
	pares(v, tam);


}