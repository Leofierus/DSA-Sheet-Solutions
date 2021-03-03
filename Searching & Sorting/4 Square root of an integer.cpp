long long int floorSqrt(long long int x) 
{
    if(x==0||x==1) return x; 
    long long int a=1,b=x,lol,c;    
    while (a <= b)  
    {         
        c=(a+b)/2; 
        if(c*c==x) return c; 
        if(c*c<x) a=c+1,lol=c; 
        else b=c-1;
    }
    return lol;
}
