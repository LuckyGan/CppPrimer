 ///
 /// @file    ex7_5.h
 /// @author  zack(18357154046@163.com)
 /// @date    2017-06-15 15:39:00
 ///
#ifndef __CP5_EX7_15_H__
#define __CP5_EX7_15_H__
#include <string>
using std::string;

struct Person;
std::ostream& print(std::ostream&, const Person&);
std::istream& read(std::istream&, Person&);

struct Person {
	string _name;
	string _addr;
	Person() = default;
	Person(const string name,const string addr): _name(name), _addr(addr) {
	}
	Person(std::istream &in) {
		read(in, *this);
	}
	const string& get_name() const {
		return _name;
	}
	const string& get_addr() const {
		return _addr;
	}
};

std::ostream& print(std::ostream &os, const Person &person) {
	os << person._name << " " << person._addr;
	return os;
}

std::istream& read(std::istream &is, Person &person) {
	is >> person._name >> person._addr;
	if(!is)
		person = Person();
	return is;
}
#endif
