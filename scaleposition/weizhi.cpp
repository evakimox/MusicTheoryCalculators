#include <iostream>
#include <string>
using namespace std;

int main()
{
  while(1){
  cout<<"Is it in Major or in Minor (M/m)?"<<endl;
  char m;
  cin>>m;
  char nh;
  

  if(m=='m')
    {
      cout<<"Is it Natural or Harmonic?"<<endl;
      cin>>nh;
    }
  else if(m=='Q'||m=='q')
    {
      return 0;
      //quit
    }

  cout<<"what is the signature?"<<endl;
  char sig;
  cin>>sig;
  
  cout<<"Then what is your key?"<<endl;
  char k;
  cin>>k;

  string Naturalminor[7]={"i","iiφ","III","iv","v","VI","VII"};
  string harmonicminor[7]={"i","iiφ","III+","iv","V","VI","viiº"};
  string major[7]={"I","ii","iii","IV","V","vi","viiφ"};

  int yigeshu=k-sig;
  if(yigeshu<0)
    {
      yigeshu=yigeshu+7;
    }

  if(m=='M')
    {
      cout<<major[yigeshu]<<endl;
    }
  else if(m!='M'&&m!='m')
    {
      cout<<"There is an error!"<<endl;
   
    }
  else if(m=='m'&&(nh=='N'||nh=='n'))
    {
      cout<<Naturalminor[yigeshu]<<endl;
    }
  else if(m=='m'&&(nh=='H'||nh=='h'))

    
    {
      cout<<harmonicminor[yigeshu]<<endl;
    }
    else if (m=='m'&&(nh!='H'&&nh!='h'&&nh!='N'&&nh!='n'))
      {cout<<"There is error!"<<endl;}
  }



  return 0;
}
