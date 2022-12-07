string read(string fname, int num)
{
	fname=full_name(fname);
	string str;
	ifstream read;
	   read.open(("%s",fname));
	if(read)
	{
	   while(read.eof()!=1)
	   {
		  if(num==1){
		   getline(read,str);
		   //return str;
		   break;
		  }
		  else{
		   getline(read,str);
		   str='0';
		   num--;
		   }
		}
	}
	else
	{
		str="0";
	}	
	return str;
}
