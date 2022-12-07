
typedef class gs_data{
	
	string first, middle,last;
	string fullname,gender,mobile,dob;
	char choise;
	int sr=1,acctype;
	int line;
	
	
	public:
	int setdetals();
	int getdetals();
};
int gs_data ::setdetals()
 {
 	clrscr();
	string str=mobile;
	line=Line(line);
	write_rewrite("main/main",str,line);
	write_rewrite(str,"saving AC",1);
	write_rewrite(str,mobile,2);
	write_rewrite(str,"x",3);
	write_rewrite(str,"1000",4);
	write_rewrite(str,fullname,5);
	write_rewrite(str,gender,6);
	write_rewrite(str,dob,7);
	trangaction(str,"1000 credit");
	frient(read("main/main",1));
	return 0;
}
  
int gs_data :: getdetals()
  {
  	clrscr();
	cout<<"             # WELCOME TO THE SHUB BANK #" <<endl<<endl;
	// nameing data inserting code saction
	cout<<sr<<" *enter first name"<<endl<<"   ";
	cin>>first;
	fullname=first+" ";
	sr++;
	
	cout<<"   if middle name not exisit press 'n'"<<endl<<"   ";
    cout<<"else press 'y'"<<endl<<"   ";
	cin>>choise;
	if(choise=='y' || choise=='y')
	{
	cout<<sr<<" enter middle name"<<endl<<"   ";
		cin>>middle;
		fullname=fullname+middle+" ";
		sr++;
	}	
	else if(choise=='n' || choise=='N')
	{
	cout<<sr<<" *enter last name"<<endl<<endl<<"   ";
	cin>>last;
	   fullname=fullname+last;
	   sr++;	
	}
	else
	{
		cout<<"wrong input intered"<<endl<<"   ";
		sleep(3);
		clrscr();
	    sr=1;
		getdetals();
	}
	// gender code saction
	cout<<sr<<"enter your gender"<<endl<<"   ";
	cout<<"press 'm' for male"<<endl<<"   ";
	cout<<"press 'f' for femal"<<endl<<"   ";
	cout<<"press 't' for transgender"<<endl<<"   ";
	cin>>gender;
	
	cout<<endl<<endl<<"   ";
		if(gender.compare("m")==0)
		{
			gender="male";
			sr++;
		}
		else if(gender.compare("f")==0)
		{
			gender="female";
			sr++;
		}
		else if(gender.compare("t")==0)
		{
			gender="transgender";
			sr++;
		}			
		else
	    {
		cout<<"wrong input intered"<<endl<<"   ";
		sleep(3);
		clrscr();
	    sr=1;
		getdetals();
		}
	  //mobile number
       cout<<sr<<"*enter your mobile number"<<endl<<"   ";
       cout<<"xxxxxxxxxx"<<endl<<"   ";
	   cin>>mobile;
	    int len=mobile.length();
		
		if(len==10)
		{
		int y=1;
		ofstream write;
		write.open("files/main/main.txt",ios::app);
		write.close();
		while(y!=6)
		{
			if(compare("main/main",y,mobile)==0)
			{
				clrscr();
				cout<<endl<<endl<<endl;
				cout<<"YOUR HAVE ALLREADY OPEN ACCOUNT USING THIS NUMBER PLEASE TRY AGAN"<<endl;
				sleep(4);
				clrscr();
				sr=1;
				getdetals();
				
				
			}
			else
			{
				y++;
					
			}
		}
	   sr++;
		}
		else
		{
			sr=1;
			clrscr();
			cout<<"wrong mobile number intered";
			sleep(3);
			getdetals();	
		}
	
	// dob code saction
	
	   cout<<sr<<"*enter your dob"<<endl<<"    ";
	   cout<<"xx/xx/xxxx"<<endl<<"    ";
	   cin>>dob;
	   sr++;
	   cout<<endl<<"    ";	
	
	  // t&c code section
	   tandcprint();
	   clrscr();		
       cout<<endl<<endl<<"   your name is "<<fullname<<endl;
	   cout<<"   your gender is "<<gender<<endl;
	   cout<<"   your dob is "<<dob<<endl;
	   cout<<"   your mobile is "<<mobile;
	   cout<<endl<<endl;
	 
	  cout<<"   this information is currect press 'y'"<<endl;
	  cout<<"   press 'r' for renter your data"<<endl<<"   ";
	cin>>choise;
	if(choise=='y' || choise=='Y')
	{
	
	      clrscr();
	    int ot,input;
	      srand(time(NULL));
	     ot=(rand()%1000000);
          cout<<"your OTP is "<<ot<<endl;
         sleep(6);
	    clrscr();
         cout<<"  Enter OTP for canformation"<<endl<<"  ";
	     cin>>input;
	    if(ot==input)
	    {   
		   clrscr();
		   setdetals();
		   clrscr();
		   return 0;
	    }
	   else
	   {
		//gs_data gd;
		cout<<"  Wrong OTP"<<endl;
		sleep(1);
		clrscr();
		cout<<"  Plise try again"<<endl;
		sleep(2);
		clrscr();
		sr=1;
		getdetals();
		}
    }
	
	
	else
	{
		
		clrscr();  
		cout<<"wrong input enterd";
		sleep(3);
		sr=1;
		getdetals();
	}		
  }

void main_chack()
{
	string account;
	account=read("main/main",1);
	
	if(account.compare("0")==0 || account.compare("")==0 || account.compare("\n")==0)
	{
	  gs_data gs;
	  gs.getdetals();
	}
	else
	{
		
		frient(account);
	}		
} 
