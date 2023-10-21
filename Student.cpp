#include "Student.h"
#include<iostream>
#include<string>
#include "Student.h"
using namespace std;

Student::Student(string name,int stdid)
{
	this->name=name;
	this->stdid=stdid;

	
}

Student::~Student()
{
}

 
     void Student::calTotal(int marks1,int marks2,int marks3){
      	
      	 total=marks1+marks2+marks3;
	  }
	  
	  void Student::percentage1(){
	  	percentage=total/3;
	  }
	  
	  int getstdid(){
         return stdid;	  	
	  }
	  
	  int getname(){
	  	return name;
	  }
	  
	  void setid(int id){
	  	stdid=id;
	  }
	  void setname(string nm){
	  	name=nm
	  }
	  
	  void display(){
	  	cout<<stdid<<name<<total<<percentage;
	  }
