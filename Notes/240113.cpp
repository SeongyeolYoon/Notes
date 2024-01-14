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
//		cout << "���� ����!\n";
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
//	// a,b�� ������ 
//
//	T temp = std::move(a);	// temp��� �ӽ� ��ü�� a�� ���� �̵� ����
//	a = std::move(b);		// �̵� ����
//	b = std::move(temp);	// �̵� ����
//
//	// move�ϴ� ������ �̵������� �Ǵ°��� �ƴ�.
//	// �̵� �����ڳ� �̵� ���� �����ڸ� ȣ���� �� ����� �°�!
//	// ����, �̵� �����ڳ� �̵� ���� �����ڸ� ������ �ʾ����� �׳� �Ϲ����� ���� �����ڳ� ���� �����ڰ� �����ε��ȴ�.
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