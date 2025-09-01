# Simple Alarm Clock

import time

alarm_time = input("Set alarm time (HH:MM, 24hr): ")

while True:
    current_time = time.strftime("%H:%M")
    if current_time == alarm_time:
        print("⏰ Wake up!")
        break
    time.sleep(10)
