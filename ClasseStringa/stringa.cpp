#include <iostream>
#include "stringa.h"

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
	delete[] s;
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

void stringa::Flip() {
	for (int i = 0; i < lunghezza; i++) {
		if (s[i] <= 90 && s[i]>=65) { s[i] += 32; }
		else if(s[i] <= 122 && s[i] >= 97) { s[i] -= 32; }
	}
}

int stringa::Palindroma() {
	char* inizio = s;
	char* fine = s + lunghezza-1;

	while (inizio < fine) {
		while ((*inizio) == ' ') { inizio++; }
		while ((*fine) == ' ') { fine--; }
		
		if ((*inizio) != (*fine)) { return 0; }
		inizio++;	fine--;

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

void stringa::operator<<(const stringa& s2) {
	delete[] s;
	lunghezza = s2.lunghezza;

	s = new char[lunghezza + 1];

	for (int i = 0;i < lunghezza;i++) {
		s[i] = s2.s[i];
	}
	s[lunghezza] = '\0';
}