import gpiozero  # We are using GPIO pins
import time

button = gpiozero.Button(17) # GPIO17 connects to button 
led = gpiozero.LED(20)

morse = []
i = input('press enter to begin!')
while True:
	v = 0
	stop = 0
	while True:
		if button.is_pressed:
			v += 1
			if v == 1: led.on()
			continue
		else:
			stop += 1
			
		if stop > 15 and v > 0:
			led.off()
			break
	if v > 100000 :
		break
	elif v > 50000 :
		#print(' ', end='')
		morse.append(' ')
	elif v > 16000 :
		#print('-', end='')
		morse.append('-')
	elif v > 4000 :
		#print('.', end='')
		morse.append('.')
		
print(morse)
	
