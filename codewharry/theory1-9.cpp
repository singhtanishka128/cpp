#include<iostream>//system defined header file
#include"this.h"//user-defined header file; will produce error if not present in current directory or explore page.
#include<iomanip>//for manipulators
using namespace std;
int glo=6;//global variable
int c1=45;//global

//single line comment like me lmao.

/*
this
is
a
multi-line
comment like my dope ass personalities lmao
*/

void sum()//void returns nothing/return type 0.
{
 cout<<"we print second glo bro"<<glo<<"\n";//first searches for glo created in this function, then it searches for global then for local to main.
}
int main()
{
    int a=1000,b=10;
    float pi=3.14;//float for low , double for high precision decimal values.
    char c='t';//always store single letter/character.
    bool gossip=true;//true=1,false=0.
    
    
    cout<<"This is tutorial 4.\nHere the value of a is "<<a<<".\nHere the value of b is "<<b<<".\n";
    cout<<"my value of pie is "<<pi<<".\n";
    cout<<"my name starts with a '"<<c<<"'.\n";
    cout<<"I think my gossip is number"<<gossip<<".\n";
    int glo=9;//local variable
    glo=78;
    cout<<"we print glo"<<glo<<"\n";
    sum();
    cout<<"we print third glo bro"<<glo<<"\n";
    int num1,num2;
    cout<<"Enter num1:\n";//cout << is insertion, cin >> is extraction operator.
    cin>>num1;//takes input
    cout<<"Enter num2:\n";
    cin>>num2;
    cout<<"total sum of num1 & num2:"<<num1+num2<<"\n";
    cout<<"operators are:\n";
    cout<<"value of a + b is "<<a+b<<endl;//endl can be used in place of \n.
    cout<<"value of a - b is "<<a-b<<"\n";
    cout<<"value of a * b is "<<a*b<<"\n";
    cout<<"value of a / b is "<<a/b<<"\n";
    cout<<"value of a==b is "<<(a==b)<<endl;//parenthesis compulsory
    cout<<"value of a!=b is "<<(a!=b)<<endl;
    cout<<"value of a>=b is "<<(a>=b)<<endl;
    cout<<"value of a<=b is "<<(a<=b)<<endl;
    cout<<"value of a>b is "<<(a>b)<<endl;
    cout<<"value of a<b is "<<(a<b)<<endl;
    cout<<"checking logical and && "<<((a<b)&&(a==b))<<endl;
    cout<<"checking logical or || "<<((a>b)||(a==b))<<endl;
    cout<<"checking logical not ! "<<(!(a==b))<<endl;//generates opposite value, true ka false, false ka true.
    int a1,b1,c1;
    cout<<"enter a1:"<<endl;
    cin>>a1;
    cout<<"enter b:"<<endl;
    cin>>b1;
    c1=a1+b1;
    cout<<"sum is "<<c1<<endl;
    cout<<"to print global variable use :: scope resolution operator "<<::c1<<endl;//c1 local bhi h global bhi h. :: to identify global.
    cout<<"this gives the bits occupied by the datatype "<<sizeof(34.4l)<<endl;//size of datatype
    int a2=50;//typecasting:converting one datatype into another
    float b2=49.96;
    int c2=int(b2);
    cout<<(float)a2<<endl;
    cout<<c2<<endl;
    cout<<a2+b2<<endl;
    cout<<a2+c2<<endl;
    int a3=33;//value update/change; same for char, double, float
    cout<<"value was:"<<a3<<endl;
    a3=100;
    cout<<"value is:"<<a3<<endl;
    const int a4=1000;//this cannot be changed; same for char, double, float
    int a5=1,b5=28,c5=3999;//manipulators
    cout<<"value of variables without setw"<<a5<<endl;
    cout<<"value of variables without setw"<<b5<<endl;
    cout<<"value of variables without setw"<<c5<<endl;
    cout<<"value of variables with setw"<<setw(4)<<a5<<endl;//setw sets width spaces of (number)
    cout<<"value of variables with setw"<<setw(4)<<b5<<endl;
    cout<<"value of variables with setw"<<setw(4)<<c5<<endl;
    int age, age1;//selection control structure: if else ladder: if, else if, else if, else
    cout<<"enter your age for alcohol party"<<endl;
    cin>>age;
    if((age<18) && (age>0)){
     cout<<"you're underage. fuck off"<<endl;
    }
    else if(age==18){
    cout<<"yea whatever."<<endl;
    }
    else if(age<1){
        cout<<"you're not yet born."<<endl;
    }
    else{
    cout<<"alcoholic bitch."<<endl;
    }
    //switch selection control structure
    cout<<"enter age1"<<endl;
    cin>>age1;
    switch (age1)
    {
    case 18:
        cout<<"you're 18";
        break;//exit loop prematurely, if break not used all instructions get executed subsequently
    case 21:
        cout<<"you're 21 bitch"<<endl;
        break;
    case 27:
        cout<<"you're basically 30"<<endl;
        break;
    
    default:
    cout<<"all men are liars"<<endl;
        break;
    }
    cout<<"done with switch case"<<endl;
    return 0;
}