#ifndef MIND_H
#define MIND_H

#include <iostream>
#include <string>

class Mind {
  public:
    // Construtor da classe Mind
    Mind();

    // Retorna o valor do atributo name
    std::string getName();
    // Seta o valor do atributo name para o valor passado como parâmetro
    void setName(std::string name);

    // Retorna o valor do atributo data
    std::string getData();
    // Seta o valor do atributo data para o valor passado como parâmetro
    void setData(std::string data);

    // Sobrescrita do operador << para uso com o std::cout
    friend std::ostream& operator << (std::ostream& out, Mind const& mind);

  private:
    std::string name;
    std::string data;
};

#endif
