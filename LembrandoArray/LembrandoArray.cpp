#include <iostream>
#include <string>
#include <array>
#include <locale>


//int main()
//{
//	setlocale(LC_ALL, "PORTUGUESE");
//	
//	int arr[5] = {10, 20, 30, 40, 50};
//
//	std::cout << "Endere�o onde a variavel do array esta localizada na mem�ria guardando seus valores " << &arr << '\n';
//
//	std::cout << "Imprime endere�o do Array " << '\n';
//
//	for  (auto i = 0; i < 5; i++)
//	{
//		std::cout << "Valor: " << arr[i] << ", endere�o de mem�ria: " << &arr[i] << '\n';
//	}
//	
//	std::cout << "Endere�o de mem�ria do array " << arr << '\n';
//}

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");

	int matrix[3][3] = {
	{1, 2, 3},
	{10, 20, 30},
	{100, 200, 300}
	};

	std::cout << "Valores e endere�os de mem�ria dos elementos da matrix " << '\n';

	for (auto i = 0; i < 3; i++) {
		for (auto j = 0; i < 3; i++) {
			std::cout << "Valor: " << matrix[i][j] << " Endere�o de mem�ria " << &matrix[i][j] << '\n';

		}
	}
	std::cout << "Endere�o de mem�ria da matrix " << matrix << '\n';

	return 0;
}