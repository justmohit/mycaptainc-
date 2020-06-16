#include <iostream>
using namespace std;
class Time
{
  public:
	int hh, mm, ss,tot_sec;
	Time(){
		hh=mm=ss=tot_sec=0;
	}
	void calc(){

		if(ss>=60){
			mm+= ss/60;
			ss%=60;
		}
	
		if(mm>=60){
			hh+=mm/60;
			mm%=60;
		}
		tot_sec= (hh*3600) +(mm*60) +(ss);
	}

	int get_data()
	{
		cout <<

			"Enter the time in the format hh:mm:ss " << endl;

		cin >> hh >> mm >> ss;
	}
	void print_data(){
		calc();
		cout<<"Time is: "<<hh<<':'<<mm<<':'<<ss<<'\n';
		cout<<"Total seconds is :"<<tot_sec;
	}
};

int main()

{
	Time t1;

	t1.get_data();
	t1.print_data();

	return 0;
}
