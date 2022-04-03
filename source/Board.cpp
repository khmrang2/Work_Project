class Board
{
	
private:
	// 포인터 배열.
	int *ptrBoard[9];
	
	
public:	
	// 포인터 배열에 int형 * 9개로 이루어진 배열 9개를 9개를 할당 
	Board(){
		for(int i = 0 ; i < 9 ; i++){
			int* array = new int[9]{7};
			ptrBoard[i] = array;
		}
	}
	
	int* getBoard(int num){
		return this->ptrBoard[num];
	}
};

/*

	
	void setBoard(int *realBoard[], int size){
		for(int i = 1 ; i < 9 ; i++){
			this->ptrBoard[i] = realBoard[i];
		}
	}
*/