#include <iostream>

using namespace std;

    
    #if defined(_WIN32)
        #define clear_screen() system("cls")
    #else
        #define clear_screen() system("clear")
    #endif
    int fact(int n){
        int res=1;
        for(int i=2;i<=n;i++){
            res*=i;
        }
        return res;
    }
    double power(double b,int p){
        double res=1;
        if(p<0){
            p=-p;
            b=1/b;
        }
        else{
        for(int i=1;i<=p;i++){
               res*=b;
        }
        }
        return res;
    }
    float cos(int x,int t){
        x%=360;
        double r=x*3.14/180;
        double res=0;
        for(int i=0;i<=t;i++){
        if(i%2==0){
            res+=power(r,2*i)/fact(2*i);
        }
        else{
            res-=power(r,2*i)/fact(2*i);
        }
        }
        return res;

    }
    float sin(int x,int t){
        x%=360;
        double r=x*3.14/180;
        float res=0;
        int term=1;
        for(int i=0;i<=t;i++){
           res+=term*power(r,2*i+1)/fact(2*i+1);
           term*=-1;
        }
        return res;
    }


int main()
{
    bool B=true;
    while (B==true){
    char ch1;
    cout<<"Enter your choice"<<endl;
    cout<<"(1) arithmetic operations"<<endl;
    cout<<"(2) mathematial functions"<<endl;
    cout<<"(3) Exit the program"<<endl;
            cin>>ch1;
                clear_screen();
            if(ch1=='3'){
                cout<<"Goodbye"<<endl;
                B= false;
            }
            else{
                if(ch1=='1'){
                    float A,B,res;
                    cout<<"Enter your choice:"<<endl;
                    cout<<"(1 or +) addition"<<endl;
                    cout<<"(2 or -) subtraction"<<endl;
                    cout<<"(3 or *) multiplication"<<endl;
                    cout<<"(4 or /) division"<<endl;
                    cin>>ch1;
                        clear_screen();
                    cout<<"Enter two numbers:"<<endl;
                    cin>>A>>B;
                        if(ch1=='1'||ch1=='+'){
                            res=A+B;
                            cout<<A<<"+"<<B<<"="<<res<<endl;
                        }
                        else{
                            if(ch1=='2'||ch1=='-'){
                                res=A-B;
                                cout<<A<<"-"<<B<<"="<<res<<endl;
                            }
                            else{
                                if(ch1=='3'||ch1=='*'){
                                    res=A*B;
                                    cout<<A<<"*"<<B<<"="<<res<<endl;
                                }
                                else{
                                    res=A/B;
                                    cout<<A<<"/"<<B<<"="<<res<<endl;
                                }
                            }
                        }

                }
                else{

                    cout<<"Enter your choice:"<<endl;
                    cout<<"(1) power"<<endl;
                    cout<<"(2) factorial"<<endl;
                    cout<<"(3) cos"<<endl;
                    cout<<"(4) sin"<<endl;
                    cin>>ch1;
                            clear_screen();
                        if(ch1=='1'){
                            cout<<"Enter the number and power:"<<endl;
                            double b;
                            int p;
                            cin>>b>>p;
                            cout<<b<<"^"<<p<<"="<<power(b,p)<<endl;
                        }
                        else{
                            if(ch1=='2'){
                                cout<<"Enter the number:";
                                int f;
                                cin>>f;
                                cout<<f<<"!="<<fact(f)<<endl;
                            }
                            else{
                                if(ch1=='3'){
                                    cout<<"Enter the angle:";
                                    int a;
                                    cin>>a;
                                    cout<<"Enter the term:";
                                    int t;
                                    cin>>t;
                                    cout<<"cos("<<a<<")="<<cos(a,t)<<endl;
                                }
                                else{
                                    cout<<"Enter the angle:";
                                    int a;
                                    cin>>a;
                                    cout<<"Enter the term:";
                                    int t;
                                    cin>>t;
                                    cout<<"sin("<<a<<")="<<sin(a,t)<<endl;
                                }
                            }
                        }

                }
            }
    }




}
