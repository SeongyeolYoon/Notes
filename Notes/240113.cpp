#include <iostream>
#include <vector>
#include <utility>
#include <memory>
#include <algorithm>
using namespace std;
////
//struct Player {
//	Player() = default;
//	~Player() = default;
//
//	Player(const Player& other)
//	{
//		cout << "복사 생성!\n";
//	}
//	// Player(Player&& player) noexcept { }
//};
//
////void Func(shared_ptr<Player>& s)
////{
////	int a = 0;
////}
//
//void Func(Player&& s)
//{
//	int a = 0;
//}
//
//template<typename T>
//void Swap(T& a, T& b)
//{
//	// a,b는 좌측값 
//
//	T temp = std::move(a);	// temp라는 임시 객체를 a로 부터 이동 생성
//	a = std::move(b);		// 이동 대입
//	b = std::move(temp);	// 이동 대입
//
//	// move하는 시점에 이동생성이 되는것이 아님.
//	// 이동 생성자나 이동 대입 연산자를 호출할 때 수행되 는것!
//	// 만약, 이동 생성자나 이동 대입 연산자를 만들지 않았으면 그냥 일반적인 복사 생성자나 대입 연산자가 오버로딩된다.
//}
//
//int main()
//{
//	// shared_ptr<Player> p = make_shared<Player>();
//	Player p;
//
//	 Func(move(p));
//
//	// int a = 0;
//	int a = 10;
//	int b = 20;
//	Swap(a, b);
//
//	//cout << a << " " << b << "\n";
//}

struct Player {

};

vector<shared_ptr<Player>> vecPlayers;


void Func_1(shared_ptr<Player>& p)
{
	vecPlayers.emplace_back(move(p));
}

void Func_2(shared_ptr<Player>&& p)
{
	vecPlayers.emplace_back(move(p));
}

int main()
{
	shared_ptr<Player> p = make_shared<Player>();
	Func_1(p);
	Func_2(std::move(p));
}