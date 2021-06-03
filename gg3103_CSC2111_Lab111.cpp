#include <iostream>
#include <string>

class employeeType
{
   private:
   string name;
   string department;
   int age;
   double pay;

   public:
   employeeType(string name = "", string department = "", int age = 0, int pay = 0)
   {
       // Using pointer is better for objects to copy the data members used this pointer
       this -> name = name;
       this -> department = department;
       this -> age = age;
       this -> pay = pay;
   }
   void setData(string n = "", string d = "", int a = 0, double p = 0)
   {
       name = n;
       department = d;
       age = a;
       pay = p;
   }

   void setName(string name)
   {
       this -> name = name;
   }

   string getName() const
   {
       return this -> name;
   }

   void setDepartment(string department)
   {
       this -> department = department;
   }

   string getDepartment() const
   {
       return this -> department;
   }

   void setAge(int a)
   {
       age = a;
   }

   int getAge() const
   {
       return this -> age;
   }
   void setPay(double pay)
   {
       this -> pay = pay;
   }
   double getPay() const
   {
       return pay;
   }
};

