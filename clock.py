# Digital Clock

import tkinter as tk
import time

def update_time():
    current = time.strftime("%H:%M:%S")
    label.config(text=current)
    root.after(1000, update_time)

root = tk.Tk()
root.title("Digital Clock")
label = tk.Label(root, font=("Arial", 50), fg="black")
label.pack()
update_time()
root.mainloop()
