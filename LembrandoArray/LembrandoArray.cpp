#include <iostream>
#include <string>
#include <array>
#include <locale>


int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	int arr[5] = {10, 20, 30, 40, 50};

	std::cout << "Endereço onde a variavel do array esta localizada na memória guardando seus valores " << &arr << '\n';

	std::cout << "Imprime endereço do Array " << '\n';

	for  (auto i = 0; i < 5; i++)
	{
		std::cout << "Valor: " << arr[i] << ", endereço de memória: " << &arr[i] << '\n';
	}
	
	std::cout << "Endereço de memória do array " << arr << '\n';
}