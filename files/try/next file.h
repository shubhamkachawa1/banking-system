
void next_file(int &line,int &x)
{
    string tempint,str="shub";
	ofstream write;
	write.open("files/main/main.txt");
	write.close();
	
	while(line!=6)
	{
	tempint=to_string(x);
if(compare("main/main",line,(str+tempint))==0)
		{
			line++;
		}
else if(compare("main/main",line,(str+tempint))==2)
		{
			break;
		}	
		x++;
	
			
	}	
	
}
