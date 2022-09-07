#include<iostream>

using namespace std;

int main()

{
    string name;
    int age;
 
    cout<<"Please enter name" <<endl;
    cin>>name;
    cout<<"Please enter age"<<endl;
    cin>>age;
    
    if (age<=20)
    {
        
        int Input;
        cout<<"Hi," <<name<< " You are not allowed to Apply for the role due to age restriction"<<endl;
        cout<<"Need to know the details ?, Type 1. Else type 0"<<endl;
        cout<<"Enter your Input";
        cin>>Input;
        if (Input==1)
        {
            cout<<"We are Restricted the applications for People who are under the age,Thank You, Visit again"<<endl;   
        }
        else (Input==0);
        {
            cout<<"Better Luck next Time"<<endl;
        }  
    }   
    else (age>=21);
    {
        int Press;
        cout<<"Congratulations, Mr." <<name<<" Now you are in first step of the process."<<endl;
        cout<<"Now you can proceed to further or you can complete the process later"<<endl;
        cout<<"Press 11 to proceed, Press 12 to exit"<<endl;
        int option;
        cin>>option;

        if (option==11)
        {
            cout<<"1. Fill the form at xyz.com"<<endl;
            cout<<"2. Update your resume"<<endl;
            cout<<"3. Enter all required details and click on submit option"<<endl;
        }
        else (option==12);
        {
            cout<<"Take your own time to complete your application in next 48 hours"<<endl;
        }
    }
    return 0;
}