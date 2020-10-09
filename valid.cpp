#include <iostream>
using namespace std;
#include <vector>

/*
pangram tester
*/

int main()
{
	string word;
	vector<string> keywords;
	vector<string> identifiers;
	
	getline(cin,word);	
	while(word.compare("LAST")!=0)
	{
		keywords.push_back(word);
		getline(cin,word);
	}
	getline(cin,word);
	while(word.compare("END")!=0)
	{
		if(identifiers.empty())
		{
			identifiers.push_back(word);
		}
		else
		{
			identifiers.insert(identifiers.begin(),word);
		}
		getline(cin,word);
	}
	while(!identifiers.empty())
	{
		cout<<identifiers.back()<<" is ";
		bool key=true;
		for(int i=0; i<keywords.size(); i++)
		{
			if(identifiers.back().compare(keywords.at(i))==0)
			{
				key=false;
			}
			else if(!isalpha(identifiers.back().at(0)) && identifiers.back().at(0)-'$' !=0 &&  identifiers.back().at(0)-'_' !=0 )
			{
				key=false;
			}
			for(i=1; i< identifiers.back().length(); i++)
			{
				if(!isalnum(identifiers.back().at(i)) && identifiers.back().at(i)-'$' !=0 && identifiers.back().at(i)-'_' !=0 )
				{
					key=false;
				}
			}
		}
		if(key)
		{
			cout<<"valid"<<endl;
		}
		else
		{
			cout<<"invalid"<<endl;
		}
		identifiers.pop_back();

	}

	return 0;

}
