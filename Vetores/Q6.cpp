#include <iostream>

void leitor(int v[], int tam) {

	for (int i = 0; i < tam; i++) {

		std::cin >> v[i];

	}

}

void inversor(int v[], int a[], int tam) {
	int b = tam - 1;
	for (int i = 0; i < tam; i++) {

		a[b] = v[i];

	}

}


int main() {

	int v[10];
	int a[10];
	int tam = 10;


	leitor(v, tam);
	inversor(v, a, tam);

}




