#include "CFigureFactory.h"

namespace NFigure {

IFigure *CFigureFactory::getFigure(EFigure type)
{
    if (NFigure::EFigure::Rectangle == type)
    {
        return new NFigure::CRectangle("прямоугольник");
    }
    else if (NFigure::EFigure::Circle == type)
    {
        return new NFigure::CCircle("окружность");
    }
    else if (NFigure::EFigure::Triangle == type)
    {
        return new NFigure::CTriangle("треугольник");
    }
}

}
