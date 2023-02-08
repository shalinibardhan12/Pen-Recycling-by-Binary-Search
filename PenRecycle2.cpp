#include <iostream>
using namespace std;
int RecyclePen(int n, int r, int k, int c){
    int s = 0, e = n;
    int ans = 0;
    while (s <= e){
        int x = (s + e) / 2;
        int Recyclereward = (n - x) * k;
        int totalmoney = r + Recyclereward;
        int pencost = x * c;
        if (totalmoney >= pencost){
            ans = x;
            s = x + 1;
        }
        else{
            e = x - 1;
        }
    }
    return ans;
}
int main()
{
    int n ,r,k,c;
    cout<<"enter the number of empty pen"<<endl;
    cin>>n;
    cout<<"enter the amount in pocket"<<endl;
    cin>>r;
    cout<<"enter the recycle reward"<<endl;
    cin>>k;
    cout<<"enter the refile price"<<endl;
    cin>>c;
    int max= RecyclePen(n,r,k,c);
    cout<<"maximum usable pen will be "<<max;
    return 0;

}
