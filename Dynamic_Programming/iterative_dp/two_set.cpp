
void s11(){

int n;
cin>>n;

vi a(n+1);
a[0]=0;
arin(a,1,n+1);

ll sum=accumulate(a.begin(),a.end(),0LL);
if(sum%2==0){
    cout<<-1<<endl;
    return ;
}
sum=(sum+1)/2;

v2d dp(n+1,vector<int>(sum+1,0));

for(int i=0;i<=n;i++){


    dp[i][0]=1;

}


for(int i=1;i<=n;i++){


    for(int j=1;j<=sum;j++){


        if(j>=a[i])
            dp[i][j]=dp[i-1][j-a[i]]+dp[i-1][j];
        else
            dp[i][j]=dp[i-1][j];

    }

}

cout<<dp[n][sum]<<endl;

}



