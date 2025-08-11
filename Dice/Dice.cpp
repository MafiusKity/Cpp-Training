#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	
	//Variable declaration
	int DiceSide;
	int DiceRow;
	int i=1;
	int result;
	
	//Parameters colecting
	cout<<"Number of sides from dice: ";
	cin>>DiceSide;
	cout<<"Number of scrolls: ";
	cin>>DiceRow;
	
	//Action!
	while(DiceRow>=i){
		srand(time(0)*i);
		result=rand()%DiceSide;
		if(result==0){
			result=DiceSide;
		}
		cout<<i<<"nd scroll: "<<result<<endl;
		i++;
	}
	return 0;
}
