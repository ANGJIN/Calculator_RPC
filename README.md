***
# Calculator using Sun RPC
***
## HOW TO USE
1. type "make"
2. check following executables are made
    * calc_client
    * calc_serveor
3. each executable must run in different machine
4. run server program  
	example) in cspro1  
		./calc_server
5. run client program, type server program's host address  
	example) in cspro2  
		./calc_client cspro1.sogang.ac.kr
6. in client program, type test to calculation, type exit to exit
7. this program provides only +, -, *, /, \*\*(power) and no white space between expression  
	example)  
		expression > 2**3+1
