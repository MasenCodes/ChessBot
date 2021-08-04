#ifndef CHESSPIECE_H
#define CHESSPIECE_H

#include <QGraphicsObject>

class ChessPiece: QGraphicsObject
{
public:
    ChessPiece(int w, int x, int y, std::string n);
    int weight;
    int xPos;
    int yPos;
    bool isCaptured;
    bool activelySelected;
    std::string name;
    virtual void move() = 0; // needs to be overwritten specifically to the chess piece
    virtual void legalMove(int xPos, int yPos) = 0; // specific to allowable move to the given piece
    virtual void setPicture(std::string url) = 0; // set image specific to the chess piece
    void render(QGraphicsScene scene);

};

#endif // CHESSPIECE_H
