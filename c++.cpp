#include<iostream>
using namespace std;
void cale()
{
  double cm;
  cout<<"Podaj w cm: "<<endl;
  cin>>cm;
  double cale=cm*0.39;
  cout<<cm<<" w calach to: "<<cale<<endl; 
}
void fty()
{
  double m;
  cout<<"Podaj w m: "<<endl;
  cin>>m;
  double ft=3.28*m;
  cout<<m<<" w ft to: "<<ft<<endl; 
}
void mile()
{
  double km;
  cout<<"Podaj w km: "<<endl;
  cin>>km;
  double mil=0.62*km;
  cout<<km<<" w milach to: "<<mil<<endl; 
}
void fare()
{
  double stopnie;
  cout<<"Podaj w stopniach: "<<endl;
  cin>>stopnie;
  double far=stopnie*9/5+32;
  cout<<stopnie<<" w Fahrenheity'ach to: "<<far<<endl;
}
int main()
{
    int wybor;
    while(true){
         cout<<"Wybierz: \n 1)cm->cal\n 2)m->ft\n 3)km->mil\n 4)stopnie C->F\n 5)kontynuacja\n 6)wyjscie"<<endl;
         cin>>wybor;
         if(!cin)
         {
            cin.clear();
            double zmienna;
            while(!cin)
            {
                cin>>zmienna;
            }
         }
             switch(wybor){
                 case 1:
                     cale();
                     break;
                 case 2:
                     fty();
                     break;
                 case 3:
                     mile();
                     break;
                 case 4:
                     fare();
                     break; 
                 case 5:
                     continue;
                     break;
                 case 6:
                     exit(0);
                     break;
                 default:
                     cout<<"Zle podane dane"<<endl;
                     
             }}
    cin.get();
    cin.get();
    return 0;
}