int max(int a, int b){
    if (a > b)
        return a;
    return b;
	
	// als Einzeiler: return (a > b) ? a : b;
}

int modulo(int a, int b){
    if (a > b){
        while (a >= b)
            a = a - b;
        return a;
    } else {
        while (b >= a)
            b = b - a;
        return b;
    }
}

int ggT(int a, int b){
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (a >= b)
        return ggT(modulo(a,b),b);
    return ggT(a,modulo(b,a));
}