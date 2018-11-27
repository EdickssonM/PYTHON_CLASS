#facultad de ingenierias
#programa ingenieria electronica
#electiva de porgramacion-python 2c
#programa para control de arduino desde python
#gui_python_1.py

import serial
from tkinter import*
import tkinter

arduinoData = serial.Serial ('COM10',9600)

def led_on():
    arduinoData.write('1')
    print("encender")
def led_off():
    arduinoData.write('0')
    print("apagar")
def led_on_All():
    print("encender todo")
def led_off_All():
    print("apagar todo")

led_control_window = Tk()
#Button = Tkinter.Button
btn1=Button(led_control_window, text="ON", command=led_on)
btn2=Button(led_control_window, text="OFF", command=led_off)
btn3=Button(led_control_window, text="ON", command=led_on)
btn4=Button(led_control_window, text="OFF", command=led_off)
btn5=Button(led_control_window, text="ON", command=led_on)
btn6=Button(led_control_window, text="OFF", command=led_off)
btn7=Button(led_control_window, text="ON_All", command=led_on_All)
btn8=Button(led_control_window, text="OFF_All", command=led_off_All)

btn1.grid(row=0,column=1)
btn2.grid(row=0,column=2)
btn3.grid(row=1,column=1)
btn4.grid(row=1,column=2)
btn5.grid(row=2,column=1)
btn6.grid(row=2,column=2)
btn7.grid(row=3,column=1)
btn8.grid(row=3,column=2)


led_control_window.mainloop()
#arduinoData.close()
