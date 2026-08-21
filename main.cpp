#include <iostream>
#include <string>

using namespace std;

enum GameActors {
	EFloor = 0,
	EWall = 1,
	EPlayer,
	EMonster,
	EGoal
};

enum Direction {
	Up = 1,
	Down,
	Right,
	Left
};

class Vector2D
{
public:
	int X;
	int Y;
};

class World
{
public:
	GameActors Actors;
	char Floor = ' ';
	char Wall = '*';
	char Player = 'P';
	char Monster = 'M';
	char Goal = 'G';
	char PlaneMap[10][10] = {
	{ 1,1,1,1,1,1,1,1,1,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,1,1,1,1,1,1,1,1,1 } };
};

class Pawn
{
public:
	Vector2D Location;

	Vector2D Move(Direction Direction)
	{
		switch (Direction)
		{
		case Up:
			Location.X -= 1;
			break;
		case Down:
			Location.X += 1;
			break;
		case Right:
			Location.Y += 1;
			break;
		case Left:
			Location.Y -= 1;
			break;
		}
	}
};

class Player : public Pawn
{
public:
	bool bIsGoal;
	bool bIsDead;
};

class Monster : public Pawn
{

};

//func

void PawnMove(char Input, Pawn* MovePawn)
{
	//옮길 값
	Direction MoveDirection;
	switch (Input)
	{
	case 'W':
	case 'w':
		MoveDirection = Up;
		break;
	case 'S':
	case 's':
		MoveDirection = Down;
		break;
	case 'D':
	case 'd':
		MoveDirection = Right;
		break;
	case 'A':
	case 'a':
		MoveDirection = Left;
		break;
	}

	MovePawn->Location = MovePawn->Move(MoveDirection);
};

void MapDraw(World* PWorld)
{
	for (int YCol = 0;
		YCol < (sizeof(PWorld->PlaneMap[0]) / sizeof(char));
		YCol++)
	{
		for (int XRow = 0;
			XRow = (sizeof(PWorld->PlaneMap) / sizeof(PWorld->PlaneMap[0]));
			XRow++)
		{
			
		}
		cout << endl;
	}

}

void GamePlay(World* PWorld, )
{
	char Input;

	//맵 드로우

	cout << "W / S / D / A : ";
	cin >> Input;

	


}

int main()
{
	//setting
	World* PWorld = new World;

	Monster* PMonster = new Monster;
	Player* PPlayer = new Player;

	PPlayer->Location.X= 1;
	PPlayer->Location.Y = 1;
	PMonster->Location.X = 6;
	PMonster->Location.Y = 8;





	return 0;
}




//class Player
//{
//public:
//	Vector2D Location;
//	
//	Vector2D Move(Direction Direction)
//	{
//		switch (Direction) 
//		{
//			case Up:
//				Location.X -= 1;
//				break;
//			case Down:
//				Location.X += 1;
//				break;
//			case Right:
//				Location.Y += 1;
//				break;
//			case Left:
//				Location.Y -= 1;
//				break;
//		}
//	}
//};

//class Floor
//{
//public:
//	char Shape = " ";
//};
//
//class Wall
//{
//public:
//	char Shape = "*";
//};

//Direction PawnMove(char Input)
//{
//	switch (Input)
//	{
//	case 'W':
//	case 'w':
//		return Up;
//	case 'S':
//	case 's':
//		return Down;
//	case 'D':
//	case 'd':
//		return Right;
//	case 'A':
//	case 'a':
//		return Left;
//	}
//	//return 0;
//};