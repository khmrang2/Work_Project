#pragma once

class Board
{
	
private:
	// 포인터 배열.
	int *ptrBoard[9];
	
	for(int i = 1 ; i < 9 ; i++){
		int[9] array = {0}; // 주소만 새로운 배열을 계속 할당
		ptrBoard[i] = array; 
	}
	
	int* getBoard(){
		return this->*ptrBoard;
	}
	
	void setBoard(int *realBoard[], int size){
		for(int i = 1 ; i < 9 ; i++){
			this->ptrBoard[i] = realBoard[i];
		}
	}
};