#include "NYPizzaStore.h"
#include "../Pizzas/NYStyleCheesePizza.h"

iPizza * NYPizzaStore::createPizza(std::string pizzaType)
{
  if (pizzaType == "cheese")
  {
    return new NYStyleCheesePizza();
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
