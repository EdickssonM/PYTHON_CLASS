# comparacion
import os # Importar librerias del sistema

os.system ( " cls " )

n1=0
n2=0
n1=int(input("ingrese primer Numero: "))
n2=int(input("ingrese segundo Numero: "))
print ("*********************")
if n1>n2:
	print ("el numero mayor es:",n1)
else:
	if n2>n1:
		print ("el numero mayor es:",n2)
	else :
		print ("los numeros ingresados son iguales")