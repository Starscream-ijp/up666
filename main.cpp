#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <algorithm>
#include <type.h>
using namespace std;
int main() {
	//实例化
    //老师
    teacher_name t1("xiang", 30, "Math");
    teacher_name t2("liu", 35, "China");
    //输出老师 
	t1.introduce();
    t2.introduce();
	//学生
    Student s1("lihua", 18, "Grade 1");
    Student s2("xiaoming", 18, "Grade 1");
    //输出学生
	s1.introduce();
    s2.introduce();
    //课程
    Course c1("math",&t1);
    Course c2("china",&t2);
    //添加学生
	c1.add_student(&s1) ;
	c1.add_student(&s2) ;
	c2.add_student(&s1) ;
    c2.add_student(&s2) ;
    //输出课程信息 
    c1.show_course_info() ;
    c2.show_course_info() ;
    //删除学生
	c1.remove_student(&s1);
	c2.remove_student(&s2);
	//显示课程信息
	c1.show_course_info() ;
    c2.show_course_info() ;
    return 0;}