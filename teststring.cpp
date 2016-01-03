#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  cout<<"Please enter the chord notes:  ";
  string n;
  cin>>n;

  int drm[n.length()];

  for(int i=0;i<n.length();i++)
    {
      if(n.at(i)>='a'&&n.at(i)<='g')
	{
	  drm[i]=n.at(i)-'a';
	}
      else if(n.at(i)>='A'&&n.at(i)<='G')
	{
	  drm[i]=n.at(i)-'A';
	}
    }

  int temp;
  for(int i=0;i<n.length();i++)
    {
      for(int j=0;j<n.length()-1;j++)
	{
	  if(drm[j]>drm[i])
	    {
	      temp=drm[i];
	      drm[i]=drm[j];
	      drm[j]=temp;
	    }
	}
    }
  
  int ultlen=n.length();
  
  for(int i=0;i<n.length()-1;i++)
    {
      if(drm[i]==drm[i+1])
	ultlen--;
    }

  int ultchord[ultlen];
  
  for(int i=0;i<ultlen;i++)
    {
      if(drm[i]==drm[i+1])
	{//do nothing}
	  else
	    {ultchord[i]=drm[i];}
	}
    }
	  
    
  return 0;
}
