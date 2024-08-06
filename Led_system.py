from gpiozero import LED, Button

led = LED(18)
button = Button(21)

blink_state = 1

def change_blink_state():
    global blink_state
    if blink_state == 1:
        blink_state = 2
    elif blink_state == 2:
        blink_state = 3
    else:
        blink_state = 1

button.when_pressedd = change_blink_state

while True:
    if blink_state == 1:
        led.on()
        time.sleep(0.5)
        led.off()
        time.sleep(0.5)
    elif blink_state == 2:
        led.on()
        time.sleep(1)
        led.off()
        time.sleep(0.5)
    else:
        led.on()
        time.sleep(0.2)
        led.off()
        time.sleep(0.2)