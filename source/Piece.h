#pragma once

class Piece
{
	
private:
	int live; //  0 죽음, 1 살음
	int color; // 0 블랙, 1 화이트
	int con; // 0 킹 1 퀸 2 비숍 3 나이트 4 룩 5 폰
	
public:
	Piece(int, int, int);
	
	void SetPiece(int, int, int);
	
	int GetLive(){return live;}
	int GetColor(){return color;}
	int GetCon(){return con;}

};
/*

헤더파일 : 선언파일
cpp파일 : 정의파일

체스 말이 기본적으로 가져야만 하는 성질
1. 생사여부
2. 흑 / 백
3. 해당 칸으로 움직 일 수 있는지 -> 삭제
4. 어떤 말인지 : 폰 룩 나이트 비숍 퀸 킹


*/
