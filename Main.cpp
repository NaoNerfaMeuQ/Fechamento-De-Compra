#include <iostream>
#include <iomanip>


int main()
{
	//OBJETIVO: Calcule o valor final de uma compra com vários produtos
	// Programa deve perguntar quantos tipos de produtos serao registrados:
	// - Preço unitário
	// - Quantidade comprada
	
	// AO terminar total de unidades
	// Subtotal de compra
	// Percentual de desconto
	// Valor do desconto
	// Total a pagar

	// Subtotal menor que 150: Não tem desconto
	// Subtotal a partir de 150: 5% de desconto
	// Subtotal a partir de 300: 10% de desconto

	int quantidadeProdutos = 0;
	int quantidadeUnidades = 0;
	int totalItens = 0;
	double precoProdutos = 0.0;
	double valor = 0.0;

	std::cout << "Quantos produtos no total? ";
	std::cin >> quantidadeProdutos;

	for (int i = 1; i <= quantidadeProdutos; i++)
	{
		std::cout << "Produto " << i << ":\n";
		std::cout << "Preco: ";
		std::cin >> precoProdutos;
		std::cout << "Quantidade: ";
		std::cin >> quantidadeUnidades;
		valor += precoProdutos * quantidadeUnidades;
		totalItens += quantidadeUnidades;

	}



	if (valor < 150)
	{

		std::cout << "Total de unidades: " << totalItens << "\n";
		std::cout << "Percentual de desconto: 0%" << "\n"; //Não tem pq jogar uma variável aqui se o valor é menor que 150!
		std::cout << std::fixed << std::setprecision(2) << "Subtotal: " << valor << " R$";
	}
	else if (valor >= 150 && valor < 300)
	{
		double desconto = 0.05;
		double valorDesconto = desconto * valor;

		std::cout << "Total de unidades: " << totalItens << "\n";

		std::cout << std::fixed << std::setprecision(2) << "Subtotal: " << valor << " R$\n";

		std::cout << "Percentual de desconto: 5%" << "\n";
		std::cout << "Desconto: " << valorDesconto << " R$" << "\n";

		std::cout << std::fixed << "Total a pagar: " << valor - valorDesconto  << " R$";
	}
	else
	{
		double desconto = 0.10;
		double valorDesconto = desconto * valor;

		std::cout << "Total de unidades: " << totalItens << "\n";

		std::cout << std::fixed << std::setprecision(2) << "Subtotal: " << valor << " R$\n";

		std::cout << "Percentual de desconto: 10%" << "\n";
		std::cout << "Desconto: " << valorDesconto << " R$" << "\n";

		std::cout << std::fixed << "Total a pagar: " << valor - valorDesconto << " R$";
	}

	return 0;
}