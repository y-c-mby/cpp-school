#include "t_teachr.h"
#include "teacher.h"
#include "student.h"
void test_create()
{
	Teacher t("math","ruti");
	Student s('5',"yaeli");
	t.print();
	s.print();
	s.action();
	t.action();
}
