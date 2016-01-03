#include <iostream>
#include <string>

using namespace std;

string n2p(char input);
char p2n();

int main()
{
  cout<<"音名到五线谱(0) 还是五线谱到音名(1)：  ";
  bool direction;
  cin>>direction;


  if (direction)
    {
      //run the previous method
      cout<<p2n()<<endl;
    }
  else
    {
      //run the unwritten method
      cout<<"In which clef are you in? (G K F):   ";
      char clef;
      cin>>clef;
      cout<<"What note do you want?   (C~B):   ";
      char note;
      cin>>note;

      if(clef=='G'||clef=='g')
	{
	  cout<<n2p(note)<<endl;
	}
      else if (clef=='K'||clef=='k')
	{
	  char note2=note-1;
	  if(note!='a'&&note!='A')
	    {
	      cout<<n2p(note2)<<endl;
	    }
	  else
	    {
	      cout<<n2p('G')<<endl;
	    }
	  
	}
      else if (clef=='F'||clef=='f')
	{
	 char note3=note-2;
	  if(note!='a'&&note!='A'&&note!='B'&&note!='b')
	    {
	      cout<<n2p(note3)<<endl;
	    }
	  else if(note=='a'||note=='A')
	    {
	      cout<<n2p('F')<<endl;
	    }
	  else if(note=='b'||note=='B')
	    {
	      cout<<n2p('G')<<endl;
	    }
	}
    }
  return 0;
}

string n2p(char input)
{
  string gp[7]=
    {"下加二线，第二间，上加一线",//                           Aa  Bb  Cc
     "下加二间（1条线下）,第三线，上加二间（1条线之上）",//       Bb  Cc  Dd
     "下加一线,第三间，上加三线",//                            Cc  Dd  Ee
     "下加一间（不加线，底部）,第四线，上加三间（2条线之上）",//   Dd  Ee  Ff
     "下加四间（3条线下），第一线,第四间",//                    Ee  Ff  Gg
     "下加三线，第一间,第五线，上加四间（3条线之上）",//          Ff  Gg  Aa
     "下加三间（2条线下），第二线,上加一间（五线谱顶）"//         Gg  Aa  Bb
    };

  if((input-'A'<7)&&(input-'A'>=0))
    {
      return gp[input-'A'];
    }
  else if((input-'a'<7)&&(input-'a'>=0))
    {
      return gp[input-'a'];
    }
  else
    {
      return "There is an error!";
    }
}

char p2n()
{
  char allnotes[35]={'A','B','C','D','E','F','G',
		     'A','B','C','D','E','F','G',
		     'A','B','C','D','E','F','G',
		     'A','B','C','D','E','F','G',
		     'A','B','C','D','E','F','G'};
  cout<<"谱号？ ";
  char puhao;
  cin>>puhao;

  int ref;
  if(puhao=='G'||puhao=='g')
    {
      ref=10;
    }
  else if (puhao=='K'||puhao=='k')
    {
      ref=11;
    }
  else if(puhao=='f'||puhao=='F')
    {
      ref=12;
    }


  cout<<"上加线（1）？下加线（-1）？还是没有加线（0）？ ";
  int jiaxian;
  cin>>jiaxian;

  if(jiaxian>0)
    {
      //上加线
      ref=ref+10;
      cout<<"加了几根线? 音符在线（1）还是间（0）？";
      int xian;
      int xj;
      cin>>xian;
      cin>>xj;
      ref=ref+xian*2-xj;
    }
  else if(jiaxian<0)
    {
      //下加线
      cout<<"加了几根线?音符在线（1）还是间（0）？";
      int xian;
      int xj;
      cin>>xian;
      cin>>xj;
      ref=ref-xian*2+xj;
    }
  else
    {
      //没加线
      cout<<"第几？线（1）还是间（0）？";
      int xian;
      int xj;
      cin>>xian;
      cin>>xj;
      ref=ref+xian*2-xj;
    }
  return allnotes[ref];
}
