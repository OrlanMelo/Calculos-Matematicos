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

		resultado = valor1 - valor2;//Operador - para subtra��o.
		cout << "Resultado da subtra��o: " << resultado << "\n";
	}

	void Divisao(int valor1, int valor2)
	{
		int resultado;

		resultado = valor1 / valor2;//Operador / para divis�es.
		cout << "Resultado da divis�o: " << resultado << "\n";
	}

	void Multiplicar(int valor1, int valor2)
	{
		int resultado;

		resultado = valor1 * valor2;//Operador * para multiplica��es.
		cout << "Resultado da multiplica��o: " << resultado << "\n";
	}

	void Percentual(int valormenor, int valortotal)
	{
		int resultado;

		resultado = valormenor * 100 / valortotal;//Operadores * e / para o c�lculo de percentual.
		cout << "Resultado da porcentagem de " << valortotal << " | " << resultado << "%\n";
	}

}Funcoes;

int main()
{

	cout << "O assistente est� efetuando c�lculos matem�ticos...\n";

	Funcoes.Soma(2, 3);
	Funcoes.Subtrair(4, 2);
	Funcoes.Divisao(8, 4);
	Funcoes.Multiplicar(5, 3);
	Funcoes.Percentual(400, 800);

	system("pause");
}