struct CalcArgs {
	int a;
	int b;
};
program CALC_PROG {
	version CALC_VERS {
		int CALC_ADDITION(CalcArgs) = 1;
		int CALC_SUBSTRACTION(CalcArgs) = 2;
		int CALC_MULITIPLICATION(CalcArgs) = 3;
		int CALC_DIVISION(CalcArgs) = 4;
		int CALC_POWER(CalcArgs) = 5;
	} = 1;
} = 0x20151528;
