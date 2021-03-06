// PizzaStore.cpp : Defines the entry point for the console application.
//

#include "../Stores/NYPizzaStore.h"
#include "../Stores/ChicagoPizzaStore.h"
#include "../Pizzas/iPizza.h"
#include <iostream>


int main()
{
  iStore* nyStore = new NYPizzaStore();
  iStore* chicagoStore = new ChicagoPizzaStore();

  iPizza* pizza = nyStore->orderPizza("cheese");
  std::cout << "Ethan ordered a " << pizza->getName() << std::endl << std::endl;

  pizza = chicagoStore->orderPizza("cheese");
  std::cout << "Joel ordered a " << pizza->getName() << std::endl;

  return 0;
}

