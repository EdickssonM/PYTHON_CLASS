opc=0
print ("operaciones aritmeticas")
num1=int(input("ingrese primer Numero: "))
num2=int(input("ingrese segundo Numero: "))
print (" ")
print (".:MENU DE OPERACIONES:.")
print (" ")
print ("1. sumar numeros")
print ("2. restar numeros")
print ("3. multiplicar numeros")
print ("4. division numeros")
print ("*********************")
opc=int(input("digite la operacion a realizar:__"))
if opc==1:
	print("el resultado es:",num1+num2)
elif opc==2:
	print("el resultado es:",num1-num2)
elif opc==3:
	print("el resultado es:",num1*num2)
elif opc==4:
	print("el resultado es:",num1/num2)
else:
	print ("ha digitado una opcion incorrecta!")
