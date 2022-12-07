void write_file(int num,int line,string fname,string text)
{
	string fs,tempn="files/temp.txt";
	
	ofstream temp;
    temp.open(tempn);
    
    ifstream read;
    read.open(fname);
    
   	while(line!=0)
    {
    		getline(read,fs);
    		temp<<fs+'\n';
    		line--;
    }
    temp<<text;	
    remove(fname.c_str());
    rename(tempn.c_str(),fname.c_str());
    	
    
}

void rewrite_file(int num,int line, string fname,string text)
{
	string fs,tempn="files/temp.txt";
	
	ofstream temp;
    temp.open(tempn);
    
    ifstream read;
    read.open(fname);
    
	while(num!=0)
	{
		if(num==1)
		{
			
			temp<<text;
			temp<<'\n';
			getline(read,fs);
			while(read.eof()!=1)
			{
				getline(read,fs);
			
		        temp<<fs;
		        temp<<'\n';
			}
			break;
		}
		else if(read.eof()!=1)
		{	
		getline(read,fs);	
		
		temp<<fs;
		temp<<'\n';	
		num--;	
		}		
	}
    remove(fname.c_str());
    rename(tempn.c_str(),fname.c_str());
	
}	

void write_rewrite(string fname,string text,int num)
{
	fname=full_name(fname);
	//
	ofstream w;
    w.open(fname,ios::app);
	w.close();
	//
	
	int line=0,tell;
	string temp;
	
	ifstream read_ectualfile;
	read_ectualfile.open(fname);
	
	while(read_ectualfile.eof()!=1)
		{	
			getline(read_ectualfile,temp);
			if(temp=="\0")
			{			
			}
			else
			{
				line++;
			}	
				
		}
		
		if(num==(line+1))
		{
			write_file(num,line,fname,text);
		}	
		else if(num<=line)
		{
			rewrite_file(num,line,fname,text);
		}	
	    else
		{
cout<<"we can't perform this instraction"<<endl;
		}	
}
