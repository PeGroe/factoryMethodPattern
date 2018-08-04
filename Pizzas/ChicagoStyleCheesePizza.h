#pragma once

#include "iPizza.h"

class ChicagoStyleCheesePizza : public iPizza
{
public:
  ChicagoStyleCheesePizza();
  virtual ~ChicagoStyleCheesePizza();

  virtual void cut() const override;
};