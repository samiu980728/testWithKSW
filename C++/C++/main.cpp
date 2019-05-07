//
//  main.cpp
//  C++
//
//  Created by 萨缪 on 2019/3/25.
//  Copyright © 2019年 萨缪. All rights reserved.
//


//#include <iostream>
//#include <string>
//using namespace std;
//// 你提交的代码将嵌入到这里
//const int SIZE = 100;
//template <typename T>class Queue
//{
//    T q[SIZE];
//    int front,rear;
//public:
//    Queue()
//    {
//        front = rear = 0;
//    }
//    void put(T i);
//    T get();
//};
//
//template <class T>void Queue<T>::put(T i)
//{
//    if(front==SIZE) exit(0);
//    rear++;
//    q[rear]=i;
//}
////在队头取元素
//template <class T>T Queue<T>::get()
//{
//    if(rear==front) return 0;
//    front++;
//    return q[front];
//}
//
//int main()
//{
//    Queue<int> a; // 创建一个整数队列
//    int m,n;
//    cin>>m>>n;
//    a.put(m);
//    a.put(n);
//    cout << a.get() << " ";
//    cout << a.get() << endl;
//
//    Queue<double> d; // 创建一个双精度浮点数队列
//    double x,y;
//    cin>>x>>y;
//    d.put(x);
//    d.put(y);
//    cout << d.get() << " ";
//    cout << d.get() << endl;
//
//    Queue<string> qs;// 创建一个字符串队列
//    string s1,s2,s3;
//    cin>>s1>>s2>>s3;
//    qs.put(s1);
//    qs.put(s2);
//    qs.put(s3);
//    cout <<    qs.get() << " ";
//    cout <<    qs.get() << " ";
//    cout << qs.get() << endl;
//
//    return 0;
//}


//#include<iostream>
//using namespace std;
////你提交的代码将被嵌入到这里
//
//template <class T>
//void Mysort(T a[], int m) {
//    T temp;
//    int i,j,k;
//    for (i = 0; i < m; i++) {
//        k = i;
//        for (j = i+1; j < m; j++) {
//            if (a[j] < a[k]) {
//                temp = a[j];
//                a[j] = a[k];
//                a[k] = temp;
//            }
//        }
//    }
//}
//
//int main()
//{
//    int m,n,a[20],i,j;
//    float b[20];
//    cin>>m;
//    for(i=0;i<m;i++)
//        cin>>a[i];
//    cin>>n;
//    for(j=0;j<n;j++)
//        cin>>b[j];
//    Mysort(a,m);
//    Mysort(b,n);
//    for(i=0;i<m;i++)
//        cout<<a[i]<<' ';
//    cout<<endl;
//    for(j=0;j<n;j++)
//        cout<<b[j]<<' ';
//    cout<<endl;
//    return 0;
//}


//#include <iostream>
//using namespace std;
////你提交的代码将被嵌入到这里
//template <class T>
//void Swap(T i, T j) {
//    T temp;
//    temp = i;
//    i = j;
//    j = temp;
//}
//int main()
//{
//    int i,j;
//    char m,n;
//    cin>>i>>j;
//    cin>>m>>n;
//    Swap(i,j);
//    Swap(m,n);
//    cout<<i<<' '<<j<<'\n';
//    cout<<m <<' '<<n<<endl;
//    return 0;
//}


//#include <iostream>
//using namespace std;
//class planet {
//public:
//    double distance; // miles from the sun
//    int revolve; // in days public:
//    planet(double d, int r)
//    {
//        distance=d;
//        revolve=r;
//
//    }
//};
//
//class earth: public planet{
//    double circumference; //circumferenceoforbit
//public:
//    earth(double d, int r);
//    void show();
//};
//earth::earth(double d, int r):planet(d,r)
//{
//    distance = d;
//    revolve = r;
//    circumference = 3.1415 * 2 * revolve;
//}
//
//void earth::show()
//{
//    cout << "circumference:" << circumference << endl;
//    cout << "distance:" << distance << "  revolve:" << revolve << endl;
//}
//
//int main( ) {
//    earth ob(93000000,365);
//    ob.show( );
//    return 0;
//}

//
//#include <iostream>
//using namespace std;
//class Person
//{
//public:
//    Person(const char* s)
//    {
//        name = new char[strlen(s)+1];
//        strcpy(name, s);
//
//    }
//    ~Person() {
//        delete [] name;
//
//    }
//protected:
//    char* name;
//};
//
//class Student :public Person
//{
//public:
//    Student(char * p);
//    ~Student()
//    {
//        cout << "1" << endl;
//    };
//};
//
//
//
//Student::Student(char * p):Person(p)
//{
//    strcpy(name, p);
//}
//
//int main()
//{
//    char * a;
//    a = new char(10);
//    cin >> a;
//    Student STU(a);
//    return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
////你提交的代码将被嵌入到这里
//template <class T>
//T Max(T s, T e) {
//    if (s > e) {
//        return s;
//    } else {
//        return e;
//    }
//}
//
//int main( )
//{
//    int m,n;
//    char c,d;
//    string s1,s2;
//    cin>>m>>n;
//    cin>>c>>d;
//    cin>>s1>>s2;
//    cout<<Max(m,n)<<endl;
//    cout<<Max(c,d)<<endl;
//    cout<<Max(s1,s2)<<endl;
//    return 0 ;
//}


//#include <iostream>
//using namespace std;
//class People{
//private:
//    string id;
//    string name;
//public:
//    People(string id, string name){
//        this->id = id;
//        this->name = name;
//    }
//    string getId(){
//        return this->id;
//    }
//    string getName(){
//        return name;
//    }
//};
//class Student : public People{
//private:
//    string sid;
//    int score;
//public:
//    Student(string id, string name, string sid, int score):People(id,name) {
//
//    /** 你提交的代码将被嵌在这里（替换此行） **/
//        this->sid = sid;
//        this->score =score;
//}
//friend ostream& operator <<(ostream &o, Student &s);
//};
//ostream& operator <<(ostream &o, Student &s){
//    o << "(Name:" << s.getName() << "; id:"
//    << s.getId() << "; sid:" << s.sid
//    << "; score:" << s.score << ")";
//    return o;
//}
//int main(){
//    Student zs("370202X", "Zhang San", "1052102", 96);
//    cout << zs  << endl;
//    return 0;
//}

//#include <iostream>
//using namespace std;
//class People{
//private:
//    string id;
//    string name;
//public:
//    People(string id, string name){
//        this->id = id;
//        this->name = name;
//    }
//    string getId(){
//        return this->id;
//    }
//    string getName(){
//        return name;
//    }
//};
//class Student : public People{
//private:
//    string sid;
//    int score;
//public:
//    Student(string id, string name, string sid, int score);
//
//    /** 你提交的代码将被嵌在这里（替换此行） **/
//    friend ostream& operator <<(ostream &o, Student &s);
//};
////ostream& operator <<(ostream &o, Student &s);
////};
//ostream& operator <<(ostream &o, Student &s){
//    o << "(Name:" << s.getName() << "; id:"
//    << s.getId() << "; sid:" << s.sid
//    << "; score:" << s.score << ")";
//    return o;
//}


//#include <iostream>
//using namespace std;
//class Shape{
//public:
//    double area ( ){ return -1; }
//};
////你提交的代码将嵌入到这里。
//class Circle : public Shape{
//public:
//    double r;
//    double area();
//    Circle(double rr) {
//        r = rr;
//    }
//};
//
//double Circle::area()
//{
//    return 3.14 * r * r;
//}
//
//class Rectangle : public Shape{
//public:
//    double h;
//    double l;
//    Rectangle(double hh, double ll) {
//        h = hh;
//        l = ll;
//    }
//    double area() {
//        return h * l;
//    }
//};
//
//int main()
//{
//    double r,h,w;
//    cin>>r>>h>>w;
//    Circle c(r);
//    Rectangle rect(h,w);
//
//    cout<<"The area of the Circle is "<<c.area( )<<endl;
//    cout<<"The area of the Rectangle is "<<rect.area( )<<endl;
//
//    return 0;
//}

//#include <iostream>
//#include <cmath>
//using namespace std;
//
//class shape {// 抽象类
//public:
//    virtual double getArea()=0;// 求面积
//    virtual double getPerimeter()=0; // 求周长
//};
////你提交的代码将嵌入到这里
//class RHexagon {
//private:
//    double l;
//public:
//    RHexagon(double lll) {
//        l = lll;
//    }
//    double getArea() {
//        return 3 * sqrt(3) / 2 * l * l;
//    }
//    double getPerimeter() {
//        return 6 * l;
//    }
//};
//int main()
//{
//    double s;
//    cin>>s;
//    RHexagon p(s);
//    cout<<p.getArea()<<endl;
//    cout<<p.getPerimeter()<<endl;
//}
//

//#include <iostream>
//#include<string>
//using namespace std;
//class CLSA{
//public:
//    CLSA( )
//    {
//
//    }
//    CLSA( int i ) : m_j(i) {
//
//    }
//    int getA()
//    {
//        return m_j;
//
//    }
//private:
//    int m_j;
//};
//class CLS: public CLSA
//{
//public:
//    CLS( int i,int j );
//    /*CLS()
//     {
//     CLS(0);
//     }*/
//    int m_i;
//};
//CLS::CLS( int i,int j ) : m_i(i) ,CLSA(j)
//{
//    CLSA(10);//这里显式调用基类构造函数给临时对象进行赋值的，但是等CLS构造函数退出返回后，临时对象丢失。所以， 这个函数没有给真正的对象赋值。因为没有取得正确的this地址。
//}
//int main()
//{
//    CLS obj(2,3);
//    cout << obj.m_i << endl; //输出结果是什么？CLSA(j),
//    cout<<obj.getA();
//    return 0;
//}

//#include <cstring>
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//    string str;
//    cin >> str;
//    int flag = 0;
//    unsigned long len = str.size();
//    if (len < 50) {
//        cout << "No" << endl;
//        return 0;
//    }
//    for (unsigned long i = 0; i < len; i++) {
//        if (str[i] == '0' || str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9') {
//            flag = 1;
//        } else {
//            flag = 0;
//            break;
//        }
//    }
//    if (len == 11 && flag == 1 && str[0] == '1') {
//        cout << "Yes" << endl;
//    } else {
//        cout << "No" << endl;
//    }
//    return 0;
//}

//#include <cstring>
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//    string s;
//    cin >> s;
//    unsigned long place = 0;
//    unsigned long len = s.size();
//    for (unsigned long i = 0; i < len; i++) {
//        if (s[i] == '/' || s[i] == '\\') {
//            place = i;
//        }
//    }
//    for (unsigned long i = 0; i < place; i++) {
//        cout << s[i];
//    }
//    cout << endl;
//    for (unsigned long i = place+1; i < len; i++) {
//        cout << s[i];
//    }
//    cout << endl;
//
//
//    return 0;
//}

//#include <cstring>
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//    string s1,s2;
//    char s[1000];
//    unsigned long i;
//    while (cin >> s1 >> s2) {
//        int flag = 0;
//        unsigned long len = s1.size();
//        if(s2.size() < len)
//            len = s2.size() ;
//        for (i = 0; i < len; i++) {
//            if (s1[i] == s2[i]) {
//                s[i] = s1[i];
//                flag = 1;
//            }
//        }
//        if (flag) {
//            cout << "The common prefix is " << s << endl;
//        } else {
//            cout << "No common prefix" << endl;
//        }
//    }
//    return 0;
//}


//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//    string s1,s;
//    getline(cin,s1);
//    string old_value,new_value;
//    while (s1.compare("end")) {
//        s += s1;
//        getline(cin,s1);
//    }
//    getline(cin,old_value);
//    getline(cin,new_value);
//    //string::npos: 最大无符号值
//    for (string::size_type pos(0); pos != string::npos; pos += new_value.length()) {
//        if ((pos = s.find(old_value,pos)) != string::npos) {
//            s.replace(pos, old_value.length(), new_value);
//        } else {
//            break;
//        }
//    }
//    cout<<s<<endl;
//    return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//class Score
//{
//
//    float computer;
//    float english;
//    float mathematics;
//public:
//    Score(float x1, float y1, float z1);
//    Score();
//    void print();
//    void modify(float x2, float y2, float z2);
//};
//class Student
//{
//private:
//    int number;
//    char *name;
//public:
//    Score score;
//    Student(int number1,char *name1,float c,float e,float m);
//    Student(int number1,char *name1);//构造函数的声明
//    void modify(float c,float e,float m);
//    ~Student(); //析构函数的声明
//    void print();
//};
//
//int main()
//{  int numberi;
//    char namei[15];
//    float c,e,m;
//
//    cout<<"Enter number:\n"; cin>>numberi;
//    cout<<"Enter name:\n"; cin>>namei;
//    cout<<"Enter score(computer,english,math):\n"; cin>>c>>e>>m;
//    Student stu1(numberi,namei,c,e,m); //创建对象stu1时执行了初始化
//
//    cout<<"Enter number:\n"; cin>>numberi;
//    cout<<"Enter name:\n"; cin>>namei;
//    Student stu2(numberi,namei);// 创建对象stu2时执行了初始化
//    stu2.score.modify(87,96,100); //对象stu2调用成员函数modify( )
//
//    stu1.print();  //对象stu1调用成员函数print( )
//    stu2.print();  //对象stu2调用成员函数print( )
//    return 0;
//}
//using namespace std;
////构造函数的定义
//Student::Student(int number1,char *name1,float c,float e,float m):score(c,e,m)
//{
//    number=number1;
//    name=new char[strlen(name1)+1]; //申请动态内存单元
//    strcpy(name,name1);
//}
//
//Student::Student(int number1,char *name1):score()
//{
//    number=number1;
//    name=new char[strlen(name1)+1]; //申请动态内存单元
//    strcpy(name,name1);
//}
////析构函数的定义
//Student::~Student()
//{
//    delete[] name;  //释放动态内存单元
//}
//void Student::print()
//{
//    cout<<"number: "<<number<<" name: "<<name<<endl;
//    cout<<" score: ";
//    score.print();
//}
//
//void Student::modify(float c,float e,float m)
//{
//    score.modify(c,e,m);
//}
//
//Score::Score(float x1,float y1, float z1)
//{
//    computer=x1;
//    english=y1;
//    mathematics=z1;
//}
//
//Score::Score()
//{
//    computer=0;
//    english=0;
//    mathematics=0;
//}
//
//void Score::print()
//{
//    cout<<"computer:"<<computer<<endl;
//    cout<<"english:"<<english<<endl;
//    cout<<"mathematics:"<<mathematics<<endl;
//}
//
//void Score::modify(float x2, float y2, float z2)
//{
//    computer=x2;
//    english=y2;
//    mathematics=z2;
//}



//#include <iostream>
//#include <math.h>
//using namespace std;
//class Point
//{
//public:
//    Point(double xi, double yi) {
//        X=xi;
//        Y=yi; }
//    double GetX() {
//        return X;}
//    double GetY() {
//        return Y;}
//    double Distance(Point& b);
//private:
//    double X, Y;
//};
//double Point::Distance(Point& b)
//{
//    double dx=X-b.X;
//    double dy=Y-b.Y;
//    return sqrt(dx*dx+dy*dy);
//}
//int main()
//{
//    Point p1(3.0, 5.0), p2(4.0, 6.0);
//    double d=p1.Distance(p2);
//    cout<<"The distance is "<<d<<endl;
//    return 0;
//}


//#include <iostream>
//#include <string>
//using namespace std;
//class Circle
//{
//public:
//    Circle(float r) {
//        radius=r;
//        ++count;
//    }
//    ~Circle() {
//        --count;
//    }
//    static int num() {
//        return count;
//    } //静态成员函数
//private:
//    float radius;
//    static int count; //静态数据成员
//};
//
//int Circle::count = 0;
//int main()
//{
//    Circle cir1(1.2);
//    cout<<"count:"<<cir1.num()<<endl;
//
//    Circle cir2(2);
//    cout<<"count:"<<cir2.num()<<endl;
//
//    Circle cir3(3);
//    cout<<"count:"<<cir3.num()<<endl;
//    return 0;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//class student{
//private:
//    double *grade;
//    double *score;
//    string name;
//public:
//    student( )
//    {
//        grade=NULL;
//        score=NULL;
//    }
//    student(string n, double *g, double *s)
//    {
//        name=n;
//        grade=g;
//        score=s;
//    }
//    friend double averagegrade(student *stu, int count);
//};
///* 请在这里填写答案 */
//double averagegrade(student *stu, int count,)
//{
//    double x[count];
//    for (int i = 0; i < count; i++) {
//        //单门绩点
////        double grade = stu[i].grade;
//        double z = stu[i]->grade*1.0/10.0;
//        x[i] = stu[i].score * (z - 5);
//    }
//}
//
//int main()
//{
//    student stu[100];
//    double s[100][100], g[100][100];
//    int count=0;
//    string n;
//    for(int i=0;i<100;i++)
//    {
//        cin>>n;
//        if(n=="no") break;
//        count++;
//        for(int j=0;j<100;j++)
//        {
//            cin>>s[i][j];
//            if(s[i][j]==-1) break;
//            cin>>g[i][j];
//        }
//        stu[i]=student(n, g[i], s[i]);
//    }
//    cout<<averagegrade(stu, count);
//    return 0;
//}



//#include <iostream>
//using namespace std;
//
///* 请在这里填写答案 */
//class Student{
//public:
//    int number;
//    string name;
//    float score;
//    static int count;
//    static float sum;
//    static void average();
//    Student(int number1, string name1, float score1);
//    void print();
//};
//
//Student::Student(int number1, string name1, float score1)
//{
//    number = number1;
//    name = name1;
//    score = score1;
//}
//
//void Student::print()
//{
//    cout<<"number: "<<number<<" name: "<<name<<" score: "<<score<<" count: "<<count<<endl;
//}
//
//int main( )
//{
//    Student stu1(1,"Bill",87);
//    stu1.print( );
//
//    Student stu2(2,"Adam",91);
//    stu2.print( );
//
//    Student stu3(3,"David",96);
//    stu3.print( );
//
//    Student::average( ); //静态成员函数的调用
//
//    return 0;
//}

//#include <iostream>
//#include <math.h>
//#include <iomanip>
//using namespace std;
//
//class Point{
//public:
//    double x,y;
//    double Distance(Point point);
//    Point(double x1, double y1);
//};
//
//Point::Point(double x1, double y1)
//{
//    x = x1;
//    y = y1;
//}
//
//double Point::Distance(Point point)
//{
//    double distance = (this->x - point.x) * (this->x - point.x) + (this->y - point.y) * (this->y - point.y);
//
//    return sqrt(distance);
//}
//
//int main()
//{
//    double x1,x2,y1,y2;
//    cin>>x1>>y1;
//    cin>>x2>>y2;
//    Point a(x1,y1);
//    Point b(x2,y2);
//    double distance = a.Distance(b);
//    cout<<setiosflags(ios::fixed)<<setprecision(2)<<distance;
//    return 0;
//
//}




//#include <iostream>
//using namespace std;
//
///* 请在这里填写答案 */
//class Car{
//private:int m_nWheels;
//public:
//    void disp_welcomemsg();
//    int get_wheels();
//    void set_wheels(int);
//};
//
//void Car::disp_welcomemsg()
//{
//    cout<<"Welcome to the car world!"<<endl;
//}
//
//int Car::get_wheels()
//{
//    return m_nWheels;
//
//}
//
//void Car::set_wheels(int n)
//{
//    m_nWheels = n;
//}
//
//int main()
//{
//    int n;
//    cin >> n;
//    Car myfstcar, myseccar;    //定义类对象
//    myfstcar.disp_welcomemsg();//访问成员函数，显示欢迎信息
//    myfstcar.set_wheels(n);    //访问成员函数，设置车轮数量
//    myseccar.set_wheels(n+4);  //访问成员函数，设置车轮数量
//    //访问成员函数，显示车轮数量
//    cout << "my first car wheels num = " << myfstcar.get_wheels() << endl;
//    cout << "my second car wheels num = " << myseccar.get_wheels() << endl;
//
//    return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//const int K=2;
//const int N=20;
//class Student{
//    string name;
//    Student *welcome[K];
//    Student *pair;
//public:
//    void init(string &name, Student *a, Student *b) {
//        this->name=name;
//        welcome[0]=a;//两个舞伴候选人
//        welcome[1]=b;
//        pair=NULL;
//    }
//    void printPair();
//    void addPair();
//};
//
///* 请在这里填写答案 */
//void Student::addPair()
//{
//    if (this->pair == NULL) {
//        for (int i = 0; i < 2; i++) {
//            for (int j = 0; j < 2; j++) {
//                if (this->welcome[i]->welcome[j] == this && this->welcome[i]->pair == NULL) {
//                    this->pair = this->welcome[i];
//                    this->welcome[i]->pair = this;
//                    break;
//                }
//            }
//        }
//        if (this->pair == NULL) {
//            for (int i = 0; i < 2; i++) {
//                //能否将就： 心仪者的两个候选人都有心仪对象了
//                if (this->welcome[i]->welcome[1]->pair != NULL && this->welcome[i]->welcome[0]->pair != NULL && this->welcome[i]->pair == NULL) {
//                    this->pair = this->welcome[i];
//                    this->welcome[i]->pair = this;
//                    break;
//                }
//            }
//        }
//    }
//    
//}
//
//void Student::printPair()
//{
//    if (this->pair) {
//        cout<<this->name<<":"<<this->pair->name<<endl;
//    }
//}
//
//
//int main(){
//    Student male[N], female[N];
//    int m, f, i, j, a, b;
//    string name;
//    cin>>m;
//    for(i=0;i<m;i++){
//        cin>>name>>a>>b;
//        male[i].init(name, &female[a], &female[b]);
//    }
//    cin>>f;
//    for(i=0;i<f;i++){
//        cin>>name>>a>>b;
//        female[i].init(name, &male[a], &male[b]);
//    }
//    for(i=0;i<m;i++) male[i].addPair();
//    for(i=0;i<f;i++) female[i].addPair();
//    for(i=0;i<m;i++) male[i].printPair();
//    return 0;
//}

