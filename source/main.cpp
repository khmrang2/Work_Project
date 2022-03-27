#include <iostream>
#include "Piece.h"
#define endl '\n'
using namespace std;

int main(){
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	Piece p = Piece(0, 0, 5);
	cout << p.GetCon() << endl;
	
	return 0;
}