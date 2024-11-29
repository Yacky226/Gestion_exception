#pragma once
class Traitement
{
private:
	int a, b;
	int intervalpos;
	int intervalneg;
public:
	Traitement(int a, int b, int int1, int int2);
	int add()const;
	int mul()const;
	bool bonneinterval()const;
	int divide()const;
};

