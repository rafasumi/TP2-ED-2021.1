#include "Mind.h"

Mind::Mind() {
  name = "";
  data = "";
}

std::string Mind::getName() {
  return name;
}

void Mind::setName(std::string name) {
  this->name = name;
}

std::string Mind::getData() {
  return data;
}

void Mind::setData(std::string data) {
  this->data = data;
}

std::ostream& operator << (std::ostream& out, Mind const& mind) {
  return out << mind.name << " " << mind.data;
}
