#include<iostream>
#include<string>
#include<cstring>
using namespace std;

inline bool isleap(int y)
{
	if(y%400==0) return true;
	else if(y%4==0 && y%100!=0) return true;
	else return false;
}


int main()
{
	std::string date,mmm,dd,yyyy;
	int t,days,count;
	cin>>t;
	for(count=1;count<=t;count++)
	{
		cin>>date;
		dd=date.substr(0,2);
		yyyy=date.substr(7);
		mmm=date.substr(3,3);

			if(mmm=="JAN") days=0;
			else if(mmm=="FEB") days=31;
			else if(mmm=="MAR") days=59;
			else if(mmm=="APR") days=90;
			else if(mmm=="MAY") days=120;
			else if(mmm=="JUN") days=151;
			else if(mmm=="JUL") days=181;
			else if(mmm=="AUG") days=212;
			else if(mmm=="SEP") days=243;
			else if(mmm=="OCT") days=273;
			else if(mmm=="NOV") days=304;
			else if(mmm=="DEC") days=334;

			if(isleap(std::stoi(yyyy)) && mmm!="JAN" && mmm!="FEB") days++;

			days+=stoi(dd);


			if(days<=300) cout<<"\nCase "<<count<<": "<<days<<" Hundreds";
			else if(days<=360) cout<<"\nCase "<<count<<": "<<(days-300)<<" Tens";
			else cout<<"\nCase "<<count<<": "<<(days-360)<<" Ones";



		}

	return 0;

}