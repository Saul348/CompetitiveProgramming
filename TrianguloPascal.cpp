#include<iostream>
//Funcion Factorial
int factorial(int n) {
	int resultado = 1;
	if (n == 1 ||  n== 0)
		return 1;
	else {
		for (int i = 1; i <= n; i++) {
			resultado = resultado * i;
		}
		return resultado;
	}
}
//Esta funcion imprime la posición exacta 
int Pascal(int Nivel, int k) {//(n k)= n!/k!(n-k)!
	return (factorial(Nivel)/(factorial(k)*factorial(Nivel-k)));
}
//Esta función imprime todo el triangulo(rectangulo xd)
void  PrintNivel(int Nivel) {
	
	for (int k = 0; k < Nivel; k++) {
		for (int j = 0 ; j <= k; j++) {
			std::cout << (factorial(k) / (factorial(j) * factorial(k - j))) << " ";
		}
		std::cout << std::endl;
	}
}

int main() {
	int numero = 0;
	std::cout << "Muy buenas, ingreso su pinshi numerin" << std::endl;
	std::cin >> numero;
	
	PrintNivel(numero);
}