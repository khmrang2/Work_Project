#pragma once
#define BLACK 0
#define WHITE 6
#define LIVE 1
#define DEATH 0
#define KING 11111
#define QUEEN 11112
#define BISHOP 11113
#define KNIGHT 11114
#define ROOK 11115
#define PAWN 11116


class Piece
{

	struct Status{ // 기본적인 생사, 색깔, 직업 stat
		int live;
		int color;
		int con;
	};
	
	struct Locate{ // 위치 정보
		int x;
		int y;
	};

	
private:
	Status stat{0,0,0};
	Locate locate;
	
public:
	Piece(int, int, int);
	
	void SetStat(int, int, int);
	void SetLocate(int, int);
	
	int GetLive(){return this->stat.live;} // 살았는지 죽었는지 반환자
	int GetColor(){return this->stat.color;} // 흑 or 백 반환자
	int GetCon(){return this->stat.con;} // 직업(폰,.. 등) 반환자
	int GetX(){return this->locate.x;} // 위치 반환자
	int GetY(){return this->locate.y;} // 위치 반환자
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
