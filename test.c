#define P(B) printf("%s", B);
#define V (Z-X)
#define W (T-Y)
#define U(B,C) while(B)P(C)
int main(){
    int X,Y,Z,T;
    scanf("%d%d%d%d",&X,&Y,&Z,&T);
    U(!V,"S\n")
    U(!W,"W\n")
    while(1)
    {
        if ((++T<17&&V<0)||(T<18&&V>0))
        P("S");
        if(V<0)
        P("E\n")
        else 
        P("W\n")
    }
}
