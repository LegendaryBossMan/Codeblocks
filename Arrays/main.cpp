#include <iostream>
#include <string>
using namespace std;

class Student
{
  string name; // holds name.
  string name1; // holds last name.
  int weight; //holds weight.
  string eyes; // holds eye color.
  int grade; //holds a number for grade
  float avWeight;
  float aGrade;


  public:
      void getName()
      {
         // getline(cin, name);
        cin >> name;
      }
      void lastName()
      {
          cin >> name1;
      }
      int displayGrade()
      {
          return grade;
      }
      int displayWeight()
      {
          return weight;
      }
      int displayName()
      {
          resturn name;
      }

      void getGrade()
      {
          cin >> grade; // brings grade into variable.


      }
      void displayInfo()
      {
          cout <<"Name: " << name << endl;
          cout <<"Grade: " << grade << endl;
          cout <<"Eye color: " << eyes << endl;
          cout <<"Weight: "<< weight <<endl;


      }
        void displayOutfo()
        {
          cout <<"Average Weight: "<< avWeight <<endl;
          cout <<"Average Grade: " << aGrade <<endl;
          cout <<"Heaviest Student: "<<endl;
          cout <<"Lightest Student: "<<endl;
        }
      void getEyes()
      {
        cin >> eyes;
      }
    void getWeight()
    {
        cin >> weight;
    }
    void getLname()
    {
        cin >> name1;
    }
    void avgGrade()
    {

    }
};


int main()
{

    Student st[5];
    int max = 0;
    int min = 1000;
    string maxName;
    string minName;

    for(int i = 0; i < 5; i++)
    {
        cout <<"Students " << i + 1 << endl;
        cout <<"Enter name: " <<endl;
        st[i].getName();
        cout<<"Enter Last name: "<< endl;
        st[i].lastName();
        cout <<"Enter grade: "<<endl;
        st[i].getGrade();
        cout <<"Enter eye color: "<<endl;
            st[i].getEyes();
        cout <<"Enter weight: " <<endl;
            st[i].getWeight();

    }
    for(int i = 0; i < 5; i++)
    {
        cout <<"Student "<< i + 1 << endl;
        st[i].displayInfo();
    }
    if(st[i]displayWeight() >= max)
    {
        max = st[i].displayWeight();
        maxName = st[i].displayName();
    }
    if(st[i]displayWeight() <= min)
    {
        min = st[i]displayWeight();
        minName = st[i]displayName();
    }
    aGrade = sum / 5;
    cout<<"Average Grade: " <<aGrade<<endl;
    cout<<"Lowest Weight: "<<avWeight<<endl;



    return 0;
}
