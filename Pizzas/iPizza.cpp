#include "iPizza.h"
#include <iostream>
#include <string>

iPizza::iPizza()
{
}

iPizza::~iPizza()
{
}

std::string iPizza::getName() const
{
  return pizzaName;
}

void iPizza::prepare() const
{
  std::cout << "Preparing " << pizzaName << std::endl;
  std::cout << "Tossing dough..." << std::endl;
  std::cout << "Adding sauce..." << std::endl;
  std::cout << "Adding toppings: " << std::endl;
  for (const auto& elem : toppings)
  {
    std::cout << "   - " << elem << std::endl;
  }
}

void iPizza::bake() const
{
  std::cout << "Bake for 25 minutes at 350 degrees" << std::endl;
}

void iPizza::cut() const
{
  std::cout << "Cutting the pizza into diagonal slices" << std::endl;
}

void iPizza::box() const
{
  std::cout << "Place pizza in official PizzaStore box" << std::endl;
}
