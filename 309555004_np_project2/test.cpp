

#include <cstdlib>  //atoi
#include <stdlib.h> //setenv
#include <unistd.h> //fork exec STDOUT_FILENO
#include <iostream> //cin cout
#include <fcntl.h>
#include <string.h>
#include <vector>

#include <fstream> //open(), for check file exit
#include <sstream> //stringstream

#include <sys/types.h>
#include <sys/wait.h> //wait
#include <sys/socket.h>
#include <sys/time.h> //select()
#include <netinet/in.h> //bind(), AF_INET
#include <arpa/inet.h> //inet_ntop()

using namespace std;

int main(){
    int a=0;
    int b=11;
    int c=(a=b);
    ///////////////////test1///////////////////////////
    // if((a=b)){
    //     cout <<"into if"<< c << endl; //after do test, check answer is this one.
    // }
    // else{
    //     cout << "into else"<<(a=b) << endl;
    // }

    ///////////////////test2///////////////////////////
    // vector<string> vec;
    // vec.push_back("val1");
    // vec.push_back("val2");

    // cout <<"vec[1]=" << vec[1] << endl;  // val2

    // vector<string>::iterator itr = vec.end()-1;
    // cout <<"*itr="<< *itr << endl;       // val2
    // // cout <<"*itr[3]="<< *itr[3] << endl;

    // string str = *itr;
    // cout <<"str=*itr, str="<< str<<endl; // val2
    // cout <<"str=*itr, str="<< str[0]<<str[1]<<str[2]<<str[3]<<endl;    // val2

    ///////////////////test3///////////////////////////
    int devNull_fd = open("/dev/null", O_RDWR);
    cout << devNull_fd << endl;
    return 0;
}