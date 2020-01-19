#pragma once

using namespace std;

#include "IFigure.h"

namespace NFigure {
class CCircle : public IFigure {
public:

  CCircle() : IFigure()
  {}

  CCircle(string name) : IFigure(name)
  {}

  ~CCircle() override
  {}

  void show() override;
  };
}
