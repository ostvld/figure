#pragma once

#include <iostream>
#include <string>

using namespace std;

namespace NFigure {
  class IFigure {
public:

    IFigure()
    {}

    IFigure(string name):
    m_name(name)
    {
        cout << m_name << endl;
    }

    virtual void show() = 0;

    virtual ~IFigure() {}

  protected:

string m_name;

    };
  }
