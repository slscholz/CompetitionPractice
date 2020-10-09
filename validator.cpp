#include <iostream>
using namespace std;
#include <stdlib.h>

//ISBN Validator Problem

int main()
{
	int cases;
	do{
	
		cout<<"Enter the number of cases"<<endl;
		cin>>cases;					

	}while(cases<=0);
	
	cin.ignore();
	//string ISBN;
	for(int i=0; i<cases; i++)
	{
		int total=0;
		int answer=0;
		//cin.clear();
		string ISBN;
		getline(cin,ISBN);
		
		if(ISBN.length()==10)
		{	
			cout<<"worky"<<endl;
			for(int j=0; j<ISBN.length(); j++)
			{	
				if(ISBN.at(j)=='X' && j==9)
				{
					total+=(j+1)*10;
				}
				else if(ISBN.at(j)=='X' && j!=9)
				{
					cout<<"false"<<endl;
				}
				else
				{
					total+=(j+1)* (int) ISBN.at(j);// atoi(ISBN.at(j)+ "");
				}
			}
			answer=total%11;
			if(answer==0)
			{
				cout<<"true"<<endl;
			}
			else
			{	
				cout<<"false"<<endl;
			}			
		}
		else
		{
			cout<<"false"<<endl;
		}
	}

	return 0;
}
