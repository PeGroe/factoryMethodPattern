#pragma once

#include <vector>

class iPizza
{
public:
  iPizza();
  virtual ~iPizza();

  std::string getName() const;

  virtual void prepare() const;
  virtual void bake() const;
  virtual void cut() const;
  virtual void box() const;

protected:
  std::string pizzaName;
  std::string dough;
  std::string sauce;
  std::vector<std::string> toppings;
};