#include<iostream>
using namespace std;

//ไม่ต้องเติม function main()

char before(char x){
    if(x=='A'){
        x='Z';
    }
    else if(x>65&&x<=90){
        x=x-1;
    }else{
        x='0';
    }
    return x;
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
