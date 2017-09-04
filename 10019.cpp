#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
vector<int> num;
int binario(int n){
	if(n==1){
		num.push_back(n);
		return 1;
	}else{
		num.push_back(n%2);
		n/=2;
		return binario(n);
	}

}
int verificar(){
	int cont=0;
	for(int i = 0 ; i < num.size() ; i++){
		if(num[i]==1) cont++;
	}
	return cont;
}
int hexadecimal(int m){
	if(m<10){
		num.push_back(m);
		return 1;
	}else{
		num.push_back(m%10);
		m/=10;
		return hexadecimal(m);
	}

}
int binarioHex(){
	int aux=0;
	for(int i = 0 ; i < num.size() ; i++){
		aux+=pow(16,i)*num[i];
	}
	return aux;
}
int main(){
	int a,b,n,m,aux;
	cin >> n;
	while(n--){
		cin >> m;
		binario(m);
		a=verificar();
		num.clear();
		hexadecimal(m);
		aux=binarioHex();
		num.clear();
		binario(aux);
		b=verificar();
		num.clear();
		cout<< a <<" "<<b<<endl;
	}

	return 0;

}
