#ifndef CHESSPIECE_H
#define CHESSPIECE_H

#include <QGraphicsItem>

class ChessPiece
{
public:
    ChessPiece();
    QGraphicsPixmapItem piece;
    int weight;
    int xPos;
    int yPos;
    bool isCaptured;
    bool activelySelected;
    std::string name;
    virtual void move() = 0; // needs to be overwritten specifically to the chess piece
    virtual void legalMove(int xPos, int yPos) = 0; // specific to allowable move to the given piece
    void render(QGraphicsScene scene);
};

#endif // CHESSPIECE_H
