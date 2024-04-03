#include <iostream>

void gabarito(char gab[], int tam) {
	std::cout << "Digite o gabarito da prova: " << std::endl;
	for (int i = 0; i < tam; i++) {

		std::cin >> gab[i];



	}


}

void respostas(char res[], int tam) {
	std::cout << "Digite suas respostas: " << std::endl;
	for (int i = 0; i < tam; i++) {

		std::cin >> res[i];

	}

}

void comparar(char gab[], char res[], int tam) {
	int acertos = 0;
	for (int i = 0; i < tam; i++) {

		if (res == gab)
			acertos++;
	}

	std::cout << "Você acertou:" << acertos;

}

int main() {
	
	char gab[10];
	char res[10];
	int tam = 10;
	gabarito(gab, tam);
	respostas(res, tam);
	comparar(gab, res, tam);

}


