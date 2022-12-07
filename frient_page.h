#include<string>
int fun1(string account)
{
	clrscr();
	string mpin;
	mpin=read(account,3);
	if(mpin.compare("x")==0)
	{
	 cout<<"make your mpin for trangction"<<endl;
	  cout<<"XXXX"<<endl;
	  cin>>mpin;
	    if((mpin.length())==4)
	    {
	     write_rewrite(account,mpin,3);
	     clrscr();
	     cout<<"mpin creat sessesfully";
	     sleep(3);
	    }
	    else
	    {
	      clrscr();
	     cout<<"mpin is only four charactor"<<endl;
	     cout<<"you can try after some time";
	     sleep(3);
	     frient(account);
	      
	    }
	}
	else
	{
		cout<<"mpin is allready creat by you";
		sleep(3);
	}
	clrscr();
	return 0;
}

int fun2(string account)
{
	//account detail
	int x;
    mpin_chack(account);
    cout<<account;
	string actype,acnumber,name,dob,gender;
	actype=read(account,1);
	acnumber=read(account,2);
	name=read(account,5);
	gender=read(account,6);
	dob=read(account,7);
	clrscr();
	cout<<endl<<endl;
	cout<<"    -----------------------------------------"<<endl;
	cout<<"       Account Type   "<<actype<<endl;
	cout<<"    -----------------------------------------"<<endl;
	cout<<"       AC number      "<<acnumber<<endl;
	cout<<"    -----------------------------------------"<<endl;
	cout<<"       Owner name     "<<name<<endl;
	cout<<"    -----------------------------------------"<<endl;
	cout<<"       Dob            "<<dob<<endl;
	cout<<"    -----------------------------------------"<<endl;
	cout<<"       Gender         "<<gender<<endl;
	cout<<"    -----------------------------------------"<<endl;
	
	getch();
	clrscr();
   return 0;
   
	
}
int fun3(string str)
{
	//amount transfear
	clrscr();
	string account,temp;
	int x=1,flage=0;
	cout<<"enter account number"<<endl;
	cin>>account;
	
if(account.compare(str)!=0)
{ 
	
	  while(x!=6)
	  {
		if(compare("main/main",x,account)==0)
		{
			flage=1;
			break;
	     }	
	     else
	     {
		   x++;
	     }
	  }
}
	if(flage==1)
	{
		mpin_chack(str);
		string accA,accB,amount2;
		int    acc1,acc2;
			int amount;
		
		   cout<<"  enter amount for transfear"<<endl<<"  ";
		   cin>>amount;
		   accA=read(str,4);
		   acc1=stoi(accA);
		   if(amount==0)
		   {
			   cout<<"you can't transfear 0 Rs";
			   sleep(3);
			   fun2(str);
		   }
		   else if(amount<=acc1)
		   {
	     	   amount2=to_string(amount);
		
		       accB=read(account,4);
		       acc2=stoi(accB);
		       acc2=acc2+amount;
		       accB=to_string(acc2);
		       write_rewrite(account,accB,4);
	    	   trangaction(account,(amount2+" credit"));
		
		
		       acc1=acc1-amount;
		       accA=to_string(acc1);
		       write_rewrite(str,accA,4);
		       trangaction(str,(amount2+" dabit"));
		
		       clrscr();
		       cout<<endl<<endl<<"Amount transfear secsfully"<<endl;
		       sleep(4);
		       clrscr();
		       return 0;
		   }
		   else
		   { 
		       clrscr();
	           cout<<endl<<endl<<"unsefecient balance"<<endl;
		       sleep(4);
		       clrscr();
		       return 0;
		   }
		
	}
   else
	{
	clrscr();
		
	cout<<"enterd account number is wrong please try again"<<endl;
	sleep(4);
	clrscr();
	return 0;
	}	
		
}	
int fun4(string account)
{
	//balance incoriry
	clrscr();
	mpin_chack(account);

	string amount;
	int choise;
	amount=read(account,4);
	clrscr();
	cout<<"  your balance is "<<amount<<" Rs"<<endl<<endl;
	cout<<"  press '1' for last 5 trangaction details"<<endl<<"  ";
	cin>>choise;
	if(choise==1)
	{
		cout<<endl;
		choise=12;
		string str;
	  while(choise!=7)
	  {
		  str=read(account,choise);
	  if(str.compare("0")==0||str.compare("\n")==0)
		 {
		 	choise--;
		 }
	  else
		 {
		 	cout<<"  "<<str<<endl;
		 	choise--;
		 }
		}
	   getch();
		
	}	
	clrscr();
	
	return 0;
}
int fun5(string account)
{
	//change mpin
	clrscr();
	string old,input;
	old=read(account,3);
	clrscr();
	if(old.compare("x")!=0)
	{
         cout<<"  Enter your old mpin"<<endl<<"  ";
	     cin>>input;
	     if(old.compare(input)==0)
	     { 
	       string New;
	       cout<<"  Enter your new mpin"<<endl<<"  ";
	       cin>>New;
	       if((New.length())==4)
	       {
	             write_rewrite(account,New,3);
	              cout<<"  mpin is changed"<<endl<<"  ";
	              sleep(4);
	              clrscr();
	              return 0;	
	        }
	        else
	        {
	        	clrscr();
	           cout<<"mpin is only four charactor"<<endl;
	           cout<<"you can try after some time";
	            sleep(4);
	            frient(account);
	        }
	     }
	    else
	     {
		   clrscr();
		   cout<<"  Wrong mpin input"<<endl;
		   sleep(4);
	       clrscr();
		   return 0;
	     }
	 }
	 else
	 {
	 	
	 	cout<<"In this account mpin is not creat"<<endl;
	 	sleep(3);
	 	fun1(account);
	 	return 0;
	 }	
}

int fun6(string account)
{
	//forget mpin
	string acc,name,mpin;
	int flage=1;
	clrscr();
	cout<<"enter account number"<<endl;
	cin>>acc;
	cout<<endl;
	if(acc.compare(read(account,2))==0)
	{
		write_rewrite(account,"x",3);
		fun1(account);
	}   
	else
	{
	   clrscr();
	   		cout<<"you have no any option for new mpin creaton"<<endl<<"you can close your account";
	   		sleep(3);
	  }
	return 0;
}	

int fun7(string account)
{
	//amount deposit
	clrscr();
	int amount,tamp;
	string Samount;
	cout<<"enter amount for deposit"<<endl;
	cin>>amount;
	
	mpin_chack(account);
	if(amount>0)
	{
		Samount=read(account,4);
		tamp=stoi(Samount);
		Samount=to_string(amount);
		trangaction(account,(Samount+" credit"));
		amount=amount+tamp;
		Samount=to_string(amount);
		write_rewrite(account,Samount,4);
		
		clrscr();
		cout<<"amount deposit successfully"<<endl;
	 }
	else
	{
		cout<<"Zero ruppy can't deposit"<<endl;
		
	}
	sleep(3);
	clrscr();
		
	return 0;
}	


int fun8(string account)
{
	//money withdrowl
	clrscr();
	int amount,tamp;
	string Samount;
	cout<<"enter amount for withdrowl"<<endl;
	cin>>amount;
	
	mpin_chack(account);
	
	if(amount>0)
	{
		
		Samount=read(account,4);
	    tamp=stoi(Samount);
		if(tamp>=amount)
		{
		    Samount=to_string(amount);
		    trangaction(account,(Samount+" dabit"));
		    amount=tamp-amount;
		    Samount=to_string(amount);
		    write_rewrite(account,Samount,4);
		
		    clrscr();
		    cout<<"amount withdrowl successfully"<<endl;
		 }
		 else
		 {
		 	clrscr();
		 	cout<<"unsefecent balance"<<endl;
		 	
		 }
		
	 }
	else
	{
		clrscr();
		cout<<"Zero ruppy can't withdrowl"<<endl;
		
	}
	sleep(3);
	clrscr();
		
	return 0;
}	

string fun9(string str)
{
	//unother account
	clrscr();
	string account;
	int x=1, sn=0;
	
	while(1)
	{
	     account=read("main/main",x);
	     if(account.compare("0")==0 || account.compare("\n")==0 || account.compare("")==0 )
		  {
			
		   break;
		  }
	  else
	    {
		   	if(str.compare(account)==0)
		   	{
		   		x++;
		   	}
		   	else
		   	{
		   	   sn++;
		  cout<<sn<<" Account no. XXXXXX"<<account.substr(6,10)<<endl;
		      x++;
		
		   	}
	      }	
	}		
	
	
    if(sn>0)
      {
	  
	int num;
 
	x=1;
    cout<<endl<<"press '0' for exit this function"<<endl;
	cout<<"please chouse a number"<<endl;
	cin>>num;
	clrscr();
    if(num==0)
     {
     	frient(str);
     }
   else if(num>=1 && num<=sn){	
       sn=0;
	while(num!=sn)
	{
	    account=read("main/main",x);
	     if(account.compare("0")==0 || account.compare("\n")==0 || account.compare("")==0 )
		  {
			
		   break;
		  }
	     else
	      {
		   	if(str.compare(account)==0)
		   	{
		   		x++;
		   	}
		   	else
		   	{
		   x++;
		   sn++;
		   	}
	     }	
	    
	 }
	clrscr();
	 frient(account);
     }
  }
  else
  {
  	clrscr();
  	cout<<endl<<"no unother account";
  	sleep(4);
  	clrscr();
  	frient(str);
  }  	
}
  
  
  
int fun10(string account)
{
	//open a new saving account
	clrscr();
	int line;
	line=Line(line);
	if(line<6)
	{
		clrscr();
		gs_data gs;
		gs.getdetals();
	}
	else
	{
		clrscr();
		
		cout<<endl<<endl<<endl<<"YOU HAVE ALLREADY OPEN 5 ACCOUNT IN THIS BANK"<<endl;
		sleep(4);
		clrscr();
		return 0;
		 
	}		
}	
int fun11(string str)
{
	//account closing
	clrscr();
	string account;
	int x=1, sn=1;
	
	while(1)
	{
	     account=read("main/main",x);
	     if(account.compare("0")==0 || account.compare("\n")==0 || account.compare("")==0 )
		{
		   break;
		}
	     else
		{
		 cout<<x<<" Account no. XXXXXX"<<account.substr(6,10)<<endl;
		   x++;
		   
		}		
	}	
		
	int num;
	x--;
	cout<<"select a number"<<endl;
	cin>>num;
	clrscr();
	if(num>=1 && num<=x)
	{
	  mpin_chack(read("main/main",num));
	close(read("main/main",num));
	clrscr();
	cout<<endl<<"account close secessfully"<<endl;	
	sleep(3);
	return 0;
	}
	else
	{
	clrscr();
	 cout<<"please try again"<<endl;
	sleep(3);
	clrscr();
	return 0;
	}			
}	



	
void frient(string account)
{
clrscr();
   string name;
   name=read(account,5);
   name=space(name);
   
  cout<<"    -----------------------------------"<<endl;
  cout<<"    |            SHUBH BANK            |"<<endl;
  cout<<"    -----------------------------------"<<endl;   
 cout<<"    |   Account no: XXXXXX"<<account.substr(6,10)<<"         |"<<endl;
  cout<<"    |   Name is: "<<name<<"|"<<endl;
   cout<<"    -----------------------------------"<<endl<<endl<<endl;
 
 int choise;
cout<<"press 1 for creat mpin"<<endl;
cout<<"press 2 for account detail"<<endl;
cout<<"press 3 for amount transfear"<<endl;
cout<<"press 4 for balance incoriry"<<endl;
cout<<"press 5 for change mpin"<<endl;
cout<<"press 6 for forget mpin"<<endl;
cout<<"press 7 for money deposit"<<endl;
cout<<"press 8 for money withdrowl"<<endl;
cout<<"press 9 for unother account"<<endl;
cout<<"press 10 for open a new saving account"<<endl;
cout<<"press 11 for account closing"<<endl; 
cout<<"press 12 for exit from app"<<endl;
cin>>choise;
   switch(choise)
   {
    case 1:
    fun1(account);
   frient(account);
    break;
    
    case 2:
    fun2(account);
    frient(account);
    break;
    
    case 3:
    fun3(account);
    frient(account);	
    break;
    
    case 4:
    fun4(account);
    frient(account);	
    break;
    
    case 5:
    fun5(account);
    frient(account);
    break;
    
   	case 6:
   	fun6(account);
   	frient(account);
   	break;
   	
   	case 7:
   	fun7(account);
   	frient(account);
    break;
    
   	case 8:
   	fun8(account);
   	frient(account);
    break;
   	
    case 9:
    fun9(account);
    frient(account);
    break;
    
    case 10:
    fun10(account);
    break;
    
    case 11:
    fun11(account);
    frient(account);
    break;
   	
   	case 12:
   	exit(1);
    break;
   	
    default:
    clrscr();
    cout<<endl<<endl<<"wrong input enterd by you"<<endl;
    sleep(4);
    clrscr();
    frient(account);
    break;
   };
}
void otp(string  account)
{
	clrscr();
	int flage,choise,ot,input;
	srand(time(NULL));
	ot=(rand()%1000000);
cout<<"your OTP is "<<ot<<endl;
sleep(4);
	clrscr();
cout<<"  Enter OTP for canformation"<<endl<<"  ";
	cin>>input;
	if(ot==input)
	{   
		clrscr();
		frient(account);
	}
	else
	{
		gs_data gd;
		cout<<"  Wrong OTP"<<endl;
		sleep(1);
		clrscr();
		cout<<"  Plise try again"<<endl;
		sleep(2);
		clrscr();
		cout<<"press '1' for reseve OTP"<<endl;
		cin>>choise; 
		if(choise==1)
		{
			 otp(account);
		}	
		else
		{
		gd.getdetals();
		}	
	}
}

int mpin_chack(string  account)
{
	clrscr();
	int x=0;
	string input,mpin;
	mpin=read(account,3);

	if(mpin.compare("x")==0)
	{   
		char choise;
		cout<<"press '1' for creat mpin"<<endl;
		cout<<"press any key for skip"<<endl;
		cin>>choise;
		if(choise=='1')
		{
		fun1(account);
		mpin=read(account,3);
		}
		else
		{
			frient(account);
		}		
	}
	if(mpin.compare("x")!=0)
	{
		cout<<"  Enter mpin for canformation"<<endl<<"  ";
	    cin>>input;
	    if (mpin.compare(input)==0)
	    {
	    	x=1;
	    }
	    else
	    {
		cout<<"  Wrong mpin"<<endl;
		sleep(1);
		clrscr();
		cout<<"  Plieas try again"<<endl;
		sleep(2);
		clrscr();
		frient(account);
	    	
	    }
	}
  return x;	
}

string space(string name)
{
	int len;
	len=name.length();
	while(len!=22)
	{
		name=name.append(" ");
		len++;
	}
	return name;
}
