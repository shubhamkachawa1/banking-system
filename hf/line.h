int Line(int line)
{
	line=0;
	string fname,str;
	fname=full_name("main/main");
	ofstream write;
	write.open(("%s",fname),ios::app);
	write.close();
	
	ifstream read1;
	read1.open(fname);
	while(read1.eof()!=1)
	{
	getline(read1, str);
		if(str.compare("\n")==0||str.compare("0")==0||str.compare("")==0)
		{	
		
		}	
		else
		{
			line++;
		}	
	}	
	line++;
	
	return line;
}