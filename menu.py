#ejercicio menu
import os #Importar librerias del sistema

os.system("cls")
print ("menu principal")
print ("1. sumar numeros")
print ("2. restar numeros")
print ("3. multiplicar numeros")
print ("4. dividir numeros")
print ("   ")
print (".::: Digite su opcion")
num1=int(input (" ingrese el primer numero:"))
num2=int(input (" ingrese el segundo numero:"))
opc=int(input (" Digite la operacion a realizar:"))


if opc == 1 :
	suma=num1+num2
	print ("el resultado es:",suma)
elif opc == 2 :
	resta=num1-num2
	print ("el resultado es:",resta)
elif opc == 3 :
	multiplicacion=num1*num2
	print ("el resultado es:",multiplicacion)
elif opc == 4 :
	division=num1/num2
	print ("el resultado es:",division)
else :
	print ("ingrese una opcion valida")