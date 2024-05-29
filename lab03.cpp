#include "Student.cpp"
int main()
{
int id;
      string name;
NodeType<Student>* head = nullptr;
NodeType<Student>* cur = nullptr;

cout << "Enter the student id (integer) and name (string): ";

  cin >> id >> name;
  while (id !=0)
  {
    Student ns(id, name);
    cur = new NodeType<Student>(ns); 
    cur->next = head;
    head = cur;
    cout<<"Enter the student id (integer) and name (string): "; 
    cin >> id >> name;
  }
  cout << "The Students Are:" << endl;
  cur = head;
  while (cur != nullptr)
  {
    cur->data.print_student();
    cur = cur->next;
  }
  cur = head;
  while (head != nullptr)
  {
    cur = head;
    head = head->next;
    delete cur;
  }
  return 0;
} 