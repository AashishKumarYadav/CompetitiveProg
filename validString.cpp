#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;

	int n = s.size();

	cout<<n<<endl;
	
	bool flag = true;

    string temp ;
    string discount;

	for(int i=0;i<n-1;i++)
	{
		//cout<<s[i];
		if(i<3 && !(s[i] >= 'A' && s[i]<='Z' ))
		{
            flag = false;
		}
		else if(i>2 && i<7)
		{   
            temp.push_back(s[i]);   
		}
		else if(i>6 && i<n)
		{
            discount.push_back(s[i]);
		}
	}

     int k = stoi(temp);
     int code = stoi(discount);

     bool flag1 = false;

    if(k>=1900 && k<=2019)
    {
    	flag1 = true;
    }

    bool flag2 = false;
    if(code == 10 || code == 20 || code == 50 || code == 100 ||code == 200 || code == 500 || code == 1000)
    {
    	flag2 = true;
    }
    //cout<<flag<<" "<<flag1<<" "<<flag2;

    if((n>=10 && n<= 12) &&(flag == true && flag1 == true && flag2 == true) && (s[n-1] >= 'A' && s[n-1] <= 'Z'))
    {
    	cout<<true;
    }
    else
    {
    	cout<<false;
    }

/*
input->>
AVG190420T
output->
1
*/
	return 0;
}