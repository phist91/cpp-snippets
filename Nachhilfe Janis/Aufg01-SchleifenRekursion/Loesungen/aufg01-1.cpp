int summeA(int k){
	int ergebnis = 0;
	for (int i = 1; i <= k; i++)
		ergebnis += k;
	return ergebnis;
}

int summeB(int k){
	int ergebnis = 0;
	for (int i = 1; i <= k; i++)
		ergebnis += k*k;
	return ergebnis;
}

int summeC(int k){
	int ergebnis = 0;
	for (int i = 1; i <= k/2; i++)
		ergebnis += k;
	return ergebnis;
}

int summeD(int k){
	int ergebnis = 0;
	for (int i = 1; i < k+1; i++)
		if (k % 2 == 0)
			ergebnis -= k;
		else
			ergebnis += k;
	return ergebnis;
}