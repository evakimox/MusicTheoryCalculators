#include <iostream>
#include <string>

using namespace std;

int main()
{
  cout<<"Want Major or Minor?   ";
  char m;
  cin>>m;
  
  cout<<"Count b or count #?     ";
  char sf;
  cin>>sf;
  
  int jige;
  cout<<"\n How many?     ";
  cin>>jige;

  string bmajor[7]={"F","Bb","Eb","Ab","Db","Gb","Cb"};
  string bminor[7]={"d","g","c","f","bb","eb","ab"};
  string smajor[7]={"G","D","A","E","B","F#","C#"};
  string sminor[7]={"e","b","f#","c#","g#","d#","a#"};

  if(m=='M'&&sf=='#')
    {
      cout<<smajor[jige-1]<<endl;
    }
  
  else if(m=='M'&&sf=='b')
    {
      cout<<bmajor[jige-1]<<endl;
    }

  else if(m=='m'&&sf=='b')
    {
      cout<<bminor[jige-1]<<endl;
    }

  else if(m=='m'&&sf=='#')
    {
      cout<<sminor[jige-1]<<endl;
    }

  else if(m!='m'&&m!='M')
    {
      cout<<"Error!"<<endl;
	return 0;
    }
  return 0;
  
}
