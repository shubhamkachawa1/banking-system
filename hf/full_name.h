using namespace std;
string full_name(string temp)
{
	string filename={"files/"};
      (filename.append(temp)).append(".txt");
      return filename;
}	
