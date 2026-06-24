#include <iostream>
using namespace std ;

int x_day ; 
int max_day ;
int max_month = 12 ;

int k = 0 ;

int year ; // year[2000 - 2099]
int day , month ;

void calcudate(int day , int month)
{
    int point_x[12]={-4,0,0,-3,-5,-1,-3,-6,-2,-4,0,-2} ;
    string showday[7] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"
};
    int calcu_day ;
    if(month>0 and month<=12)
    {
        if((year%400==0) or (year%4==0 and year%100!=0))// تعديلات بخصوص السنة الكبيسة 
            {
                k=1 ;
                point_x[0]+=1 ;
                point_x[1]+=1 ;
            }

        if(month == 2)
        {
            max_day = 28 ;
            if(k==1){max_day=29 ;}

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
    cout<<"Enter Year : ";
    cin>>year ;
    x_day = ((year%100)/4+(year%100)+3);
    if (year>=2000 and year<2100)
    {
        calcudate(day , month) ;
    }
    else{
        cout<<"The range of years [2000 - 2099]"<<endl ;
    }
    
    }
    

}
