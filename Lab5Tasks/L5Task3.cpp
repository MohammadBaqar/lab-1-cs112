#include <iostream>

#include<string>

using namespace std;

class StringType{

    private:

    public:

    string str1;

    string str2;

    void setvalues(string str1,string str2);

    void copy(string s1, string s2 );

    string concatenate(string s1, string s2);

    int compare(string s1, string s2);

    int searchWord(string word);

    int searchChar(char ch);



};

void StringType::setvalues( string a,string b){

    cout<<"Enter String 1 please\n";

    cin>>a;

    cout<<"Enter string 2 please\n";

    cin>>b;

    str1=a;

    str2=b;
    }

int len(string s){
	int size=0;

	for(int i=0;s[i]!='\0';i++){
		size++;
	}
	
	return size;
}

void StringType:: copy(string s1, string s2 ){
	
	int length2 = len(str2);
	
	s1=new char[length2+1];
	
	for(int i=0;i<length2;i++){
		str1[i]=str2[i];
	}
	
	str1[length2] = 0;

    cout<<str1;

}


string StringType:: concatenate(string s1, string s2){
	
	
	s1 = s1+s2;
	cout<<"string 1 after concatenating is: "<<s1;
	return s1;
	
}


int StringType:: compare(string s1, string s2){
	
	int length1=len(str1);

	int length2=len(str2);

	bool isEqual=false;

    cout<<"If equals =0\n"
        <<"if string 1 is larger=1\n"
        <<"if string 2 is larger=-1\n\n"
        <<"Answer: ";
		
	for(int i = 0; i < length1; i++){
		
		if(str1[i] == str2[i]){
			isEqual=true;
			continue;		
		}
		else if(str1[i] > str2[i]){	
			return 1;
		}
		else{
			return -1;
		}
	}
	
	if(isEqual == true){
		return 0;
	}
	
}

int StringType::searchChar(char ch){

    cout<<"Enter character Please \n";

    cin>>ch;

    string s(1,ch);

    int length1=len(s);

    int length2=len(str1);

    if(length1!=length2){

        return 0;
    }

    else{

        for(int i=0;i<length1;i++){

            if(str1[i]!=s[i]){

                cout<<"This character is not match to the string 1\n";

                return 0;
            }

        }

    }
    cout<<"The character is present in the string\n";
}

int StringType::searchWord(string word){

    cout<<"Enter Word Please ";

    cin>>word;

    int length1=len(word);

    int length2=len(str1);

    if(length1!=length2){

        return 0;
    }

    else{

        for(int i=0;i<length1;i++){

            if(str1[i]!=word[i]){

                cout<<"This word is not match to the string 1\n";

                return 0;
            }

        }

    }
    cout<<"The word is present in the string\n";
}



 

int main(){

    StringType s;

	string word;
	char chars;

	int choice;
	int size;	

	while(1){
			
		cout<<"\n\n";
		
		cout<<"Select from below:"<<endl
            <<"1. Set Values:"<<endl
			<<"2. Print string 1"<<endl
			<<"3. Print string 2"<<endl
			<<"4. Compare string 2 and string 1"<<endl
			<<"5. Copy string 2 into string 1"<<endl
			<<"6. Concatenate string 2 and string 1"<<endl			
			<<"7. search word"<<endl<<endl
			<<"8. search Character"<<endl<<endl
			<<"Select(0-9) : ";
			
			cin>>choice;
			
			cout<<"\n\n";
			
			switch(choice){

                case 1:

                s.setvalues(s.str1,s.str2);

                break;
				
				case 2:
					
					cout<<endl<<"String 1 : "<<s.str1;
					
					break;	
					
				case 3:
					
					cout<<endl<<"String 2 : "<<s.str2;
					
					break;	

                case 4:

                    cout<<endl<<s.compare(s.str1,s.str2);

                    break;

                case 5:

                    s.copy(s.str1,s.str2);

                    break;
					
			
				case 6:

					s.str1 = s.concatenate(s.str1,s.str2);
					
					break;	

				case 7:


				    s.searchWord(word);

					break;
			
				case 8:

					s.searchChar(chars);
					
					break;	

				case 0:
					cout<<"Thank you for using this program!";
					exit(0);
					break;	

				default:
					cout<<endl<<"Invalid input!";
					exit(0);

			}
			
			cout<<"\n\n\n\n\n";
			system("Pause");
			system("Cls");
	}
    return 0;
}