#pragma once

class Fraction
{
private:
	int one;
	unsigned int two;
	int three;
	unsigned int four;
public:
	int getOne() const { return one; }
	int getTwo() const { return two; }
	int getThree() const { return three; }
	int getFour() const { return four; }
	void setOne(int value) { one = value; }
	void setTwo(int value) { two = value; }
	void setThree(int value) { three = value; }
	void setFour(int value) { four = value; }
	void getSub();

	void Init(int, unsigned int,int,unsigned int);
	void Read();
	void Display();
	const char* toString();
	void Comparison();

};

