#include <iostream>

using namespace std;

class Parity{

    public:

    int i=0;

    int *num=new int[5];

    Parity(){

        //num=0;
    }

    void put(int num);

    void print(void);

    void deletes(int num);

    int test(void);

       ~Parity(){

        delete []num;
    }

 
    bool istrue=false;

};

void Parity::put(int a){

    cout<<"Enter the element please\n";

    cin>>num[i];

    i++;

    istrue=true;

    return;

}
void Parity::print(void){

    cout<<"The elements are\n";

    for(int j=0;j<i;j++){

        cout<<j+1<<"-  "<<num[j]<<endl;
}}

void Parity::deletes(int length){

    int *num1=new int[5];

    num1=num;

    delete []num;

    num[5];

    for(int j=0;j<i-1;j++){

        num[j]=num1[j];
    }

    delete []num1;

    i--;
}

int Parity::test(void){

    for(int j=0;j<i;j++){

        cout<<"for "<<j+1<<"Number: ";
        
        if(num[j]%2==0){

            return 1;
        }

        else {

            return 0;
        }
    }
}

int main(){

    Parity p;

    int choice;

    choiceMenue:

    system("CLS");

    cout<<"Make choice from (1-4)and 0 to go to choice menue\n"
        <<"1.Put number\n"
        <<"2.Print Number\n"
        <<"3.delete Number\n"
        <<"4.Test Number\n"
        <<"Enter your choice\n";

        cin>>choice;

    switch(choice){

        case 1:

        p.put(0);
        
        break;

        case 2:

        p.print();

        break;

        case 3:

        p.deletes(0);

        break;

        case 4:

        p.test();

        break;

        default:

        cout<<"Make an appropriate choice from (1-4)\n";

        goto choiceMenue;

    }

    cout<<"Press 0 to go to choice menue\n";

    cin>>choice;

    if(choice==0){

        goto choiceMenue;
    }
}