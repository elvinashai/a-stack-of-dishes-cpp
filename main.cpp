#include <iostream>
#include "src/dish_stack.hpp"

using namespace std;

int main() {
  DishStack stack;

  Dish one_dish("A dish with one fish pattern on it");
  Dish two_dish("A dish with two fish patterns on it");
  Dish red_dish("A dish with a red fish pattern on it");
  Dish blue_dish("A dish with a blue fish pattern on it");

  cout << "Initial size: " << stack.size() << endl;

  stack.push(one_dish);
  stack.push(two_dish);
  stack.push(red_dish);
  stack.push(blue_dish);

  cout << "Size after pushes: " << stack.size() << endl;

  cout << "Peek: " << stack.peek().get_description() << endl;

  cout << "Pop: " << stack.pop().get_description() << endl;
  cout << "Pop: " << stack.pop().get_description() << endl;

  cout << "Final size: " << stack.size() << endl;

  return 0;
}
