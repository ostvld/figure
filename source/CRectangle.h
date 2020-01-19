#pragma once

#include "IFigure.h"

using namespace std;

namespace NFigure {
class CRectangle : public IFigure {
public:

  CRectangle() : IFigure()
  {}

  CRectangle(string name) : IFigure(name)
  {}

  ~CRectangle() override
  {}

  void show() override;
  };
}
