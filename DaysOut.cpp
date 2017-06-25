// Name: Ali Bayati 
// Days Out  


#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int NumOfEmp();
int NumOfDay(int);
double AvgNum(int , int );
int getx(string ,int );


int main()
{
	
	int e, d;
	double avg;
		
	e = NumOfEmp();
	d = NumOfDay(e);
	avg = AvgNum(e, d);
	cout << fixed << setprecision(1);
	
	cout << "The avarge number of days the company employees are absent :" << avg << endl;


	return 0;
}
int NumOfEmp()
{
	int x;
	cout << "Enter number of employees : ";
	x = getx("Error number of employees can't be less than ", 1);
	
		return x;

}
int NumOfDay(int e)
{
	int x, tot =0 , c=1;
	
	while (e > 0)
	{
		cout << "Enter number of days missed during the past year for Employee #" << c << ":";
		x = getx("Error number of days missed can't be less than ", 0);
		tot =tot + x;
		e--;
		c++;
	}
	
	return tot;

}
double AvgNum(int e, int d)
{
	double x;
	x = double (d) / double(e);
	
	return x;

}
int getx(string msg, int y)
{
	int x;
	
	cin >> x;

	while (x < y)
	{
		
		cout << msg << y << " try again :";
		cin >> x;
	}

	return x;
}
/*Output
Enter number of employees : 0
Error number of employees can't be less than 1 try again :-1
Error number of employees can't be less than 1 try again :4
Enter number of days missed during the past year for Employee #1:-1
Error number of days missed can't be less than 0 try again :0
Enter number of days missed during the past year for Employee #2:4
Enter number of days missed during the past year for Employee #3:1
Enter number of days missed during the past year for Employee #4:5
The avarge number of days the company employees are absent :2.5
Press any key to continue . . .*/