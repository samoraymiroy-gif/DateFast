#include <iostream>
using namespace std ;

int x_day = 7 ; 
int max_day ;
int max_month = 12 ;

int year = 2026 ;
int day , month ;

void calcudate(int day , int month)
{
    int point_x[12]={-4,0,0,-3,-5,-1,-3,-6,-2,-4,0,-2} ;
    string showday[7] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"
};
    int calcu_day ;
    if(month>0 and month<=12)
    {
        if(month == 2)
        {
            max_day = 28 ;
        }
        else if ((month<=7 and month%2!=0) or (month>=8 and month%2==0))
        {
            max_day = 31 ;
        }
        else
        {
            max_day = 30 ;
        }
    }
    if(max_day>=day and max_month>=month)
    {
        cout<<"Date : "<<year<<"/"<<month<<"/"<<day<<endl ;
        calcu_day = (day - point_x[month-1] + x_day )%7;
        if(calcu_day == 0){calcu_day = 7 ;}
        cout<<"The corresponding day : "<<showday[calcu_day-1]<<endl ;
    }
    else
    {
        cout<<"The date you entered is incorrect."<<endl ;
    }
}



int main()
{
    while(true)
    {
    cout<<"Enter Day : ";
    cin>>day ;
    cout<<"Enter Month : ";
    cin>>month ;
    calcudate(day , month) ;
    }
    

}