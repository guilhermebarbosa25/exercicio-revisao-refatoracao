#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H
#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

  private:
	int projetos;
  public:
    Engenheiro(std::string nome, double SalarioHora, int Projetos);
    void setProjetos(int qtd);
    int getProjetos();
    Engenheiro(){};
};
#endif
