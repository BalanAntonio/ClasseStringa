

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
		stringa(const char* s);
		~stringa();

		void Stampa();
		void Reverse();
		int  Palindroma();
		
		stringa operator+(stringa s2);
		stringa operator==(stringa s2);
};


stringa::stringa() {
	lunghezza = 0;
	s = new char[1];
}

stringa::stringa(const char* s) {
	int i = 0;
	
	while (s[i] != '\0') {
		lunghezza++;
	}
}