#include <iostream>

using namespace std;

int main()
{
  int n;
  int xj;
  int clef;
  cout<<"How many lines down there?    ";
  cin>>n;
  cout<<"Is it on a line(1) or on a space(0)?    ";
  cin>>xj;
  cout<<"What is the clef? G0 F1 K2    ";
  cin>>clef;

  char gname[7]={'D','C','B','A','G','F','E'};
  char dname[7]={'F','E','D','C','B','A','G'};
  char kname[7]={'E','D','C','B','A','G','F'};

  int n2=2*n;
  int poi=n2-xj;

  if(clef==0)
    {
      cout<<gname[poi]<<endl;
    }
  else if(clef==1)
    {
      cout<<dname[poi]<<endl;
    }
  else if(clef==2)
    {
      cout<<kname[poi]<<endl;
    }

  else
    {
      cout<<"There is an error.";
    }
  return 0;
}
