#include <iostream>
#include <memory>

#include "CRectangle.h"
#include "CCircle.h"
#include "CTriangle.h"
#include "CFigureFactory.h"

using namespace std;

namespace NFigure {}

int main()
{
  setlocale(LC_ALL, "ru");
  cout << "укажите тип фигуры (прямоугольник-0, окружность-1, теругольник-2): ";
  int type;
  cin >> type;
  cout << " Введеное значение:" << type << endl;

    /// Проверим корректность введеного значения
  if (
        (NFigure::EFigure::Rectangle <= type)
        &&
        (NFigure::EFigure::Triangle >= type)
    )
     {

         shared_ptr<NFigure::IFigure> fig =
           shared_ptr<NFigure::IFigure>(
                     NFigure::CFigureFactory::getFigure(
                         (NFigure::EFigure)type
                         )
                     );


         fig->show();
         cout << endl;

         /// Если треугольник, вызовем метод определенный только для него
         if (nullptr != dynamic_cast<NFigure::CTriangle *>(fig.get()))
            {
            dynamic_cast<NFigure::CTriangle *>(fig.get())->specialMetod();
            }
     }
  else
      {
      cout << "Значение вне заданного диапазона" << endl;
      }

  return 0;
}
