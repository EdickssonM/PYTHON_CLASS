cant=int(input("ingrese cantidad de personas: "))
r = 1
genhombre=0
genmujer=0
edadusuario=0
edadeshom=0
edadesmuj=0
while r <= cant:
    edad=float(input("ingrese su edad: "))
    genero = input("ingrese su genero <M/F>:") 
    edadusuario=edadusuario + edad
    r = r + 1
    promedio = edadusuario / cant
    if genero == "M" :
         genhombre = genhombre + 1
         edadeshom = edadeshom + edad
                
    elif genero == "F" :
         genmujer = genmujer + 1
         edadesmuj = edadesmuj + edad
promediomuj = edadesmuj / genmujer
promediohom = edadeshom / genhombre 
print ("el promedio de las edades es:", promedio)
print ("el numero total de mujeres es:",genmujer)
print ("el numero total de hombres es:",genhombre)
print ("el promedio de edades de hombres es: ", promediohom)
print ("el promedio de edades de mujeres es: ", promediomuj)
print ("numero total de personas ingresadas en el sistema",cant)
         
         
