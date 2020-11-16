#include<iostream>
using namespace std;
class String
{ private:
  char x[30];
  public:
  void getString()
  {cout<<"Enter String :-";
   cin>>x;}
  void putString()
  {cout<<x<<endl;}

  String copy();



};
String String::copy()

{ String R;
   {int i,j;
    
  for(i=0;x[i];i++);
  
   
  for(j=0;j<i;j++)
  {R.x[j]=x[j];
    
  }
  
  return R;

}}


int main()
{
  String S1;
  S1.getString();
  S1.putString();
  cout<<"Copied String is :-"<<endl;
  String S2;
  S2=S1.copy();
  S2.putString();

}
