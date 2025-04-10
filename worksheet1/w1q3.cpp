#include <iostream>
using namespace std;
int main()
{
    int n, hold;
    cout<<"Enter the amount of numbers you want to enter : "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter all the numbers: "<<endl;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for (int i=0;i<n;i++)
    {
        for (int j= i+1; j<n; j++)
        {
            if (a[i]>a[j])
            {
                hold = a[i];
                a[i]=a[j];
                a[j]=hold;
            }
        }

    }
cout<<"Output : "<<endl;
for (int i=0; i<n; i++)
{
    cout<<a[i]<<" ";
}

return 0;

}
