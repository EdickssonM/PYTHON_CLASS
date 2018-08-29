tabla=int(input(".:ingrese el numero de la tabla a operar:."))
rango=int(input(".:digite el rango a multiplicar:."))
num=1
while tabla<=10:
    rango=1
    while rango<=10:
        print (tabla,"*",rango,"=",tabla*rango)
        rango=rango+1
    tabla=tabla+1
print ("**************************")
