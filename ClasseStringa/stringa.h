#pragma once

class classepadre {
protected:
	int lunghezza;
public:
	virtual int getLunghezza() = 0;
};

class stringa : public classepadre {
private:
	char* s;

public:
	stringa();
	stringa(const char* s2);
	~stringa();

	void Stampa();
	void Reverse();
	void Flip();
	int  Palindroma();
	virtual int getLunghezza();

	stringa operator+(stringa s2);
	int     operator==(stringa s2);
	void    operator<<(const stringa& s2);
};

