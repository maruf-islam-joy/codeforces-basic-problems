int main()
{
    int inp =0 ,res = 0,track =0;
    int arr[] = {0,0,0};
    scanf("%d\n",&inp);
    for(int j=0; j<inp;j++){
        for(int i=0;i<3;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==1)track+=1;
    }
    if(track>=2){
        res+=1;
        track=0;
    }
   // if(j<2)printf("\n");
    }
    printf("%d",res);
    return 0;
}