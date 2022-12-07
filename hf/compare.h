int compare(string fname,int line,string text)
{
	fname=full_name(fname);
	int x=1,end=0;
	string str,str2;
	
	ifstream read1;
	read1.open(fname);
	while(read1.eof()!=1)
	{
	getline(read1, str);
		if(str!=""|| str!="\n"|| str!="0")
		{
			
		end++;
		}	
	}	
	read1.close();
	if(end<line)
	{
		  x=2;
	}	
	else{
		ifstream read2;
	    read2.open(fname);
	   while(line!=0)
         {
	      getline(read2, str2);
		  line--;
	     }
	     if(str2.compare(text)==0)
	     {
		  x=0;
		  }
		  
	}
	
	return x;	
}	
