#Sofia Alejandra Chamorro Messa
#Edicksson Miramag Lopez

######################################
#import librerias para GUI
import serial
from tkinter import *
import tkinter

arduinoData = serial.Serial ('COM3',9600)

#####################################
root = tkinter.Tk()
root.geometry ("410x210")#WxH
root.title("Mi calculadora")
root.resizable(FALSE,FALSE)
root.configure(background= "#1D2C81")
 #Funciones
def btnClik(valor):
    global operador
    operador=operador+str(valor)
    input_text.set(operador)
def clear():
    global operador
    operador=("")
    input_text.set(operador)
def operacion():
    global operador
    try:
        opera=str(eval(operador)) #sirve para realizar la operacion
        arduinoData.write(b'opera')
    except:
        clear()
        opera=("ERROR")
    input_text.set(opera) #muestra el resultado
 ####################################
input_text=StringVar()
operador=""
 #####################################
 
Display = Entry(root,font = ('Algerian',20,'italic'),width=20,bd=5,insertwidth=4,bg="#31B8D9",justify="center",textvariable=input_text).place(x=30,y=7)
Boton1 = Button(root,text="1",width=3,height=2,command=lambda: btnClik (1)).place(x=80,y=60)
Boton2 = Button(root,text="2",width=3,height=2,command=lambda: btnClik (2)).place(x=120,y=60)
Boton3 = Button(root,text="3",width=3,height=2,command=lambda: btnClik (3)).place(x=160,y=60)
Boton4 = Button(root,text="4",width=3,height=2,command=lambda: btnClik (4)).place(x=200,y=60)
Boton5 = Button(root,text="5",width=3,height=2,command=lambda: btnClik (5)).place(x=80,y=110)
Boton6 = Button(root,text="6",width=3,height=2,command=lambda: btnClik (6)).place(x=120,y=110)
Boton7 = Button(root,text="7",width=3,height=2,command=lambda: btnClik (7)).place(x=160,y=110)
Boton8 = Button(root,text="8",width=3,height=2,command=lambda: btnClik (8)).place(x=200,y=110)
Boton9 = Button(root,text="9",width=3,height=2,command=lambda: btnClik (9)).place(x=80,y=160)
Boton0 = Button(root,text="0",width=3,height=2,command=lambda: btnClik (0)).place(x=120,y=160)
BotonSum = Button(root,text="+",width=3,height=2,command=lambda: btnClik ('+')).place(x=240,y=60)
BotonRes = Button(root,text="-",width=3,height=2,command=lambda: btnClik ('-')).place(x=240,y=110)
BotonMul = Button(root,text="*",width=3,height=2,command=lambda: btnClik ('*')).place(x=160,y=160)
BotonDiv = Button(root,text="/",width=3,height=2,command=lambda: btnClik ('/')).place(x=200,y=160)
BotonClear = Button(root,text="C",width=3,height=2,command=lambda: clear( )).place(x=240,y=160)
BotonIgu = Button(root,text="=",width=3,height=8,command=operacion).place(x=280,y=65)
 #Abrir ventana
root.mainloop()
