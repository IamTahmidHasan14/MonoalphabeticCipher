//Monoalphabetic Cipher
#include<iostream>
#include<string.h>
using namespace std;
int main (){
    string p;
    cout <<"Input Plain Text: ";
    getline (cin, p);
    int cipher_c[] = {'Z','Y','X','W','V','U','T','S','R','Q','P','O','N','M','L','K','J','I','H','G','F','E','D','C','B','A'};
    int cipher_s[] = {'z','y','x','w','v','u','t','s','r','q','p','o','n','m','l','k','j','i','h','g','f','e','d','c','b','a'};
    int len = p.size();
    int arr[len];
    int t;

    cout<<"\nEncryption: ";
    for(int i=0; i<len; i++){
        if((int)p[i]>=65 && (int)p[i]<=90){
            t=((int)p[i] - 65) %26;
            char res = cipher_c[t];
            cout << res;
            arr[i] = t;
        }
        else if((int)p[i]>=97 && (int)p[i]<=122){
            t=((int)p[i] - 97) %26;
            char res = cipher_s[t];
            cout << res;
            arr[i] = t;
        }
        else{
            arr[i]=(int)p[i];
            char res = arr[i];
            cout << res;
        }
    }

    int arr2[len];
    cout<< endl <<"Decryption: ";
    for(int i=0; i<len; i++){
        if((int)p[i]>=65 && (int)p[i]<=90){
            arr2[i]=(arr[i] + 26) %26 + 65;
            char res = arr2[i];
            cout << res;
        }
        else if((int)p[i]>=97 && (int)p[i]<=122){
            arr2[i]=(arr[i] + 26) %26 + 97;
            char res = arr2[i];
            cout << res;
        }
        else{
            arr2[i]=(int)arr[i];
            char res = arr2[i];
            cout << res;
        }
    }
    cout << endl;
}
