#include <iostream>


void leitor(int v[], int tam) {

	for (int i = 0; i < tam; i++) {

		std::cin >> v[i];

	}

}


bool comparar(int v1[],int v2[], int tam) {
	int cont = 0;
	for (int i = 0; i < tam; i++) {

		if (v1[i] == v2[i])
			cont++;
	}

	if (cont == tam)
		return true;

	return false;
}



int main() {

	int v1[5];
	int v2[5];
	int tam = 5;

	if (comparar(v1, v2, tam))
		std::cout << "Possuem valores iguais";
	else
		std::cout << "São diferentes";
}