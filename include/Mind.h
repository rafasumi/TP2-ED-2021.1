#ifndef MIND_H
#define MIND_H

#include <iostream>
#include <string>

class Mind {
  public:
    Mind();

    std::string getName();
    void setName(std::string name);

    std::string getData();
    void setData(std::string data);

    friend std::ostream& operator << (std::ostream& out, Mind const& mind);

  private:
    std::string name;
    std::string data;
};

#endif
