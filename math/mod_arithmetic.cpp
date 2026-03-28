const long long MOD = 1e9 + 7;

long long add(long long a, long long b) {
    return (a + b) % MOD;
}

// this  is how we take mode  when there is  difference between two elements
long long sub(long long a, long long b) {
    return (a - b + MOD) % MOD;
}

long long mul(long long a, long long b) {
    return (a * b) % MOD;
}


// binary power funtion
long long power(long long a, long long b) {
    long long res = 1;
    while (b) {
        if (b & 1) res = mul(res, a);
        a = mul(a, a);
        b >>= 1;
    }
    return res;
}

//  this is how we take mode when there is divisibility
long long devide(long long  numerator, long long denominator) {
    return  (numerrator* power(denominator,MOD-2)%MOD);
}