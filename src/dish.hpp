#pragma once
#include <string>
using namespace std;

class Dish {
private:
  string description;

public:
  Dish() {
    description = "";
  }

  Dish(string description) {
    this->description = description;
  }

  string get_description() {
    return description;
  }
};
