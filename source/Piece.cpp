#include "Piece.h"

Piece::Piece(int live, int color, int con){
	SetPiece(live, color, con);
}

void Piece::SetPiece(int live, int color, int con){
	this->live = live;
	this->color = color;
	this->con = con;
}
