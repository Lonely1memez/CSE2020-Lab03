#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>

using namespace std;

class Student
{
public:
  // Default constructor
  Student()
  {

  }

  // Creates a student with the specified id and name. 
  Student(int idvalue, const string& namevalue)
  {
    set_id(idvalue);
    set_name(namevalue);
  }

  // Returns the student name.
  string get_name() const
  {
    return name;
  }

  // Returns the student id.
  int get_id () const
  {
    return id;
  }

  // Sets the student name.
  void set_name(const string& namevalue)
  {
    name = namevalue;
  }

  // Sets the student id.
  void set_id(int idvalue)
  {
    id = idvalue;
  }

  // Prints the student id and name.
  void print_student() const
  {
    cout << id << " " << name << endl;
  }

private:
  // student name
  string name;

  // student id
  int id;
};


template <typename T>
struct NodeType
{
   T data;
   NodeType* next;

   NodeType(): data(), next(nullptr)
   {}

   NodeType(const T& s): data(s), next(nullptr)
   {}

};

#endif