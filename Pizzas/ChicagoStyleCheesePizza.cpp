#include "ChicagoStyleCheesePizza.h"
#include <iostream>

ChicagoStyleCheesePizza::ChicagoStyleCheesePizza()
{
  pizzaName = "Chicago Style Deep Dish Cheese Pizza";
  dough = "Extra Thick Crust Dough";
  sauce = "Plum Tomato Sauce";

  toppings.push_back("Shredded Mozzarella Cheese");
}

ChicagoStyleCheesePizza::~ChicagoStyleCheesePizza()
{
}

void ChicagoStyleCheesePizza::cut() const
{
  std::cout << "Cutting the pizza intro square slices" << std::endl;
}
