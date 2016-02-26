const double ACCURACY=0.001;

// Newton's Approximation Method
double mysqrt(const double number) {
	double lower, upper, guess;
	if (number < 1) {
		lower = number;
		upper = 1;
	}
	else {
		lower = 1;
		upper = number;
	}
	while ((upper-lower) > ACCURACY) {
		guess = (lower + upper)/2;
		if (guess*guess > number)
		upper =guess;
		else {
			lower = guess; 
		}
	}
	return (lower + upper)/2;

}
