#include "chesspiece.h"
#include <QGraphicsScene>

ChessPiece::ChessPiece(int w, int x, int y, std::string n)
{
    weight = w;
    xPos = x;
    yPos = y;
    name = n;
    isCaptured = false;
    activelySelected = false;
}

void ChessPiece::render(QGraphicsScene scene)
{
    if (parentWidget() == nullptr)
    {
        setParent(&scene);
    }
    setPos(xPos * 68, yPos * 68);
}
