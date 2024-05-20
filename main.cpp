#include <cstdlib>
#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    int number;
    int timePassed=0;
    int minFun=0;
    int seenBefore=0;


    std::cout << "Enter the number of processes (3-10): ";
    std::cin >> number;
    int processes[number][2];


    srand(time(0));


    cout<<"nummer: "<<number;

    cout<<"Generating random arrival (Ta) and service (Ts) times:"<<endl;
    cout<<"\t"<<"Ta"<<"\t"<<"Ts"<<endl;

    for(int i =0;i<number;i++){
        cout<<"P"<<i+1<<"\t";
        for(int j =0;j<2;j++)
        {
            if(j==0)
            {
                processes[i][j] = rand()%20;
                cout<<processes[i][0]<<"\t";
            }
            else{
                processes[i][j] = (rand()%20)+5;
                cout<<processes[i][1]<<"\n";
            }
        }
    }


    cout<<"----------------"<<endl<<"Scheduling using FIFO: "<<endl;

    for(int i =0;i<number;i++){
        cout<<"T"<<" = "<<timePassed<<" -> ";
        for(int j =0;j< number;j++){
            if(processes[j][0]==-1)
            {
                continue;
            }
            if((processes[j][0] != -1) && seenBefore ==0){

                minFun = j;
                seenBefore =1;
                continue;
            }
            if((processes[j][0] != -1)&&(processes[j][0] <= processes[minFun][0])){
                minFun = j;
            }
        }


        timePassed= timePassed+ processes[minFun][1];
        cout<<timePassed<<"\t"<<":"<<"\t"<<"P"<<minFun+1<<endl;
        processes[minFun][0] =-1;
        seenBefore =0;


    }

    return 0;
}
