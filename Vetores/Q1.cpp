#include <iostream>

void leitor(int v[], int tam) {

	for (int i = 0; i < tam; i++) {

		std::cin >> v[i];

	}

}

void printer(int v[], int tam) {

	for (int i = 0; i < tam; i++) {

		std::cout << v[i] << std::endl;

	}


}


int main() {

	int A[6];
	int tam = 6;
	int soma = 0;


	leitor(A, tam);
	

	soma += A[0] + A[1] + A[5];
	A[3] = 100;
	printer(A, tam);
	

}