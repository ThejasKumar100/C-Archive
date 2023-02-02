#ifndef PERSON_H
#define PERSON_H

#include<iostream>
#include<cstring>
#include<string>
using namespace std;

class Person {
public:
  const static int ARRAY_SIZE_1 = 64;
  const static int ARRAY_SIZE_2 = 128;

  Person(const string& name = "John Doe", int age = 1) {
    strcpy(this->name, name.c_str());
    this->age = age;
    strcpy(this->spouseName, "");
    strcpy(this->profession, "");
    salary = 0;
  }

    
  void setName(const string& name) {
    strcpy(this->name, name.c_str());
  }

  string getName() const {
    string strObj = name;
    return strObj;
  }

  
  void setAge(int age) {
    this->age = age;
  }

  int getAge() const {
    return age;
  }
    
  void setAddress(const string& address) {
    strcpy(this->address, address.c_str());
  }
     
  string getAddress() const {
    string strObj = address;
    return strObj;
  }
    
  void setProfession(const string& profession) {
    strcpy(this->profession, profession.c_str());
  }
     
  string getProfession() const {
    string strObj = profession;
    return profession;
  }
  
  void setSalary(int salary) {
    this->salary = salary;
  }
 
  int getSalary() const {
    return salary;
  }
    
  void setSpouseName(const string& sName) {
    strcpy(this->spouseName, sName.c_str());
  }
     
  string getSpouseName() const {
    string strObj = spouseName;
    return strObj;
  }

  friend ostream& operator<< (ostream& ostr, const Person& obj) {
    ostr << "Name: " << obj.getName() << "\n";
    ostr << "Age: " << obj.getAge() << "\n";
    ostr << "Address: " << obj.getAddress() << "\n";
    ostr << "Profession: " << obj.getProfession() << "\n";
    ostr << "Salary: " << obj.getSalary() << "\n";
    ostr << "Spouse Name: " << obj.getSpouseName() << "\n";
    return ostr;
   }

protected:
  char name[ARRAY_SIZE_1];
  unsigned int age;
  char address[ARRAY_SIZE_2];
  char profession[ARRAY_SIZE_1];
  int salary;
  char spouseName[ARRAY_SIZE_1];
};


#endif //PERSON_H