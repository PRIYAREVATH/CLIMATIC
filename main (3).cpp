/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

/*m.priya tharshini
 vivekanandha college of engineering for women
 class and Objective
 conditional statement
 switch case*/

 class weatherapp
{
 private:
        string  todayweather;
        string  yesterdayweather;
        string  tomorrowweather;
        string  weekendweather;
        string  monthlyweather;
        string  weekreport;
        string  monthreport;
        int temp;
 public:
       void printHeading(const string& heading)
       {  
           cout<<"\n\n";
           cout<<"====================================="<<endl;
           cout<<heading<<endl;
           cout<<"====================================="<<endl;
       }
       void printtodayweather() {
           printHeading("today");
           if(temp>=1000)
           {
               cout<<"it is hot"<<endl;
           }
           else if((temp<=100)&&(temp>=900))
           {
               cout<<"it is rainy"<<endl;
           }
           else if((temp<=30)&&(temp>100))
           {
               cout<<"it is cloudy"<<endl;
           }
           else
           {
               cout<<"it is snowing"<<endl;
           }
       }
       void printyesterdayweather()
       {
           printHeading("yesterday");
           if(temp>=1000)
           {
               cout<<"it is hot"<<endl;
           }
           else if((temp<=100)&&(temp>=900))
           {
               cout<<"it is rainy"<<endl;
           }
           else if((temp<=30)&&(temp>100))
           {
               cout<<"it is cloudy"<<endl;
           }
           else
           {
               cout<<"it is snowing"<<endl;
           }
       }
       void printtomorrowweater()
       {
           printHeading("tomorrow");
           if(temp>=1000)
           {
               cout<<"it is hot"<<endl;
           }
           else if((temp<=100)&&(temp>=900))
           {
               cout<<"it is rainy"<<endl;
           }
           else if((temp<=30)&&(temp>100))
           {
               cout<<"it is cloudy"<<endl;
           }
           else
           {
               cout<<"it is snowing"<<endl;
           }
       }
       void printweekendweather()
       {
           printHeading("week report");
           for(int i=0;i<7;i++)
           {
               cout<<"day"<<i+1<<":"<<weekreport[i]<<endl;
           }
       }
        void printmonthlyweather()
       {
           printHeading("month report");
           for(int i=0;i<12;i++)
           {
               cout<<"month"<<i+1<<":"<<monthreport[i]<<endl;
           }
       }
};
int main()
{
    string loc;
    int choice;
    int temp;
    weatherapp app;
    string weekreport[7]={"sunny","cloudy","rainy","snowing","sunny","cloudy"};
    string monthreport[12]={"sunny","cloudy","rainy","snowing","sunny","cloudy","rainy","snowing","sunny","cloudy"};
    cout<<"enter a location:"<<endl;
    cin>>loc;
    cout<<"day option\n";
    cout<<"1.today\n";
    cout<<"2.yesterday\n";
    cout<<"3.tomorrow\n";
    cout<<"4.week\n";
    cout<<"5.month\n";
    cout<<"enter your choice(1-5):"<<endl;
    cin>>choice;
    
    switch(choice)
    {
        
        case 1:
           cout<<"enter the temp:"<<endl;
           cin>>temp;
           app.printtodayweather();
           break;
        case 2:
           cout<<"enter the temp:"<<endl;
           cin>>temp;
           app.printyesterdayweather();
           break;
        case 3:
           cout<<"enter the temp:"<<endl;
           cin>>temp;
           app.printtomorrowweater();
           break;
        case 4:
            app.printweekendweather();
            break;
        case 5:
            app.printmonthlyweather();
            break;
    }
    return 0;
    
}