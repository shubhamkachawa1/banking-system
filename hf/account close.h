int close(string account_no)
{
     string str;
     int num=1;
     ofstream temp;
     ifstream main;
     main.open("files/main/main.txt");
     temp.open("files/main/temp.txt",ios::app);
    while(main.eof()!=1)
     {
	   getline(main,str);
	
        if(str.compare(account_no)==0)
         {
         	continue;
          }
       else
          {
          	num++;
           temp<<str<<'\n';
          }
      }
      account_no=full_name(account_no);
      remove(account_no.c_str());
      remove("files/main/main.txt");
      rename("files/main/temp.txt","files/main/main.txt");
      return 0;
}
