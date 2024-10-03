
void toBinary(int N)
{
    if(N == 0)return ;
    toBinary(N/2);
    cout << N % 2 ;
}
