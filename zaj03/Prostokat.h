#ifndef PROSTOKAT_H
#define PROSTOKAT_H

class Prostokat
{
public:
	Prostokat();

	void rysuj();
	void setKolor(int nr, int ng, int nb);
	void przesun(float dx, float dy);
private:
	float px, py;
	float pw, ph;
	int r, g, b;
};

#endif // PROSTOKAT_H