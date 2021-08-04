#ifndef PAWN_H
#define PAWN_H

#include <chesspiece.h>


class Pawn: ChessPiece
{
public:
    Pawn(int w, int x, int y, std::string n);
};

#endif // PAWN_H
