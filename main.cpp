
#include "school.h"
int main(){
	int grade;
	int i;
	std::string name;
	std::string lesson;
	std::vector<Student> s_vec;
	std::vector<Teacher> t_vec;
	School by;
	for ( i=0;i<8;i++)
	{
		std::cin>>grade;
		std::cin>>name;
		Student s(grade,name);
		s.print();
		s_vec.push_back(s);
	}
	for ( i=0;i<3;i++)
	{
		std::cin>>lesson;
		std::cin>>name;
		Teacher t(lesson,name);
		t.print();
		t_vec.push_back(t);
	}
	for(i=0;i<=s_vec.size();i++)
	{
		by.addStudent(&s_vec[i])	;
	}
	for(i=0;i<=t_vec.size();i++)
	{
		by.addTeacher(&t_vec[i]);
	}
	by.pairTeacherToStudent(3);
	by.printMap();
	
	return 0;
}
