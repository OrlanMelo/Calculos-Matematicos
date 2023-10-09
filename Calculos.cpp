#include <iostream>

using namespace std;

class cFuncoes
{
public:

	void Soma(int valor1, int valor2)
	{
		int resultado;

		resultado = valor1 + valor2;//Operador + para soma.
		cout << "Resultado da soma: " << resultado << "\n";
	}

	void Subtrair(int valor1, int valor2)
	{
		int resultado;

		resultado = valor1 - valor2;//Operador - para subtração.
		cout << "Resultado da subtração: " << resultado << "\n";
	}

	void Divisao(int valor1, int valor2)
	{
		int resultado;

		resultado = valor1 / valor2;//Operador / para divisões.
		cout << "Resultado da divisão: " << resultado << "\n";
	}

	void Multiplicar(int valor1, int valor2)
	{
		int resultado;

		resultado = valor1 * valor2;//Operador * para multiplicações.
		cout << "Resultado da multiplicação: " << resultado << "\n";
	}

	void Percentual(int valormenor, int valortotal)
	{
		int resultado;

		resultado = valormenor * 100 / valortotal;//Operadores * e / para o cálculo de percentual.
		cout << "Resultado da porcentagem de " << valortotal << " | " << resultado << "%\n";
	}

}Funcoes;

int main()
{

	cout << "O assistente está efetuando cálculos matemáticos...\n";

	Funcoes.Soma(2, 3);
	Funcoes.Subtrair(4, 2);
	Funcoes.Divisao(8, 4);
	Funcoes.Multiplicar(5, 3);
	Funcoes.Percentual(400, 800);

	system("pause");
}