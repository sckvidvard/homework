
#include <iostream> 
#include <string>
#include<math.h>
//90 ���� ����
using namespace std;

class Work
{
    //private:
    int b;
    int dub()
    {
        int sum = b * 2;
        return sum;
    };
public:
    Work();
    void Set(int a);
    int Get();
    Work(int a);
    /*~Work();*/
protected:
    void print();
};
Work::Work()
{
    b = 0;
}
void Work::Set(int a)
{
    b = a;
}

int Work::Get()
{
    /*int a = b;*/
    return b;
}
Work::Work(int a)
{
    b = a;
}
void Work::print()
{
    cout << Get() << endl;
};

class Work2 : private Work
{
    int a;
public:
    Work2(int a);
    void show();
};
Work2::Work2(int a1)
{
    //Work(1);
    a = a1;
}
void Work2::show()
{
    int b = Get();
    cout << a << " " << b << endl;

}


class Work3 : protected Work2
{
    int c;
public:
    Work3(int a);
};
Work3::Work3(int a) :Work2(0)
{
    c = a;
}
/*Work b(1);
    Work2 b2(2);
    Work3 b3(3);
    b2.show();*/
class p
{
    int pop;
public:
    p(int a)
    {
        pop = a;

        cout << this << endl;
    }
};

void pip(int& a)
{
    int y = 8;
    a = y;
}
void Plozhad()
{
    setlocale(LC_ALL, "rus");
    int sh, vis;
    cout << "������� ������ ��������������: ";
    cin >> sh;
    cout << "������� ������ ��������������: ";
    cin >> vis;
    int S = sh * vis;
    cout << "������� ��������������: " << S;
}

class point
{
    int a;
public:
    point(int a)
    {
        this->a = a;
    }
    point operator + (point& b)
    {
        return this->a + b.a;
    }
    void print()
    {
        cout << this->a << endl;

    }
};

void  popp(int a)
{
    a = 0;
}

int main()
{




}

// ��������������

/* // ��������������  CHAR � STRING

// ��� ����
char a = 'a';
int ia = int(a);
cout << ia << endl; // ��� ������ � ��� ascii

*/

/* // ��������������  INT � STRING;
int n = 89;
string chisl = to_string(n);
cout << chisl << endl; // 89

*/

/* // �������������� STRING � INT;
string inp = "102";
int res = stoi(inp);
cout << res << endl; // 102

*/

// ��� ���� �������

/*
������������ ��������� ������ - ������ � �������, ������ � ��
���������� ����������� ��������
����������� ����������
������������ ���
���������
&=
�������������� ��������� �������� ���� � ����� ��� )
����� ������ � ������ �������� - �������������, ����������, ������ �����, ��������(������� ��� �� ����� ������)
try catch
��������� ��� ���� ������ - long - ��, short - �� ���� � ��
������ �������
���� �� � C++ F ������
STRUCK
*/

// �� �������� ����� CODEWARS

/* // playing with digits (�� �������� ��-�� ������ � lenght,
// �� ������� ����� ������� ������� ������ � �������)
int pow1(int a, int b)
{
    int t = a;
    for (int i = 0; i < b-1; i++)
    {
        t *= a;
    }
    return t;
}


    static int digPow(int n, int p)
    {
        string chisl = to_string(n);
        int a = 0;
        for (int i = 0; i < chisl.length(); i++)
        {
            int gotov = chisl[i] - '0';
            a += pow1(gotov, i+p) ;

        }
        if (a % n == 0)
        {
            return a / n;
        }
        else
            return -1;
    }
*/

// /*Replace With Alphabet Position (�� ����������� ������ 
// � ������� ��������� �� ������� �� ���� ����������� ��������,
// ������ � else if �� �����, ��� ������������ �������� - npos =>
// ������ ���� ==, � �� !=, �� ������� ������ ������� ������ out of range)*/
//std::string alphabet_position(const std::string& text)
//{
//    string alfa = text;
//    string lang = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//    string Lang = "abcdefghijklmnopqrstuvwxyz";
//    string number;
//    int count = 0;
//    for (int i = 0; i < alfa.length(); i++)
//    {
//        if (alfa[i] == ' ')
//        {
//            alfa.erase(i, 1);
//        }
//        else if (Lang.find(alfa[i]) != std::string::npos)
//        {
//            alfa.erase(i, 1);
//        }
//        else if (lang.find(alfa[i]) != std::string::npos)
//        {
//            alfa.erase(i, 1);
//
//        }
//
//        if (alfa.length() == 0)
//        {
//            return number;
//        }
//    }
//    
//    
//    for (int i = 0; i < alfa.length(); i++)
//    {
//
//        alfa[i] = toupper(alfa[i]);
//    }
//
//    for (int i = 0; i < alfa.length(); i++)
//    {
//        for (int j = 0; j < lang.length(); j++)
//        {
//            if (alfa[i] == lang[j])
//            {
//                number.append(to_string(j + 1));
//                number.append(" ");
//
//            }
//        }
//
//    }
//
//    number.erase(number.length() - 1, 1);
//    return number;
//}

/*Valid Braces (�� �������� 4 ��������)
  using namespace std;
  bool valid_braces(std::string braces)
  {
      bool b = true;
      int i = 0;
      for (int j = i; j < braces.length(); j++)
      {
          if (braces[i] == '(')
          {
              if (braces[j] == ')')
              {

                  braces.erase(i, 1);
                  braces.erase(j - 1, 1);
                  j = 0;
              }


          }
          else if (braces[i] == '{')
          {
              if (braces[j] == '}')
              {
                  braces.erase(i, 1);
                  braces.erase(j - 1, 1);
                  j = 0;
              }

          }
          else if (braces[i] == '[')
          {
              if (braces[j] == ']')
              {
                  braces.erase(i, 1);
                  braces.erase(j - 1, 1);
                  j = 0;
              }

          }
      }
      if (braces.length() != 0)
      {
          b = false;
      }
      return b;
  }*/

  //WTF
  /*
  //������ ������� ������, 16  8 ?
  int* getint(int * arr, int b)
  {
      int* masiv = new int[b];
      for (int i = 0; i < b; i++)
      {
          masiv[i] = arr[i];
      }
      return masiv;
  }

  int main()
  {
      int a = 10;
      int* t = &a;

      int Aar[] = { 1,2,3,4 };
      int razm = sizeof(Aar) / sizeof(Aar[0]);


      cout << sizeof(Aar) << endl; // 16
      for (int i = 0; i < razm; i++)
      {
          cout << Aar[i] << endl;
      }
      cout << Aar << endl;
      cout << *Aar<< endl;

      cout << "=================================" << endl;

      cout << sizeof(getint(Aar, razm)) << endl; // 8
      for (int i = 0; i < razm; i++)
      {
          cout << getint(Aar, razm)[i] << endl ;
      }
      cout << getint(Aar, razm) << endl;
      cout << *getint(Aar, razm) << endl;

  }
  */

  // IDEAS
  /*
  ������� ��� ������������ � �������� �������������
  (��� �������� �������)


  */


