#include<bits/stdc++.h>
using namespace std;
char str[2005][2005];
int main()
{
    int n,m,k, total = 0;
    cin>>n>>m>>k;
    getchar();
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            scanf("%c", &str[i][j]);
        }
        getchar();
    }
//    for(int i = 0; i<n; i++)
//    {
//        for(int j = 0; j<m; j++)
//        {
//            printf("%c", str[i][j]);
//        }
//        cout<<endl;
//    }
    for(int i = 0; i<n; i++)
    {
        int coun = 0;
        for(int j = 0; j<m; j++)
        {
            if(str[i][j]=='.')
            {
                while(str[i][j]=='.' and j<m)
                {
                    coun++;
                    j++;
                }
                if(coun>=k)
                {
                    //cout<<coun<<"c"<<endl;
                    total+=coun-k+1;
                }
            }
            coun = 0;
        }
    }
    for(int i = 0; i<m; i++)
    {
        int coun = 0;
        for(int j = 0; j<n; j++)
        {
            if(str[j][i]=='.')
            {
               while(str[j][i]=='.' and j<n)
                {
                    coun++;
                    j++;
                }
                if(coun>=k and k!=1)
                {
                    //cout<<coun<<"r"<<endl;
                    total+=coun-k+1;
                }
            }
            coun = 0;
        }
    }
    cout<<total<<endl;
    return 0;
}
