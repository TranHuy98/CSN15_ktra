#include <iostream>
using namespace std;

int main(){
	int monsters, durabality, gold, decrease;
	
	cin>> monsters>> durabality>> decrease>> gold;
	
	int maxHit = durabality/decrease;
	
	int repairTimes = monsters/maxHit;
	
	int repairGold = gold*repairTimes;
	
	if(durabality<decrease){
		return -1;
	}
	else cout<<repairGold;
}
