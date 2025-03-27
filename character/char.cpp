
// char arr

// #include<iostream>
// using namespace std;

// int main(){

//     char name[20];

//     cout<<"Enter your name "<<endl;
//     cin>>name;

//     name[2]='\0'; //null character

//     cout<<name;
// }

            // count the length of string 

// #include<iostream>
// using namespace std;

// int getLength(char name[]){
//     int count=0;
//     for(int i=0; name[i] !='\0';i++){
//         count++;
//     }
//     return count;
// }

// int main(){
//     char name[20];

//     cout<<"Enter your name"<<endl;

//     cin>>name;
//     cout<<"your name is ";
//     cout<<name<<endl;

//     cout<<"Length: " <<getLength(name) <<endl;
// }


                //Reverse the string

// #include<iostream>
// #include<cstring>
// using namespace std;

// void reverse(char name[]){
//     int s=0;
//     int e=strlen(name)-1;
//     while(s<e){
//         swap(name[s] ,name[e]);
//         s++;
//         e--;
//     }
// }

// int main(){
//     char name[20];

//     cout<<"Enter your name: "<<endl;
//     cin>>name;

//     cout<<"your name is ";
//     cout<<name<<endl;

//     reverse(name);
//     cout<<"Reversed string is "<<name<<endl;

//     return 0;

// }

                //check palindrome

// #include<iostream>
// #include<cstring>
// using namespace std;

// char toLowerCase(char ch){  // to convert any string into lowercase string
//     if(ch >='a' && ch<='z'){
//         return ch;
//     }else{
//         char temp =ch - 'A' + 'a';
//         return temp;
//     }
// }

// bool checkPalindrome(char a[]){
//     int s=0;
//     int e=strlen(a)-1;

//     while(s<=e){
//         if(toLowerCase(a[s]) != toLowerCase(a[e])){
//             return 0;
//         }else{
//             s++;
//             e--;
//         }
//     }
//     return 1;
// }

// int main(){
//     char name[20];

//     cout<<"Enter your name: "<<endl;
//     cin>>name;

//     cout<<"your name is ";
//     cout<<name<<endl;

//     cout<<"Palindrome or Not: "<<checkPalindrome(name)<<endl;

//     cout<< "character is "<<toLowerCase('b')<<endl;
//     cout<<"character is "<< toLowerCase('B')<<endl;

//     return 0;

// }

                        // Maximum occuring character ...
#include<iostream>
#include<string>
using namespace std;

int getLength(char name[]){
    int count=0;
    for(int i=0; name[i] !='\0';i++){
        count++;
    }
    return count;
}

char getMaxOccCharacter(string s){

    int arr[26] ={0};

    // create an array of count ///

    for(int i=0;i<s.length();i++){
        char ch =s[i];

        int number=0;
        number =ch-'a';
        arr[number]++;
    }
    // find maximum occuring character 
    int maxi=-1, ans=0;
    for(int i=0;i<26 ;i++){
        if(maxi <arr[i]){
            ans =i;
            maxi=arr[i];
        }
    }
    char finalAns='a'+ans;
    return finalAns;
}

int main(){
    // char name[20];

    // cout<<"Enter your name"<<endl;

    // cin>>name;
    // cout<<"your name is ";
    // cout<<name<<endl;

    // cout<<"Length: " <<getLength(name) <<endl;

    string s;
    cin>>s;
    cout<<getMaxOccCharacter(s)<<endl;
}
