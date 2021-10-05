#include <stdio.h>
int i,n,l,b;
int sum = 0;
void tongsole()
{
    for (i=1;i<=n;i+=1)
    {
    if(i%2!=0)
    {
    l=i;
    b=l*l;
    sum = sum + b;
    }
    }
    printf("tong binh phuong cac so le: %d", sum);
}
int main(){
    
    printf("Nhap vao gia tri n: ");
    scanf("%d", &n);
    tongsole();
    return 0;
}