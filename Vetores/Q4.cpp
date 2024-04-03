#include <iostream>
void leitor(int v[], int tam) {

	for (int i = 0; i < tam; i++) {

		std::cin >> v[i];

	}

}

void maior(int v[], int tam) {
	int pos = 0;
	int maior = 0;
	for (int i = 0; i < tam; i++) {
	
		if (v[i] > maior) {
			maior = v[i];
			pos = i;
		}

	}

	std::cout << "Maior: " << maior << "na posição: " << pos << std::endl;

}

int main() {

	int v[10];
	int tam = 10;


	leitor(v, tam);
	maior(v, tam);

}