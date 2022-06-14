class Check():
    morse = '''abcdefghijklmnopqrstuvwxyz1234567890,.?;:/-'()_@!&=+"$ '''

    def checkStringTrue(self, data):
        if data:
            data.lower()
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
            return 1
        return 0

a = Check()
print(a.checkStringTrue())

