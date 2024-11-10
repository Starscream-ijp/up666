#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <algorithm> 
using namespace std;
class person {
public:                                                   //定义Person类 
    string name;                                          //姓名 
    int age;                                              //年龄 

    person(string n, int a) : name(n), age(a) {}

    void introduce() {
        cout << "Name: " << name << ", Age: " << age << endl; //用introduce输出 
    }
};
class teacher_name : public person {                          //定义Teacher类，沿用Person类 
public:
    string subject;                                      //科目 

    teacher_name(string n, int a, string s) : person(n, a), subject(s) {}

    void introduce() {
        cout << "Name: " << name << ", Age: " << age << ", Subject: " << subject << endl;//输出姓名、年龄、科目 
    }
};
class Student : public person {                           //定义Student类。沿用Person类 
public:
    string grade;                                         //年级 

    Student(string n, int a, string g) : person(n, a), grade(g) {}

    void introduce() {                                    //定义输出
        cout << "Name: " << name << ", Age: " << age << ", Grade: " << grade << endl;
    }
};
class Course{
	private:
		std::string course_name;                         //课程名称
		teacher_name* teacher;                                //授课老师
		std::vector<Student*>students;                   //上课学生
		
	public:
		Course(std::string name,teacher_name* t):course_name(name),teacher(t){}
		
    void add_student(Student* student){                   //添加学生
    	students.push_back(student);
	}	
		
	void remove_student(Student* student){                //删除学生
		students.erase(std::remove(students.begin(),students.end(),student),students.end());
	}	
	void show_course_info() const {                       //输出课程信息
	std::cout<<"subject:"<<course_name<<std::endl;   
	std::cout<<"teacher:";
	teacher->introduce();                                 //指向授课教师
	std::cout<<"the students who take in this class:"<<std::endl; 
	for(size_t i=0 ;i<students.size();++i)                //输出上课老师
	students[i]->introduce();
	}
};
