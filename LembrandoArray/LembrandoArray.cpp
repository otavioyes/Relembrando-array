#include <iostream>
#include <string>
#include <array>
#include <locale>


int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	int arr[5] = {10, 20, 30, 40, 50};

	std::cout << "Endere�o onde a variavel do array esta localizada na mem�ria guardando seus valores " << &arr << '\n';

	std::cout << "Imprime endere�o do Array " << '\n';

	for  (auto i = 0; i < 5; i++)
	{
		std::cout << "Valor: " << arr[i] << ", endere�o de mem�ria: " << &arr[i] << '\n';
	}
	
	std::cout << "Endere�o de mem�ria do array " << arr << '\n';
}