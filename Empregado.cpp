#include <string>
#include "Empregado.hpp"

void Empregado::setNome(std::string nome)
{
    this->nome = nome;
}

std::string Empregado::getNome()
{
    return this->nome;
}
double Empregado::pagamentoMes(double horasTrabalhadas)
{
      double t = horasTrabalhadas;
	  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > 8) {
        double x = horasTrabalhadas - 8;
        t += x / 2;
      }
	  return t * salarioHora;
}
double Empregado::getSalarioHora()
{
    return this->salarioHora;
}
void Empregado::setSalarioHora(double salario)
{
    this->salarioHora=salario;
}
Empregado::Empregado(std::string nome)
{
    this->setNome(nome);
}
