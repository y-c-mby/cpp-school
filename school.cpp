#include "school.h"

size_t School::getNumOfStudent() const{
	return m_StudentsList.size();
}
size_t School::getNumOfTeachers() const{
	return m_TeachersList.size();
}
void School::pairTeacherToStudent(size_t ratio){

	unsigned int i;
	m_class.clear();
	std::vector<Student*>::iterator jt=m_StudentsList.begin();
	for(std::vector<Teacher*>::iterator it=m_TeachersList.begin(); it!=m_TeachersList.end();it++)
	{
		for(i=0;i<ratio;i++)
		{
			
			
			if(jt==(m_StudentsList.end()-1))
			{
				
				return;
			}
			
			m_class[(**it).getName()].push_back(*jt);
			jt++;
				
		}
	}
	
	
}
std::list<Student*> School:: getTeacherStudents(const std::string& teacherName) 
{
	for(std::map<std::string ,std::list<Student*> >::iterator it=m_class.begin();it!=m_class.end();it++)
	{
		if(it->first==teacherName)
		{
			return m_class[it->first];
		}
	}
	std::list<Student*> empty_list;
	return empty_list;
}
void School::print()
{
	unsigned int i;
	std::cout<<"the students of school:"<<std::endl;
	for(i=0;i<getNumOfStudent();i++)
	{
		m_StudentsList[i]->print();
	}
	for(i=0;i<getNumOfTeachers();i++)
	{
		m_TeachersList[i]->print();
	}

}
void School::printMap()
{
	
	for(std::map<std::string ,std::list<Student*> >::iterator it=m_class.begin();it!=m_class.end();it++)
	{
		std::cout<<"teacher of class: "<< it->first <<std::endl;
		std::cout<<"have this students: "<<std::endl;
		for(std::list<Student*>::iterator st=((it->second).begin());st!=((it->second).end());st++)
		{
			std::cout<< (**st).getName() <<std::endl;
		}
	}
}
