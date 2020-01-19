#pragma once

#include "CRectangle.h"
#include "CCircle.h"
#include "CTriangle.h"

using namespace std;

namespace NFigure {

enum EFigure {
  Rectangle = 0,
  Circle    = 1,
  Triangle  = 2
  };

class CFigureFactory {
public:

  CFigureFactory()
  {}

  static IFigure* getFigure(EFigure type);


  };
}
