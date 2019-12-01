#ifndef __TEACHER_H__
#define __TEACHER_H__
#include "person.h"
class Teacher:public Person{
	public:
	Teacher(const std::string& less,const std::string& name):Person(name){m_lesson=less;};
	void action();
	void print();
	private:
	std::string m_lesson;
};
inline void Teacher::action(){
	
	std::cout<<m_lesson<<std::endl;
}
inline void Teacher::print(){
	std::cout<<"name_teacher: "<< m_name<<" teacher_lesson: "<< m_lesson<< std::endl;
}
#endif
