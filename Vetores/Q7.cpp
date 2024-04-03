#include <iostream>

void diferenca(int v1[], int v2[], int v3[], int tam) {

	for (int i = 0; i < tam; i++) {

		v3[i] = v1[i] - v2[i];

	}

}

void soma(int v1[], int v2[], int v3[], int tam) {

	for (int i = 0; i < tam; i++) {

		v3[i] = v1[i] + v2[i];

	}

}

void multi(int v1[], int v2[], int v3[], int tam) {

	for (int i = 0; i < tam; i++) {

		v3[i] = v1[i] * v2[i];

	}

}

void leitor(int v[], int tam) {

	for (int i = 0; i < tam; i++) {

		std::cin >> v[i];

	}

}


void printer(int v3[], int tam) {

	for (int i = 0; i < tam; i++) {

		std::cout << v3[i] << " ";

	}

}




int main() {

	int v1[20];
	int v2[20];
	int v3[20];
	int tam = 20;


	leitor(v1, tam);
	leitor(v2, tam);

	std::cout << "diferença: ";
	diferenca(v1, v2, v3, tam);
	printer(v3, tam);

	std::cout << "soma: ";
	soma(v1, v2, v3, tam);
	printer(v3, tam);

	std::cout << "multiplicação: ";
	multi(v1, v2, v3, tam);
	printer(v3, tam);


}



