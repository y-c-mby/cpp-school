#ifndef __STUDENT_H__
#define __STUDENT_H__
#include "person.h"
class Student:public Person{
	public:
	Student(unsigned char g,const std::string& name):Person(name)
	{m_grade=g;};
	void action();
	void print();
	private:
	unsigned char m_grade;
};
/*inline Student::Student(unsigned char g){
	m_grade=grade;
}*/
inline void Student::action(){
	std::cout<<m_grade<<std::endl;
}
inline void Student::print(){
	std::cout<<"name_student: "<< m_name<<" student_grade: "<< m_grade<< std::endl;
}
#endif
