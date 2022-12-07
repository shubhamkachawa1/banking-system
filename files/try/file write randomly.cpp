#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

// this function used for creat a full name of a file
string fullname(string temp)
{
	string filename={"files/"};
      (filename.append(temp)).append(".txt");
      return filename;
      
	
}	
int wline(string fname)
{
	int num=0;
	string temp;
	
	ifstream read_ectualfile;
	read_ectualfile.open(fname);
	
	while(read_ectualfile.eof()!=1)
			{
			getline(read_ectualfile,temp);
			num++;
			}
		return num;	
}

void writefile(int num,string fname,string text)
{
	string str;
	int line;
	
	
	
	
	fname=fullname(fname);
	line=wline(fname);
	cout<<line;
	string temp_file_name={"files/temp.txt"};
	
	
	/*ofstream write_ectualfile;
	write_ectualfile.open(fname);
	write_ectualfile.close();*/
	
	
	
	
	ofstream temp;
	temp.open(temp_file_name);
	
	ifstream read_ectualfile;
	read_ectualfile.open(fname);
	
	while(num!=0)
	{
		if(num==1)
		{
			
			temp<<text;
			temp<<'\n';
			while(read_ectualfile.eof()!=1)
			{
				getline(read_ectualfile,str);
				//cout<<str;
				//
			
		        temp<<str;
		        temp<<'\n';
			}
			break;
		}
		else if(read_ectualfile.eof()!=1)
		{	
		getline(read_ectualfile,str);
		//cout<<str;	
		
		temp<<str;
		temp<<'\n';	
		num--;	
		}
		
		else
		{
		temp<<'\n';	
		num--;	
			
		}		
	}
	
	remove("files/shub1.txt");
	rename("files/temp.txt","files/shub1.txt");

	
}

int main()
{
	string fname,text;
	int num;
	/*cout<<"enter your file name  ";
	cin>>fname;cout<<endl;
	cout<<"what text put into this file  ";
	cin>>text;cout<<endl;
	cout<<"enter line number  ";
	cin>>num;cout<<endl;*/
	writefile( 6,"shub1","six");
}
