#include <iostream>
using namespace std;
int main()
{
     //loops
    cout << "using for loop:" << endl;//for loop
    for (int i1 = 1; i1 <= 10; i1++)
    {
        cout << "6x" << i1 << "=" << 6 * i1 << endl;
    }
    cout << "using while loop:" << endl;//while loop
    int a1 = 1;
    while (a1 <= 10)
    {
        cout << "6x" << a1 << "=" << 6 * a1 << endl;
        a1++;
    }
    cout << "using do-while loop:" << endl;//do-while
    int b1 = 1;
    do
    {
        cout << "6x" << b1 << "=" << 6 * b1 << endl;
        b1++;
    } while (b1 <= 10);
    cout << "long way 2 go" << endl;
    //break continue
    for (int i2 = 1; i2 <=10; i2++)//using break
    {
        if(i2==5)
        {
            break;
        }
        cout<<"we print"<<i2<<endl;
    }
    cout<<"gap"<<endl;// or cout<<endl;
    for (int i3 = 1; i3 <=10; i3++)//using continue
    {
        if(i3==5)
        {
            continue;
        }
        cout<<"we print"<<i3<<endl;
    }
   //pointers
   int a2=3;
   int* b2=&a2;
   cout<<"address of a2:"<<&a2<<endl;
   cout<<"address of a2:"<<b2<<endl;
   cout<<"value at address of b2:"<<*b2<<endl;
   int** c2=&b2;
   cout<<"address of b2:"<<&b2<<endl;
   cout<<"address of b2:"<<c2<<endl;
   cout<<"value at address of c2:"<<*c2<<endl;
   cout<<"value at address value of(value at(c2)):"<<**c2<<endl;
   int marks[]={98,91,96,99};//array
   cout<<marks[3]<<endl;
   for(int i=0;i<4;i++)//print or display array
   {
    cout<<"value of marks "<<i<<"is "<<marks[i]<<endl;
   }
   int* p1=marks;//pointer arithmetic
   /*
   cout<<"address of marks at 0: "<<p1<<endl;
   cout<<"value at address of marks at 0: "<<*p1<<endl;
   p1++;
   cout<<"address of marks at 1: "<<p1<<endl;
   cout<<"value at address of marks at 1: "<<*p1<<endl;
   */
   for(int i=0;i<4;i++)//display pointer arithmetic
   {
    cout<<"address of marks at "<<i<<":"<<p1<<endl;
    cout<<"value at address of marks at "<<i<<":"<<*p1<<endl;
    p1++;
   }
   char tribe[]={'a','b','c','d','e'};//another example
   char* p2=tribe;//p2=0;
   cout<<*(p2++)<<endl;//index 0 to 1, prints a
   //cout<<*p2<<endl;//1, prints b
   cout<<*(++p2)<<endl;//2, prints c
//always declare struct union enum outside the main function
   struct employee//user defined datatype;
   {
    int eId;
    char favChar;
    float salary;
   };
   struct employee kenny;
   kenny.eId=128;
   kenny.favChar='x';
   kenny.salary=20000000;
   cout<<"eid:"<<kenny.eId<<endl;
   cout<<"favChar:"<<kenny.favChar<<endl;
   cout<<"salary:"<<kenny.salary<<endl;

   typedef struct barbie//using typedef
   {
    int dollnum;
    double paycheck;
   }brb;//brb doll instead of struct barbie doll 
   brb doll;
   doll.dollnum=28;
   doll.paycheck=999996;
   cout<<"babydoll main sone di:"<<doll.dollnum<<endl;
   cout<<"paycheck:"<<doll.paycheck<<endl;

   union money//same as struct but with better memory management
   {
    int option1;
    double option2;
    float option3;
   };
   money m1;
   m1.option3=999;
   cout<<m1.option3<<endl;
   m1.option2=100;
   cout<<m1.option2<<endl;
   cout<<m1.option3<<endl;//prints garbage value. works one declare-print at a time.
   
   enum Mood{happy, sad, grumpy};//enumeration, index 0,1,2//
   Mood m2=happy;//0
   cout<<m2<<endl;//0
   cout<<(m2==3);//returns 0 as false
return 0;
}