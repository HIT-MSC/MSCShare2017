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
    person();//�޲ι��캯��
    person(char *n,char s,char *p,int w,int h);
    void change_data(char*n,char s,char *p,int w,int h);
    void walking(int k,int v);//��v�ٶ���k��
    void hearing(char *sentence);//���ַ���Сд���д
    void speek(int n);//˵������num��Ӣ�ľ���
    void print();//����˵�����
    void out(int a);//����С��1000������
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
    sing_star();//�޲ι��캯��
    sing_star(char *n,char s,char *p,int w,int h,float s1);
    void change_data(char*n,char s,char *p,int w,int h,float s1);
    void walking(int k,int v);//��v�ٶ���k��
    void hearing(char *sentence);//���ַ���Сд���д
    void speek(int n);//˵������num��Ӣ�ľ���
    void print();//���singstar������
    void out(int a);//����С��1000������
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
    void print();//���singstar������
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



//�̳з�ʽ
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
class Employee:protected Person//��Ա��
{
    char Dept[20]��//��������
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
    emp.EmployeeRegister("������",40,'m',"library",2000);
    emp.ShowEmp();
    emp.ShowMe();/*����ǰ��ĳ�˽�м̳У���˾�Υ���̳й���
                  ShowMe()���������˽�г�Ա��ֻ�г�Ա������
                  ���ʣ�������ֱ�ӷ���;����Ϊ�����̳У�
                  ���ľ�Ҳ�������ܷ��ʱ�����Ա*/
    return 0;
}


//������Ĺ��캯������������
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


//���νṹ
class Employee{/*...*/};
class Manager:public Employee{/*...*/};
class BIGBOSS:public Manager{/*...*/};

//a common one
//...
class Temporary{/*...*/};
class Secretary:public Employee{/*...*/};
class Tsec:public Temporary,public Secretary{/*...*/};
class Consultant:public Temporary,public Manager{/*...*/};




