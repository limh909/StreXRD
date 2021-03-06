/* Copyright 2017 Eric Quackenbush */

#define _GLIBCXX_USE_CXX11_ABI 0
#include <vector>
#include <iostream>

typedef unsigned char BYTE;
typedef short int WORD;

class ReadMar {
	std::vector<BYTE> fileBuf;
	std::streampos fileSize;
	std::vector<std::string> list;
	std::vector<int> byte_to_int(std::vector<BYTE>);
	void byte_swap(std::vector<BYTE>);
	void get_pck(int, BYTE*, WORD*);
	static void unpack_word(BYTE*, int, int, WORD*);
public:
	ReadMar(std::string);
	int get_file_size();
	void get_header();
	void print_header(std::string);
	std::vector<int> read_file();
};