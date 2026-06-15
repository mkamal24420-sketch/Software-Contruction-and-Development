#include <iostream>
#include <string>
using namespace std;

// Base Class
class Person
{
protected:
    string name;
    int age;

public:
    // Constructor
    Person(string n, int a)
    {
        name = n;
        age = a;
    }
};

// Derived Class Student
class Student : public Person
{
private:
    int roll;
    float gpa;

public:
    // Constructor
    Student(string n, int a, int r, float g)
        : Person(n, a)
    {
        roll = r;
        gpa = g;
    }

    // Display Function
    void display()
    {
        cout << "\nStudent Information" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << roll << endl;
        cout << "GPA: " << gpa << endl;
    }
};

// Derived Class Teacher
class Teacher : public Person
{
private:
    string subject;
    double salary;

public:
    Teacher(string n, int a, string sub, double sal)
        : Person(n, a)
    {
        subject = sub;
        salary = sal;
    }

    void display()
    {
        cout << "\nTeacher Information" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    // Task 4: Two Student Objects
    Student s1("Ali", 20, 1, 3.4);
    Student s2("Ahmed", 21, 2, 3.8);

    s1.display();
    s2.display();

    // Task 3: Teacher Object
    Teacher t1("Sara", 35, "Computer Science", 80000);

    t1.display();

    return 0;
}