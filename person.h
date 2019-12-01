#ifndef __PERSON_H__
#define __PERSON_H__
#include <stdio.h>
#include <iostream>
#include <cstring>


class Person{
	public:
	Person(const std::string str);
	const std::string& getName();
	size_t getId();
	virtual void action()=0;
	protected:
	size_t m_id;
	std::string m_name;
};
inline Person::Person(const std::string str){
	static size_t s_counter=1;
	m_name=str;
	m_id=s_counter++;
}
inline size_t Person:: getId(){
	return m_id;
}
inline const std::string& Person:: getName(){
	return this->m_name;
}
#endif
