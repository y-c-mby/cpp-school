
#include "school.h"
#include "t_teachr.h"
int main(){
	unsigned char grade;
	unsigned int i;
	std::string name;
	std::string lesson;
	std::vector<Student> s_vec;
	std::vector<Teacher> t_vec;
	School by;
	test_create();
	
	/*insert 8 students*/
	for ( i=0;i<8;i++)
	{
		std::cin>>grade;
		std::cin>>name;
		Student s(grade,name);
		s.print();
		s_vec.push_back(s);
	}
	/*insert 3 teachers*/
	for ( i=0;i<3;i++)
	{
		std::cin>>lesson;
		std::cin>>name;
		Teacher t(lesson,name);
		t.print();
		t_vec.push_back(t);
	}
	/*insert student to school*/
	for(i=0;i<=s_vec.size();i++)
	{
		by.addStudent(&s_vec[i])	;
	}
	/*insert teachers to school*/
	for(i=0;i<=t_vec.size();i++)
	{
		by.addTeacher(&t_vec[i]);
	}
	by.pairTeacherToStudent(3);
	by.printMap();
	/*print map*/
	for(i=0;i<t_vec.size();i++)
	{
		std::cout <<"freg"<<std::endl;
		std::list<Student*> l1;
		l1=by.getTeacherStudents(t_vec[i].getName());
		std::cout<<"the students of the the teacher "<< t_vec[i].getName() << std::endl;
		for(std::list<Student*>::iterator it=l1.begin();it!=l1.end();it++)
		{
			std::cout<< (**it).getName() <<std::endl;
		}
	}
	for (i=0;i<s_vec.size();i++)
	{
		s_vec[i].action();
	}
	for (i=0;i<t_vec.size();i++)
	{
		t_vec[i].action();
	}
	

	
	return 0;
}
