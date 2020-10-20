#include <string>
#include "Vendedor.hpp"
#include "Empregado.hpp"
double Vendedor::quotaTotalAnual()
{
	  return this->quotaMensalVendas * 12;
}
double Vendedor::getquotaMensalVendas()
{
	  return this->quotaMensalVendas;
}
void Vendedor::setquotaMensalVendas(double quota)
{
	  this->quotaMensalVendas = quota;
}
Vendedor::Vendedor(std::string nome, double salario, int quota)
{
    this->setNome(nome);
    this->setSalarioHora(salario);
    this->setquotaMensalVendas(quotaMensalVendas);
}
