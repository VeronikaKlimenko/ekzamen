#include <iostream>
using namespace std;

void countmax(double arr[]){
    int a =sizeof(arr);
    double max=arr[0];
    for(int i=0; i<a; i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }
    cout <<"max =" <<  max;
}

int main(){
    int n;
    cout << "n=";
    cin >> n;
    if (n<1){
        cout <<"wrong value, try again"<<'\n';
    } else{
        double array[n];
        //заповнити масив
        bool f=true;
        for(int i=0; i<n; i++){
        cin >> array[i];
        if(cin.fail()){
        cout <<"wrong value, try again"<<'\n'; f=false;break;}
        }
        if (f){
        countmax(array);
        //на якій позиції  ост еле>0
        double suma=0;
        int j=0;
        bool check=false;

        for(int i=0; i<n; i++){
        if (array[i]>0){ j=i;check=true;}
        }

        //сума
        if (check){
            for(int i=0; i<j; i++){
                suma=array[i]+suma;
            }
        }
        cout <<'\n' <<"suma do last>0 =" <<  suma <<'\n';
        //інтервал
        double a,b;
        cout << "a=";
        cin >> a;
        if(cin.fail()){
        cout <<"wrong value, try again"<<'\n';}else{
        
            cout << "b=";
            cin >> b;

            if(cin.fail()){
            cout <<"wrong value, try again"<<'\n';}else{

            if (a>b){
                cout << "a>b, pomilka" <<'\n';;
            } else{
                for(int i=0; i<n; i++){
                    double temp=abs(array[i]);
                        if((temp>=a) &&(temp<=b) ){
                            array[i]=0;
                        }
                }
                cout << "new masiv: ";
                for (int i=0;i<n; i++) {
                cout << array[i] << " ";
                }
            }
        }
        }
    }
    }return 0;
}
    