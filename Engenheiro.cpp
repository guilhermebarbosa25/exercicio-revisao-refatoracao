#include <string>
#include "Engenheiro.hpp"

void Engenheiro::setProjetos(int qtd)
{
    this->projetos = qtd;
}
Engenheiro::Engenheiro(std::string nome, double SalarioHora, int Projetos)
{
    this->setNome(nome);
    this->setSalarioHora(SalarioHora);
    this->setProjetos(Projetos);
}
int Engenheiro::getProjetos()
{
    return this->projetos;
}
