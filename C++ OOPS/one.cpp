#include<iostream>
#include<string>
using namespace std;

//?encaptulation--not aceess the attributes/members directly
//?abstruction--is hiding the implimentation of logic
//?inheritance--inherits from another class
//?polymorphism


class AbstructEmployee{
    //!-------its a contract-----------

   virtual void ask_for_promotion()=0; //!pure vertual fn..only one rule which class contracts it must implement it..
};

//class is user defined datatype
 class Employee: AbstructEmployee{
    //encaptulation
    private:
    //this are attributes

    string Company;

    int Age;

    protected:
    string Name;//

    //by default private
    public:
    void setName(string name){
        Name=name;//encaptulated //not directly access private data
    }
    string getName(){
        return Name;
    }

    void setCompany(string company){
        Company= company;
    }
    string getCompany(){
        return Company;
    }

    void setAge(int age){
        if(age>=18){//some validation
            Age= age;
        }
        
    }
    int getAge(){
        return Age;
    }



    //methods
    void introduce_yourself(){

        cout<<"Name - "<<Name<<endl;
        cout<<"Company - "<<Company<<endl;
        cout<<"Age - "<<Age<<endl<<endl;

    }

   //constructor
    Employee(string name,string company,int age){
        Name=name;
        Company=company;
        Age=age;
    }

    //!override abstruct class --must implement
    void ask_for_promotion(){
        if(Age>=30){
            cout<<Name<<" got promoted"<<endl;
        }
        else {
            cout<<Name<<" no sorry you not get promoted now..."<<endl;
        }
    }

//make it virtual polymorphism
    virtual void work(){
        cout<<Name<<" is checking email,task backlog,performing tasks...";
    }
 };

//!--Inheritance--

//by default Employee private
class Developer:public Employee{
    //developer became child class
    public:
    string fevPogrammingLanguage;
    //constructor
     Developer(string name,string company,int age,string fev_pogramming_language)
     :Employee(name,company,age)
     {
        
        //we should onl about new mwmber
    fevPogrammingLanguage=fev_pogramming_language;

     }

     void fixedBug(){
        cout<<Name<<" fixed bug using "<<fevPogrammingLanguage<<endl;
     }
    
  void work(){
        cout<<Name<<" is writing "<<fevPogrammingLanguage<<" code "<<endl;;
    }
     
};

//another child class inherites from Employee class
class Teacher:public Employee{
    public:
    string Subject;
    void prepareLessions(){
        cout<<Name<<" is preparing "<<Subject<<" lession"<<endl;
    }

    //creating constructor
    Teacher(string name,string company,int age,string subject)
    :Employee(name,company,age){
        Subject=subject;
    }

    // method name is same but override --polymorphism
    void work(){
        cout<<Name<<" is studying "<<Subject<<" carefully "<<endl;;
    }

};



int main(){

    //object name employee1 of type employee
   Employee employee1 =Employee("sumit","tcs",23);//envocking constructor

//    employee1.Name="sumit";
//    employee1.Company="tcs";
//    employee1.Age=23;

    employee1.introduce_yourself();//invoke function/method

    //another object
    Employee employee2=Employee("Suman Bera","Canon",30);

    // employee2.Age=30;
    // employee2.Company="canon";
    // employee2.Name="suman Bera";

    employee2.introduce_yourself();//invoke method
    
 
    //encaptulation
    employee1.setAge(15);//change value 
    cout<<employee1.getName()<<" is "<<employee1.getAge()<<" years old"<<endl;

    employee1.ask_for_promotion();
    employee2.ask_for_promotion();

    //create new developer type obj and invocking constructor
    Developer d1=Developer("john","amazon",26,"C++");
    
    d1.fixedBug();
    d1.ask_for_promotion();
    d1.work();

    //another class obj
    Teacher t1=Teacher("Thapa","GHS",40,"History");
    t1.prepareLessions();
    t1.setAge(19);//due to public acess all public methods
    t1.ask_for_promotion();
    t1.work();
    

    Employee *e1=&d1;//pointer holds reference of d1
    Employee *e2=&t1;

    e1->work();
    e2->work();

    return 0;
}