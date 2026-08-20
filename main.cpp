#include <iostream>
#include <string>

using namespace std;
  
enum GameActors {
	Player,
	Monster,
	Goal,
	Floor,
	Wall
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
	char WorldPlane[10][10];
	GameActors WorldActorLocation[10][10];
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

//func

void PawnMove(char Input, Pawn MovePawn)
{
	switch (Input)
	{
	case 'W':
	case 'w':
		return Up;
	case 'S':
	case 's':
		return Down;
	case 'D':
	case 'd':
		return Right;
	case 'A':
	case 'a':
		return Left;
	}
	//return 0;
};

void GamePlay()
{
	char Input;
	Direction MoveDirection;
	
	//¸Ê µå·Î¿ì

	cout << "W / S / D / A : ";
	cin >> Input;
	MoveDirection = PawnMove(Input);
	


}








int main()
{
	World World;

	Pawn Monster;
	Pawn Player;

	Monster.Location


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