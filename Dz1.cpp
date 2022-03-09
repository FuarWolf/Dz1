#include <iostream>
#include <string>
using namespace std;
class Rect {
private:
	int Width;
	int Height;
public:
	string Name;
public:
	Rect() { cout << "Create rectangle" <<endl; };
	Rect(int s) { Width = s; };
	Rect(int s, int u) { Width = s; Height = u; };
	Rect(int s, int u, string k) { Width = s; Height = u; Name = k; };
	void setWidth(int s) { Width = s; };
	void setHeight(int u) { Height = u; };
	int getWidth() { return Width; };
	int getHeight() { return Height; };
	void info() { cout << endl << "Длина прямоугольника  " << " " << getWidth() << endl << "Высота прямоугольника  " << getHeight() << endl; }
};

void RectS(int a, int b) {
	int Otvet = a * b;
	cout << "\n" << "Площадь прямоугольника " << Otvet << endl;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "Выберите длину прямоугольника"<<endl;
	cin >> a;
	cout << "Выберите высоту прямоугольника"<<endl;
	cin >> b;

	Rect x;
	x.setWidth(a);
	x.setHeight(b);
	x.info();
	RectS(a, b);

	return 0;
}
