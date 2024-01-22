#include <iostream>
#include <stack>
using namespace std;

bool kiemTra(const string& chuoi) {
    stack<char> nganXep;

    for (int i = 0; i < chuoi.length(); i++) {
        char c = chuoi[i];

        if (c == '(' || c == '[' || c == '{') {
            nganXep.push(c);
        } else if (c == ')' || c == ']' || c == '}') {
            if (nganXep.empty()) {
                return false; 
            }
            char moNgoac = nganXep.top();
            nganXep.pop();

            if ((c == ')' && moNgoac != '(') ||
                (c == ']' && moNgoac != '[') ||
                (c == '}' && moNgoac != '{')) {
                return false; 
            }
        }
    }

    return nganXep.empty(); 
}

int main() {
    int num;
    cin >> num;
    
    string testCase[num];
    string result[num];

    for (int i=0; i<num; i++) {
        
        cin>>testCase[i];

        if (kiemTra(testCase[i])) {
        	result[i] = "true";
		}
		else{
			result[i] = "false";
		}
    }
    
    for(int j=0; j<num; j++){
    	cout<<result[j]<<endl;
	}
    

    return 0;
}
