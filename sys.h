#pragma once
#include<iostream>
class Triangle {
public:
	Triangle() {}
	Triangle(int a, int b, int c, int A, int B, int C);
protected:

	int a, b, c;
	int A, B, C;
};
class Quadrate {
public:
	Quadrate() {}
	Quadrate(int a, int b, int c, int d, int A, int B, int C, int D);
protected:
	int a, b, c, d;
	int A, B, C, D;

};
class Prtr :public Triangle {
public:
	//int get_c() { return C; }
	Prtr(int a, int b, int c, int A, int B) :Triangle(a, b, c, A, B, C = 90)
	{
	}
	//private:
		//int C = 90;
};
class Rbtr :public Triangle {
public:


	Rbtr(int a, int b, int A, int B) :Triangle(a, b, c = a, A, B, C = A)
	{
	}

};

class Rtr :public Triangle {
public:


	Rtr(int a) :Triangle(a, a, a, 60, 60, 60)
	{
	}

};
class Prmu :public Quadrate {
public:
	Prmu(int a, int b) :Quadrate(a, b, a, b, 90, 90, 90, 90) {

	}
};
class Kv :public Quadrate {
public:
	Kv(int a) :Quadrate(a, a, a, a, 90, 90, 90, 90) {}
};
class Par :public Quadrate {
public:
	Par(int a, int b, int A, int B) :Quadrate(a, b, a, b, A, B, A, B) {}
};
class Rm :public Quadrate {
public:
	Rm(int a, int A, int B) :Quadrate(a, a, a, a, A, B, A, B) {}
};