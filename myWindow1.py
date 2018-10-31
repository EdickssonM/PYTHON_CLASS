#importar librerias para GUI
from tkinter import *
import tkinter
#______________________________________________________________
#crear ventana y perzonalizacion-configuracion de la ventana
root = tkinter.Tk ()
root.geometry ("400x400") #WxH (anchoxaltura)
root.title ("Mi Calculadora") #para poner nombre a la ventana
root.resizable (FALSE, FALSE) #para dejar fijo el tamaño de la ventana
root.configure (background="black") #cambiar color de la ventana (buscar en google tabla de colores rgb)
#________________________________________________________________________________
#FUNCIONES
def btnClik(valor):
    global operador
    operador=operador+str(valor) #str es para concatenar los datos salen todos a la vez en la pantalla
    input_text.set(operador)

def clear():
    global operador
    operador=("")
    input_text.set (operador)

def operacion ():
    global operador
    try:
        opera=str(eval(operador)) #sirve para realizar la operacion
    except:
        clear()
        opera=("ERROR")
    input_text.set (opera) #muestra el resultado
#_______________________________________________________________
input_text=StringVar()
operador=""
#______________________________________________________________
Display=Entry (root,font=('arial',20,'italic'),width=20, bd=2, insertwidth=4,bg="#F0F404",justify="right",textvariable=input_text) .place(x=50,y=15) #configuracion de la pantalla de la calculadora

Boton1 = Button(root, text="1",width=5,height=3,command=lambda: btnClik (1)) .place (x=10, y=60)
Boton2 = Button(root, text="2",width=5,height=3 ,command=lambda: btnClik (2)).place (x=100, y=60)
Boton3 = Button(root, text="3",width=5,height=3,command=lambda: btnClik (3)).place (x=190, y=60)
Boton4 = Button(root, text="4",width=5,height=3,command=lambda: btnClik (4)).place (x=10, y=150)
Boton5 = Button(root, text="5",width=5,height=3,command=lambda: btnClik (5)).place (x=100, y=150)
Boton6 = Button(root, text="6",width=5,height=3,command=lambda: btnClik (6)).place (x=190, y=150)
Boton7 = Button(root, text="7",width=5,height=3,command=lambda: btnClik (7)).place (x=10, y=240)
Boton8 = Button(root, text="8",width=5,height=3,command=lambda: btnClik (8)).place (x=100, y=240)
Boton9 = Button(root, text="9",width=5,height=3,command=lambda: btnClik (9)).place (x=190, y=240)
Boton0=Button(root, text="0",width=5,height=3,command=lambda: btnClik (0)).place (x=100, y=330)
BotonSuma = Button(root, text="+",width=5,height=3,command=lambda: btnClik ('+')).place (x=280, y=60)
BotonResta = Button(root, text="-",width=5,height=3,command=lambda: btnClik ('-')).place (x=280, y=150)
BotonMult = Button(root, text="*",width=5,height=3,command=lambda: btnClik ('*')).place (x=280, y=240)
BotonDiv = Button(root, text="/",width=5,height=3,command=lambda: btnClik ('/')).place (x=280, y=330)
BotonResult=Button(root, text="=",width=5,height=3,command=operacion).place (x=190, y=330)
BotonClear = Button(root, text="C",width=5,height=3,command=lambda: clear ( )).place (x=10, y=330)
#abrir ventana
root.mainloop ()

