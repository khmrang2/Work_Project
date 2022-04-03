#include <iostream>
#include "test2.cpp"
#define endl '\n'
using namespace std;

int main(){
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	
	test t;
	int bd[2][2];
	&bd = t.getboard();
	cout << bd[1][1] << endl;
	cout << t.getnum() << endl;
	bd[1][1] = 3;
	cout << bd[1][1] << endl;
	cout << t.getnum() << endl;
	
	//Piece p = Piece(LIVE, BLACK, KING);
	//cout << p.GetCon() << endl;
	
	return 0;
}