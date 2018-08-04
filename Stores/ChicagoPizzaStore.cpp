#include "ChicagoPizzaStore.h"
#include "../Pizzas/ChicagoStyleCheesePizza.h"

iPizza * ChicagoPizzaStore::createPizza(std::string pizzaType)
{
  if (pizzaType == "cheese")
  {
    return new ChicagoStyleCheesePizza();
  }
  else if (pizzaType == "veggie")
  {

  }
  else if (pizzaType == "clam")
  {

  }
  else if (pizzaType == "pepperoni")
  {

  }
  else
  {
    return nullptr;
  }
}