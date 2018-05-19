


#include <iostream>
#include <dirent.h>
#include <stdio.h>
#include <string>
#include <sstream>
using namespace std;


void walkDir(const string str){


DIR *dir;
struct dirent *ent;
if ((dir = opendir (str.c_str())) != NULL) {
  /* print all the files and directories within directory */
  while ((ent = readdir (dir)) != NULL) {

    if(ent->d_type==16){

string dot=".";
string doubleDot="..";
string dName(ent->d_name);

//cout<<(dName.compare(dot)&&dName.compare(doubleDot))<<endl;
if((dName.compare(dot)&&dName.compare(doubleDot))){
    cout<<"directory "<<endl;   
    string d=str+(dName)+"\\";
    cout<<"\t\t"<<d<<endl;
    walkDir(d);
}else{
cout<<"directory . .. "<<endl;   
    cout<<"\t\t"<<ent->d_name<<endl;
}
}else{
//    cout<<"file "<<endl;
    //printf ("%s:%d\n", ent->d_name,ent->d_type);
	cout<<"file"<<endl;
	cout<<"\t\t\t\t"<<ent->d_name<<endl;
	
}
  }
  closedir (dir);
} else {
  /* could not open directory */
    cout<<"error"<<endl;

}




}


int main(int argc,char *argv[]){

//const string str ="c:\\windows\\";

if(argc<2){
cout<<"arg"<<endl;
return -1;
}

const string str=argv[1];

walkDir(str);


return 0;
}

