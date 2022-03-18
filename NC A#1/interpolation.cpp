#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	 float x[100], y[100], x_p, y_p=0, p;
	 int i,j,num;

	 cout<<"Enter number of data: ";
	 cin>>num;
	 cout<<"Enter data:"<< endl;
	 for(i=1;i<=num;i++)
	 {
		  cout<<"x["<< i<<"] = ";
		  cin>>x[i];
		  cout<<"y["<< i<<"] = ";
		  cin>>y[i];
	 }
	 cout<<"Enter interpolation point: ";
	 cin>>x_p;

	 for(i=1;i<=num;i++)
	 {
		  p=1;
		  for(j=1;j<=num;j++)
		  {
			   if(i!=j)
			   {
			    	p = p* (x_p - x[j])/(x[i] - x[j]);
			   }
		  }
		  y_p = y_p + p * y[i];
	 }
	 cout<< endl<<"Interpolated value at "<< x_p<< " is "<< y_p;

	 return 0;
}


