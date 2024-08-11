gradient-calc.out: gradient-calc.c
	gcc gradient-calc.c -o gradient-calc.out
	sudo cp ./gradient-calc.out /usr/local/bin/gradient
