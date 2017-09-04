#include<iostream>
#include<ctype.h>
using namespace std;

void cambio(char *c){
	
		*c=tolower(*c);
	switch(*c){
		case 'e' : *c='q'; break;
		case 'r' : *c='w'; break;
		case 't' : *c='e'; break;
		case 'y' : *c='r'; break;
		case 'u' : *c='t'; break;
		case 'i' : *c='y'; break;
		case 'o' : *c='u'; break;
		case 'p' : *c='i'; break;
		case '[' : *c='o'; break;
		case ']' : *c='p'; break;
		case 'd' : *c='a'; break;
		case 'f' : *c='s'; break;
		case 'g' : *c='d'; break;
		case 'h' : *c='f'; break;
		case 'j' : *c='g'; break;
		case 'k' : *c='h'; break;
		case 'l' : *c='j'; break;
		case ';' : *c='k'; break;
		case '\'' : *c='l'; break;
		case 'c' : *c='z'; break;
		case 'v' : *c='x'; break;
		case 'b' : *c='c'; break;
		case 'n' : *c='v'; break;
		case 'm' : *c='b'; break;
		case ',' : *c='n'; break;
		case '.' : *c='m'; break;
		case '/' : *c=','; break;
	}


}


int main(){

	string line;
	while(getline(cin,line)){
		int t=line.size();
		for(int i = 0 ; i < t ; i++){
			cambio(&line[i]);
			
		}
		for(int i = 0 ; i < t ; i++){
			cout<<line[i];
		}
		cout<<endl;
	}



	return 0;
}
