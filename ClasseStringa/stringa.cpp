#include <iostream>

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
		int  Palindroma();
		virtual int getLunghezza();
		
		stringa operator+(stringa s2);
		int operator==(stringa s2);
};


stringa::stringa() {
	lunghezza = 0;
	s = new char[1];
	s[0] = '\0';
}

stringa::stringa(const char* s2) {
	
	lunghezza = 0;
	while (s2[lunghezza] != '\0') {
		lunghezza++;
	}
	s = new char[lunghezza + 1];

	for (int i = 0;i < lunghezza;i++) {
		s[i] = s2[i];
	}
	s[lunghezza] = '\0';

}

stringa::~stringa() {
	delete s;
}

void stringa::Stampa() {
	std::cout << s;
}

void stringa::Reverse() {
	for (int i = 0; i < lunghezza/2; i++) {
		char temp = s[i];
		s[i] = s[lunghezza - i - 1];
		s[lunghezza - i - 1] = temp;
	}
}

int stringa::Palindroma() {
	for (int i = 0; i < lunghezza / 2; i++) {
		if (!(s[i] == s[lunghezza - i - 1])) {
			return 0;
		}
	}
	return 1;
}

int stringa::getLunghezza() { return lunghezza; }

stringa stringa::operator+(stringa s2) {
	char* nuovo = new char[lunghezza + s2.lunghezza];
	stringa stringaNuova = nuovo;

	return stringaNuova;
}

int stringa::operator==(stringa s2) {
	if (lunghezza != s2.getLunghezza()) { return 0; }

	for (int i = 0; i < lunghezza; i++) {
		if (s2.s[i] != s[i]) { return 0; }
	}
	return 1;
}