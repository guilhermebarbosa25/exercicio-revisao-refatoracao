#ifndef VENDEDOR_H
#define VENDEDOR_H
#include <string>
#include "Empregado.hpp"
class Vendedor : public Empregado {
  private:
    double quotaMensalVendas;
  public:
    double quotaTotalAnual();
    double getquotaMensalVendas();
    void setquotaMensalVendas(double quota);
    Vendedor(){};
    Vendedor(std::string nome,double salario, int quota);
};
#endif


