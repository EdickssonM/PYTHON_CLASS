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
#______________________________________________________________
Display=Entry (root,font=('arial',20,'italic'),width=10, bd=2, insertwidth=4,bg="#F0F404",justify="right").place(x=10,y=10) #configuracion de la pantalla de la calculadora
Boton1=Button(root, text="1",width=2,height=2).place (x=10, y=60)
#abrir ventana
root.mainloop ()

