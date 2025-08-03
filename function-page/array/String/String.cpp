#include<iostream>

using namespace std;

int main(){
    string a ;
    cout<<"Enter a string  :";
    getline(cin,a);

  for (int i = 0; i <a.size(); i++)
  {
    if (i%2==0)
    {
       cout<<"a";
    }
      else if(i % 1==0 ){
        cout<<"w";
      }
  }
  
    
}