#include<iostream>
#include<string.h>
using namespace std;
class Person
{
    char *name;
    char sex;
    char pid[19];//ID
    int weight;
    int high;
public:
    person();//无参构造函数
    person(char *n,char s,char *p,int w,int h);
    void change_data(char*n,char s,char *p,int w,int h);
    void walking(int k,int v);//以v速度走k步
    void hearing(char *sentence);//将字符串小写变大写
    void speek(int n);//说出整数num的英文句子
    void print();//输出人的属性
    void out(int a);//翻译小于1000的整数
    void writing();
    ~person();
};

class sing_star
{
    char *name;
    char sex;
    char pid[19];
    int weight;
    int high;
    float salary;
public:
    sing_star();//无参构造函数
    sing_star(char *n,char s,char *p,int w,int h,float s1);
    void change_data(char*n,char s,char *p,int w,int h,float s1);
    void walking(int k,int v);//以v速度走k步
    void hearing(char *sentence);//将字符串小写变大写
    void speek(int n);//说出整数num的英文句子
    void print();//输出singstar的属性
    void out(int a);//翻译小于1000的整数
    void writing();
    void playing(char *ps);//sing a song
    ~sing_star();
};


class sing_star:public person
{
    float salary;
public:
    sing_star();
    sing_star(char *n,char s,char *p,int w,int h,float s1);
    void change_data(char*n,char s,char *p,int w,int h,float s1);
    void print();//输出singstar的属性
    void playing(char *ps);//sing a song
};

class Date
{
protected:
    int year;
    int month;
    int day;
public:
    Date(){year = 1900;month=day=1};
    Date(int yy,int mm;int dd){   init(yy,mm,dd);   };
    void(int ,int ,int);
    void print_ymd();
};
class Time
{
protected:
    int hour;
    int minute;
    int second;
public:
    Time(){hour=minute=second=0};
    Time(int h,int m,int s){init{h,m,s);};
    void init(int ,int ,int );
    void print_time();
};

class person:public Date,public Time
{
    char name[20];
    //...
public:
    //...
};



//继承方式
#include<iostream>
#include<string.h>
using namespace std;
class Person
{
protected:
    char Name[10];
    int Age;
    char Sex;
public:
    void Rogister(char *name,int age,char sex)
    {
        strcpy(Name,name);
        Age=age;
        Sex=(sex=='m'?'m':'f');
    }
    void ShowMe()
    {
        cout<<Name<<"\t"<<Sex<<"\t"<<Age<<"\t";
    }
};
class Employee:protected Person//雇员类
{
    char Dept[20]；//工作部门
    float salary;
public:
    Employee(){EmployeeRegister("XXX",0,"XXX",0);}
    void EmployeeRegister(char *name,int age,char sex,char *dept,float salary);
    void ShowEmp();
};
void Employee::EmployeeRegister(char *name,int age,char sex,char *dept,float salary)
{
    Register(name,age,sex);
    strcpy(Dept,dept);
    Salary=salary;
}
void Employee::ShowEmp()
{
    cout<<Name<<"\t"<<Sex<<"\t"<<Age<<"\t";
    cout<<Dept<<"\t"<<Salary;
}
int main()
{
    Employee emp;
    emp.EmployeeRegister("刘哈哈",40,'m',"library",2000);
    emp.ShowEmp();
    emp.ShowMe();/*若将前面改成私有继承，则此句违反继承规则，
                  ShowMe()是派生类的私有成员，只有成员函数能
                  访问，对象不能直接访问;若改为保护继承，
                  第四句也错，对象不能访问保护成员*/
    return 0;
}


//派生类的构造函数和析构函数
#include<iostream>
#include<string.h>
using namespace std;
class Person
{
    char Name[10];
    int Age;
public:
    Person(char *name,int age)
    {
        strcpy(Name,name);
        Age = age;
        cout<<"constructor of person"<<Name<<endl;
    }
    ~Person(){cout<<"deconstrutor of person"<<Name<<endl;}
};
class Employee:public Person
{
    char Dept[20];
    Person Leader;
public:
    Employee(char *name,int age,char *dept,,char *name1,int age1)
            :Person(name,age),Leader(name1,age1)
    {
        strcpy(Dept,dept);
        cout<<"constructor of Employee"<<endl;
    }
};
int main()
{
    Employee emp("John",30,"school","Jenny",24);
    return 0;
}


//类层次结构
class Employee{/*...*/};
class Manager:public Employee{/*...*/};
class BIGBOSS:public Manager{/*...*/};

//a common one
//...
class Temporary{/*...*/};
class Secretary:public Employee{/*...*/};
class Tsec:public Temporary,public Secretary{/*...*/};
class Consultant:public Temporary,public Manager{/*...*/};




