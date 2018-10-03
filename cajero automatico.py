intentos=3
saldo=2500
s=1
while s <= intentos:
    clave=int(input (" ingrese su clave:  "))
    s=s+1
    print ("clave incorrecta, intenta nuevamente")
    if clave == 8820:
        print ("MENÛ TRANSACCIONAL")
        print ("1. Cambiar clave")
        print ("2. Mostrar saldo")
        print ("3. Realizar retiro")
        print ("4. Salir")
        print ("   ")

        opc=int(input (" Digite la operacion a realizar: " ))
        if opc == 1 :
            print("cambiar su clave")
            clavenueva=int(input("ingrese su clave nueva " ))
            print ("su clave nueva es", clavenueva)
            break
        elif opc == 2:
            
            print ("su saldo de cuenta es", saldo)
        elif opc == 3:
            print("valor a retirar")
            v=0
            if v <= saldo :
                print ("1. $10.000")
                print ("2. $20.000")
                print ("3. $50.000")
                print ("4. $100.000")
                print ("5. $200.000")
                print ("6. $400.000")
                print ("7. $600.000")
                print ("8. $1.000.000")
                subop=int(input (" Digite la operacion a realizar:"))
                if subop==1:
                    nuevosaldo=saldo-10000
                    if nuevosaldo<0:
                        print ("tiene fondos insuficientes en la cuenta")
                    else:
                        print ("ha retirado $10.000 ")
                        print ("su nuevo saldo es ",nuevosaldo)
                    
                elif subop==2:
                    nuevosaldo1=saldo-20000
                    if nuevosaldo1<0:
                        print ("tiene fondos insuficientes en la cuenta")
                    else:
                        print ("ha retirado $20.000 ")
                        print ("su nuevo saldo es ",nuevosaldo1)
                    
                elif subop==3:
                    nuevosaldo2=saldo-50000
                    if nuevosaldo2<0:
                        print ("tiene fondos insuficientes en la cuenta")
                    else:
                        print ("ha retirado $50.000 ")
                        print ("su nuevo saldo es ",nuevosaldo2)
                    
                elif subop==4:
                    nuevosaldo3=saldo-100000
                    if nuevosaldo3<0:
                        print ("tiene fondos insuficientes en la cuenta")
                    else:
                        print ("ha retirado $100.000 ")
                        print ("su nuevo saldo es ",nuevosaldo3)
                    
                elif subop==5:
                    nuevosaldo4=saldo-200000
                    if nuevosaldo4<0:
                        print ("tiene fondos insuficientes en la cuenta")
                    else:
                        print ("ha retirado $200.000 ")
                        print ("su nuevo saldo es ",nuevosaldo4)
                elif subop==6:
                    nuevosaldo5=saldo-400000
                    if nuevosaldo5<0:
                        print ("tiene fondos insuficientes en la cuenta")
                    else:
                        print ("ha retirado $400.000 ")
                        print ("su nuevo saldo es ",nuevosaldo5)
                    
                elif subop==7:
                    nuevosaldo6=saldo-600000
                    if nuevosaldo6<0:
                        print ("tiene fondos insuficientes en la cuenta")
                    else:
                        print ("ha retirado $600.000 ")
                        print ("su nuevo saldo es ",nuevosaldo6)
                elif subop==8:
                    nuevosaldo7=saldo-1000000
                    if nuevosaldo7<0:
                        print ("tiene fondos insuficientes en la cuenta")
                    else:
                        print ("ha retirado $1.000.000 ")
                        print ("su nuevo saldo es ",nuevosaldo7)
                    
                break
                
            else :
                print ("tiene fondos insuficientes en la cuenta")
else:
    print ("contraseña incorrecta,su tarjeta ha sido bloqueada por intentar 3 veces")


