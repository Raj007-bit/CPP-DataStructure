#include<string>
#include<iostream>
using namespace std;

string convert_to_digital_time(int minutes){
    //complete this function
    int x= minutes/60;
    int y= minutes%60;
    string output;
    if( y<10){
        output+= to_string(x);
        output.push_back(':');
        output+= to_string(0);
        output+= to_string(y);
        
    }
    else{
        output+= to_string(x);
        output.push_back(':');
        output+= to_string(y);
         
    }
    return output;
}
int main(){
    int minutes;
    cin>>minutes;//input should less than 1440
    cout<<convert_to_digital_time(minutes);
    return 0;
}