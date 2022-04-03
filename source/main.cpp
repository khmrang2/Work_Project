#include <iostream>
#include "Board.cpp"
#define endl '\n'
using namespace std;

int main(){
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	Board b;
	int *realBoard[9];
	for(int i = 0 ; i < 9 ; i++){
		int *array = new int[9]{i,i,i,i,i,i,i,i,i};
		realBoard[i] = array;
	}
	
	int *tempBoard[9];
	
	//cout << b.getBoard(0)[0] << endl;
	// this->ptrBoard[1] : 1번쨰 배열의 주소값
	
	for(int i = 0 ; i < 9 ; i++){
		tempBoard[i] = b.getBoard(i); // i번째 배열의 주소값을 받음
	}
	cout << tempBoard[0][0] << endl;
	// 보드를 불러 올 수 있습니다!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	
	
	//그러면 뭐지 참조값이 사라지는건가
	
	
	
	/*
	
	
	
	for(int i = 1 ; i < 2 ; i++){
		int* array = new int[9]{0}; // int 4바이트가 9개가 할당됨.
		cout << array << endl;
		cout << sizeof(*array) << endl;
	}
	
	int* array = new int[9]{0,410317,0,0,0,0,0,0,0};
	cout << *(array + 1) << endl;
	delete(array);
	cout << *(array + 1) << endl; // 배열을 delete해도 그 배열의 주소값은 남아있네?
	
	
	//test t;
	int* ptrArr[8];
	int* board;
	int array[8] = {0,75487125,2,3,4,5,6,7};
	board = array; // array = &array[0]
	
	ptrArr[1] = board;
	
	//cout << board + 1 << endl;
	cout << *(ptrArr[1] + 1) << endl;
	//t.board[1] = 3;
	//cout << t.board + 1 << endl;
	//cout << t.board[1] << endl;
	*/
	
	/*int bd[2][2];
	&bd = t.getboard();
	cout << bd[1][1] << endl;
	cout << t.getnum() << endl;
	bd[1][1] = 3;
	cout << bd[1][1] << endl;
	cout << t.getnum() << endl;
	*/
	//Piece p = Piece(LIVE, BLACK, KING);
	//cout << p.GetCon() << endl;
	
	return 0;
}