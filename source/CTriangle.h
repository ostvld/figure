#pragma once

#include "IFigure.h"

using namespace std;

namespace NFigure {
class CTriangle : public IFigure {
public:

  CTriangle() : IFigure()
  {}

  CTriangle(string name) : IFigure(name)
  {}

  ~CTriangle() override
  {}

  void show() override;

  void specialMetod();
  };
}
