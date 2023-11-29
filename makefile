UF1288_LopezSegadoPedroAntonio_EJ1.exe: UF1288_LopezSegadoPedroAntonio_EJ1.o mensajeUDP.o
	gcc -o UF1288_LopezSegadoPedroAntonio_EJ1.exe UF1288_LopezSegadoPedroAntonio_EJ1.o mensajeUDP.o

UF1288_LopezSegadoPedroAntonio_EJ1.o: UF1288_LopezSegadoPedroAntonio_EJ1.c mensajeUDP.h
	gcc -c UF1288_LopezSegadoPedroAntonio_EJ1.c 

mensajeUDP.o: mensajeUDP.c mensajeUDP.h
	gcc -c mensajeUDP.c