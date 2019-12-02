#ifndef __SCHOOL_H__
#define __SCHOOL_H__
#include "student.h"
#include "teacher.h"
#include <vector>
#include <map>
#include <list>
class School{
	std::vector<Student*> m_StudentsList;
	std::vector<Teacher*> m_TeachersList;
	std::map<std::string ,std::list<Student*> >m_class;
	
	public:
	void addStudent(Student* student);
	void addTeacher(Teacher* teacher);
	size_t getNumOfStudent() const;
	size_t getNumOfTeachers() const;
	void print();
	void printMap();
	void pairTeacherToStudent(size_t ratio);
	std::list<Student*> getTeacherStudents(const std::string& teacherName)  ;
};
inline void School::addStudent(Student* student){
	m_StudentsList.push_back(student);
}
inline void School::addTeacher(Teacher* teacher){
	m_TeachersList.push_back(teacher);
}


#endif
