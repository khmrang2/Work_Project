#include "Piece.h"

Piece::Piece(int live, int color, int con){
	SetStat(live, color, con);
}

void Piece::SetStat(int live, int color, int con){
	this->stat.live = live;
	this->stat.color = color;
	this->stat.con = con;
}

void Piece::SetLocate(int x, int y){
	this->locate.x = x;
	this->locate.y = y;
}
