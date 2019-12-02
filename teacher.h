#ifndef __TEACHER_H__
#define __TEACHER_H__
#include "person.h"
#include <cstdlib>
class Teacher:public Person{
	public:
	Teacher(const std::string& less,const std::string& name):Person(name){m_lesson=less;};
	/*~Teacher();*/
	void action();
	void print();
	private:
	std::string m_lesson;
};
inline void Teacher::action(){
	
	std::cout<< m_lesson <<std::endl;
}
inline void Teacher::print(){
	std::cout<<"name_teacher: "<< m_name<<" teacher_lesson: "<< m_lesson<< std::endl;
}
/*inline Teacher::~Teacher()
{
	free(this);
}*/
#endif
