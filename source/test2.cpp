class test{
	

public:
	int board[2][2] = {
		{0,1},
		{2,3},
	};

	int (*address_board)[2] = board;

	int* getboard(){
		return &board[0][0];
	}

	int getnum(){
		return board[1][1];
	}

	
};