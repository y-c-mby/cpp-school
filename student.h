#ifndef __STUDENT_H__
#define __STUDENT_H__
#include "person.h"
#include <cstdlib>
class Student:public Person{
	public:
	Student(unsigned char g,const std::string& name):Person(name)
	{m_grade=g;};
	/*~Student();*/
	void action();
	void print();
	private:
	unsigned char m_grade;
};

inline void Student::action(){
	std::cout<< m_grade <<std::endl;
}
inline void Student::print(){
	std::cout<<"name_student: "<< m_name<<" student id "<<m_id<<" student_grade: "<< m_grade<< std::endl;
}
/*inline Student::~Student()
{
	free(this);
}*/
#endif
