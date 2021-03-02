#include<iostream>
#include<vector>
using namespace std;
vector<int> char_to_num()
{
    string str;
vector<int> v1;

cout<<"enter the text [A_Z][0-9]\n";
cin>>str;
//char to number
    for(int i=0;i<str.size();i++)
    {
        int j=str[i];//fetching ascii value of char and digits
        if(j>=65&&j<=90) //if input is char
        {v1.push_back(j%65);
        }
        else if(j>=48&&j<=57)//if input is digit
        {v1.push_back((j+(j%44))/2);
        }
    }
return v1;
}

void encryption(int k1, int k2)
{vector<int> v1=char_to_num();
    //encryptiom
    for(int i=0;i<v1.size();i++)
        {
           cout<<v1[i]<<"  ";
        }
        cout<<"\n";
//product cipher
        for(int i=0;i<v1.size();i++)
        {
            v1[i]=(v1[i]*k1)%36;
        }
        for(int i=0;i<v1.size();i++)
        {
           cout<<v1[i]<<"  ";
        }
        cout<<"\n";
//ceasar cipher
        for(int i=0;i<v1.size();i++)
        {
            v1[i]=(v1[i]+k2)%36;
        }
 // no to char conversion
 vector<char> c1;
    for(int i=0;i<v1.size();i++)
    {

        if(v1[i]>=0&&v1[i]<=25) //if input is char
        {v1[i]=65+v1[i];
        c1.push_back(char(v1[i]));
        }
        else if(v1[i]>=26&&v1[i]<=35)//if input is digit
        {v1[i]=v1[i]*2-(30%v1[i]);
            c1.push_back(char(v1[i]));

        }
    }
    //print
        cout<<"Encrypted text "<<"\n";
        for(int i=0;i<c1.size();i++)
        {
            cout<<c1[i];
        }

}
void decryption(int k1, int k2)
{vector<int> v1=char_to_num();
    //Decryption
//ceasar decryption
//ceasar tesr
        for(int i=0;i<v1.size();i++)
        {
            cout<<v1[i];
        }
        cout<<"\n";
for(int i=0;i<v1.size();i++)
        {
        int temp;
        temp=v1[i]-k2;
        if(temp<0)
        {
            temp=36+temp;

        }
        else
        {temp=36%temp;
        }

            v1[i]=temp;
        }
//ceasar tesr
        for(int i=0;i<v1.size();i++)
        {
            cout<<v1[i];
        }

//product decryption
        for(int i=0;i<v1.size();i++)
        {
            v1[i]=(v1[i]/k1)%36;

        }

 // no to char conversion
 vector<char> c1;
    for(int i=0;i<v1.size();i++)
    {

        if(v1[i]>=0&&v1[i]<=25) //if input is char
        {v1[i]=65+v1[i];
        c1.push_back(char(v1[i]));
        }
        else if(v1[i]>=26&&v1[i]<=35)//if input is digit
        {v1[i]=v1[i]*2-(30%v1[i]);
            c1.push_back(char(v1[i]));

        }
    }
    //print
        cout<<"Decrypted text "<<"\n";
        for(int i=0;i<c1.size();i++)
        {
            cout<<c1[i];
        }

}
void brute_Force()
{
}

int main()
{
int choice=0;
cout<<"Vidhi Jain 60004198003 \n";
int k1, k2;
while(choice<4)
{
    cout<<endl<<"enter your choice: \n 1. encrypt 2. decrypt 3. brute force 4. exit \n";
    cin>>choice;

switch(choice)
{
    case 1:
        cout<<"enter k1 and k2\n";
        cin>>k1>>k2;
        encryption(k1,k2);
        break;
    case 2:
        cout<<"enter k1 and k2\n";
        cin>>k1>>k2;
        decryption(k1,k2);
        break;
    case 3:brute_Force();
        break;
    default: return 0;

}
}
return 0;
}



