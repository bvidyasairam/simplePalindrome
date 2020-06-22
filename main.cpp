#include <iostream>

using namespace std;

int main()
{
    char strValue[]="21212";
    int i=0,j=4;
    while(i!=j)
    {
        if(strValue[i]==strValue[j])
        {
            i++;
            j--;
        }
        else
            break;
    }
    if(i==j)
        cout<<"It is a palindrome";
    else
        cout<<"Not a palindrome";
    //cout << "Hello world!" << endl;
    return 0;
}
