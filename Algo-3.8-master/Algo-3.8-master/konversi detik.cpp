#include <iostream>
using namespace std;
int main()
{
int jam,menit,hari,detik;
cout<<"berapa detik?  ";
cin>>detik;
jam=detik/3600;
hari=detik%3600;
menit=hari/60;
hari=hari%60;
cout<<jam<<" jam "<<endl;
cout<<menit<<" menit "<<endl;
cout<<hari<<" detik"<<endl;

std::cout<<" \n";
std::cout<<"nama  : muhammad yusuf alfaqih \n";
std::cout<<"nim   : 311810239";
return 0;
}
