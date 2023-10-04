#include <iostream>
#include <iomanip> // For setw
using namespace std;
int main()
{
    char *month[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int daysinmonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int space = 0,year,i,j;
    int newline = 0;
    cout<<"Please specify which year's calendar you would like to see : \n";
    cin>>year;
    cout<<"---------------------WELCOME TO "<<year<<"----------------------"<<endl;
    //CHECKING TAKEN YEAR IS LEAP YEAR OR NOT
    if ((year%4==0 && year%10!=0)|| year%400==0){
        daysinmonth[1]= 29;
    }
    //newline Determine which day the year will begin from
    newline= (year * 365 + ((year - 1) / 4) - ((year - 1) / 100) + ((year - 1) / 400)) % 7;
    for (i = 0; i < 12; i++)
    {
        cout << "\n\n\n------------------------ " << month[i] << " ------------------------\n";
        cout << "\n   Sun     Mon     Tue     Wed     Thu     Fri     Sat\n";
        for (space = 1; space <= newline; space++)
        {
            cout <<setw(8)<<" ";
        }

        int days = daysinmonth[i];
        for ( j = 1; j <= days; j++)
        {
            cout << setw(6) << j << "  "; // Use setw to set width for alignment
            newline++;
            if (newline >6)
            {
                cout << endl;
                newline = 0;
                
            }
        }
          cout<<endl;
    }

    return 0;
}
