#include <iostream>
using namespace std;

int add()
{
	int a,b,c = 0;
	
	cout << "  Enter first number :-" ;
	cin >> a ;
	cout <<"  Enter second number :-" ;
	cin >> b ;
	
	c = a + b;
	
	printf ("  Addition of %d and %d is %d\n",a,b,c);
	
	return 0;
}

int min()
{
	int d,e,f = 0;
	
	cout << "  Enter first number :-" ;
	cin >> d ;
	cout << "  Enter second number :-" ;
	cin >> e ;
	
	f = d - e;
	
	printf ("  Subtraction of %d and %d is %d\n",d,e,f);
	
	return 0;
}

int mul()
{
	int g,h,j = 0;
	
	cout << "  Enter first number :-" ;
	cin >> g ;
	cout << "  Enter second number :-" ;
	cin >> h ;
	
	j = g * h;
	
	printf("  Multiplication of %d and %d is %d\n",g,h,j);
	
	return 0;
}

int div()
{
	int m,n;
	
	cout << "  Enter first number :-" ;
	cin >> m ;
	cout << "  Enter second number :-" ;
	cin >> n ;
	
	 if (n == 0) 
	 {
        cout << "  Error: Cannot divide by zero" << endl ;
      } else 
		{
            printf("  Division of %d and %d is %d\n", m,n,m/n);
        }
        
        return 0;
}

int mod()
{
	int p,q,r = 0;
	
	cout << "  Enter first number :-" ;
	cin >> p ;
	cout << "  Enter second number :-";
	cin >> q ;
	
	r = p % q;
	
	printf("  Modulo of %d and %d is %d\n",p,q,r);
	
	return 0;
}

int def()
{
	cout << "  Enter right choice..." << endl ;
	
	return 0;
}

int main()
{
	int i;
	
	int choice;

	do
	{
	 cout <<endl << "  Press 1 for +" << endl ;
	 cout << "  press 2 for -" << endl ;
	 cout <<"  press 3 for *" << endl ;
	 cout <<"  press 4 for /" << endl;
	 cout <<"  press 5 for %" << endl;
	 cout <<"  press 0 for exit"<< endl << endl;
	

		cout << "  Enter your choice :- " ;
		cin >> choice ;
		
		cout << endl ;
		
		 if (choice == 0) 
	   {
            break;
        }
		
		switch(choice)
		{
			case 1:
				add();
				break;
			case 2:
				min();
				break;
			case 3:
				mul();
				break;
			case 4:
				div();
				break;
			case 5:
				mod();
				break;
			default:
				def();
		}
	}while(9);

return 0;
}