#include <iostream>
#include <string>

using namespace std;

int main()
{
    string MESSAGE = "1000011";
    string unaryMessage = "";
    //getline(cin, MESSAGE);
    //cout<<"Enter message to encrypt: "; getline(cin, MESSAGE);
    
    int i =0;
    while (i < MESSAGE.size())
	{ 
    	if (MESSAGE[i] == '1')
        {
            unaryMessage = unaryMessage.append("0 ");
            for (int j = i; MESSAGE[j] == '1';j++)
            {
                i++;
                unaryMessage.push_back('0');
            }
            unaryMessage.push_back(' ');
            
        }
        if (MESSAGE[i] == '0')
        {
            unaryMessage += "00 ";
            for (int j = i; MESSAGE[j] == '0'; j++)
            {
                i++;
                unaryMessage.push_back('0');
            }
            unaryMessage.push_back(' ');
        }
        
    }
    
    cout<<"Encoded message: "<<unaryMessage<<endl;
    
return 0;
}
		





