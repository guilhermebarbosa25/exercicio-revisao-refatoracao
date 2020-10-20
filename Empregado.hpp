#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {

private:
    std::string nome;
    double salarioHora;
  public:
    void setNome(std::string nome);
    std::string getNome();
    double getSalarioHora();
    void setSalarioHora(double salario);
    double pagamentoMes(double horasTrabalhadas);
    Empregado(){};
    Empregado(std::string nome);
};

#endif
