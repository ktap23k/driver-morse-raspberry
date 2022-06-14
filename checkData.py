MORSE_CODE_DICT = { 'A':'.-', 'B':'-...',
					'C':'-.-.', 'D':'-..', 'E':'.',
					'F':'..-.', 'G':'--.', 'H':'....',
					'I':'..', 'J':'.---', 'K':'-.-',
					'L':'.-..', 'M':'--', 'N':'-.',
					'O':'---', 'P':'.--.', 'Q':'--.-',
					'R':'.-.', 'S':'...', 'T':'-',
					'U':'..-', 'V':'...-', 'W':'.--',
					'X':'-..-', 'Y':'-.--', 'Z':'--..',
					'1':'.----', '2':'..---', '3':'...--',
					'4':'....-', '5':'.....', '6':'-....',
					'7':'--...', '8':'---..', '9':'----.',
					'0':'-----', ',':'--..--', '.':'.-.-.-',
					'?':'..--..', '/':'-..-.', '-':'-....-',
					'(':'-.--.', ')':'-.--.-'}

class Check():
    morse = '''abcdefghijklmnopqrstuvwxyz1234567890,.?/-() '''
    morse_dir = list(MORSE_CODE_DICT.values())
    def checkStringTrue(self, data):
        if data:
            data = data.lower()
            for i in data:
                if not i in self.morse:
                    return 0
            return 1
        return 0
    
    def checkMorseTrue(self, data):
        if data:
            for i in data:
                if not i in '.- ':
                    return 0
        for i in data.split(' '):
            if not self.morse_dir.count(i) and i:
                return 0
        return 1
