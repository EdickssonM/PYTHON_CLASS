#Proyecto final.py

import serial
from tkinter import*
import tkinter

#arduinoData = serial.Serial ('COM10',9600)

def luces():
	luz=Tk()
	luz.title("Luces")
	luz.geometry("400x200")
	luz.configure (background="black")
	luz.resizable(FALSE, FALSE)
	print ("luces")
	luces_Baño = Button(luz, text="L_Baño",width=5,height=3, command=on_offLuces).place (x=10, y=60)
	luces_Sala = Button(luz, text="L_Sala",width=5,height=3, command=on_offLuces).place (x=60, y=60)
	luces_Escal = Button(luz, text="L_Escalera",width=5,height=3, command=on_offLuces).place (x=110, y=60)
	luces_Garaje = Button(luz, text="L_Garaje",width=5,height=3, command=on_offLuces).place (x=160, y=60)
        
def sensor():
        sensor=Tk()
        sensor.title("Sensor")
        sensor.geometry("400x200")
        sensor.resizable(FALSE, FALSE)
        sensor.configure (background="yellow")
        Sensor = Button(sensor, text="Sensor",width=5,height=3).place (x=10, y=60)

def servo1():
        servo=Tk()
        servo.title("Sensor")
        servo.geometry("400x200")
        servo.resizable(FALSE, FALSE)
        servo.configure (background="green")
        PuertaGaraje = Button(servo, text="Servo_Garaje",width=15,height=3).place (x=10, y=60)
def on_offLuces():
        print ("encender/apagar")

	
domotica=Tk()
domotica.title("Casa_Domotica")
domotica.geometry("300x400")
domotica.resizable(FALSE, FALSE)
domotica.configure(background="SkyBlue4")
color_boton=("gray77")

BotonLuz=Button(domotica,text="Luces",width=30,height=3,command=luces).place(x=50,y=50)
BotonSensor=Button(domotica,text="Sensor",width=30,height=3,command=sensor).place(x=50,y=110)
BotonServoG=Button(domotica,text="Puerta_Garaje",width=30,height=3,command=servo1).place(x=50,y=170)

domotica.mainloop()
