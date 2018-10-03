#funcion practica
def miFuncion():
    print ("hola")
miFuncion()

#funcion para operaciones aritmeticas
def suma():
    suma= a + b
    print ("la suma es: ",suma)

def resta():
    res= a - b
    return res

a=int(input("digite n1: "))
b=int(input("digite n2: "))

suma()
print ("la resta es : ",resta())




# funcion aritmetica:
def menu():
    print ("1.suma")
    print ("2.resta")
    print ("3.multiplicacion")
    print ("4.division")
    print ("5.raiz cuadrada")
def datos():
    global n1, n2
    n1= int(input("digite primer numero: "))
    n2= int(input("digite segundo numero: "))
def operacion():
    if opc == 1:
        suma=n1+n2
        return suma
    elif opc== 2:
        resta=n1-n2
        return resta
    elif opc==3:
        mult=n1*n2
        return mult
    elif opc==4:
        divi=n1/n2
        return divi

datos()
menu()
i=1
opc=int(input("eliga la opcion a realizar:"))
print ("el resultado es: ",operacion())
