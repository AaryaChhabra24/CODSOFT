#include <iostream> 
using namespace std;
int main()
{
	float a,b,c;
	int ch;
	cout<<"***** A simple calculator *****";
	do
	{
	
	    cout<<"\n\nEnter 1 for addition";
     	cout<<"\t\t\tEnter 2 for subtraction";
    	cout<<"\nEnter 3 for multiplication";
	    cout<<"\t\tEnter 4 for division";
    	cout<<"\nEnter 5 for exit";
    	cout<<"\n\nEnter your choice : ";
      	cin>>ch;
    	switch (ch)
    	{
		case 1:
			cout<<"\nEnter any two number : ";
			cin>>a>>b;
			c=a+b;
			cout<<"\nAnswer = "<<c;
			break;
		case 2:
            cout<<"\nEnter any two number : ";
            cin>>a>>b;
            c=a-b;
            cout<<"\nAnswer = "<<c;
            break;
		case 3:
            cout<<"\nEnter any two number : ";
            cin>>a>>b;
            c=a*b;
            cout<<"\nAnswer = "<<c;
            break;
		case 4:
            cout<<"\nEnter any two number : ";
            cin>>a>>b;
            c=a/b;
            cout<<"\nAnswer = "<<c;
            break;
		case 5:
			return 0;
		default :
			cout<<"\nEnter correct choice ";
	    }
	}
	while(1);
	return 0;
	
		
	
}
