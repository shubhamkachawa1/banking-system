void trangaction(string fname,string text)
{
	string str;
	int num=8;
 while(num!=13)
 {
	str=read(fname,num);
   if(str.compare("\n")==0 || str.compare("0")==0 || str.compare("")==0 )
    {
   	write_rewrite(fname,text,num);
   	break;
    }
   else if(num==12)
    {
   	     int temp=8;
    	while(temp!=13)
   	    {
     	write_rewrite(fname,(read(fname,temp+1)),temp);
   		temp++;
        	if(temp==12)
   		     {
   	        	write_rewrite(fname,text,temp);	
   	        	break;
   	        	num=13;
   		     }
     	 }
     	 break;
   	 }
   else
    {
    	num++;
    }
  }
}