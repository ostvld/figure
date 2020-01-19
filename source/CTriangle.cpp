#include "CTriangle.h"

namespace NFigure {
  void CTriangle::show()
  {
    cout << "показать " << m_name;
  }

  void CTriangle::specialMetod()
  {
    cout <<  "особый метод определенный для класса " << m_name << endl;
  }
  }
