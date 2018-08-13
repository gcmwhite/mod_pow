
/*

the function mod pow,like this

a ^ b % c

please be careful int range

meybe you should use unsigned long long or big_int

please tell me ,if you have better ideas

*/


int mod_pow_1(int a,int k,int m)
{
    int b = 1;
    while (k >= 1)
    {
        if (k % 2 == 1)
        {
            b = a * b % m;
        }
        a = a * a % m;
        k = k / 2;
    }
    return b;
}

int mod_pow_2(int a,int b,int c)
{
    int ans = 1;
    a = a % c;
    while (b != 0)
    {
        if (b & 1)
        {
            ans = (ans * a) % c;
        }
        b >>= 1;
        a = (a * a) % c;
    }
    return ans;
}