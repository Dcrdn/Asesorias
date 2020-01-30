import random
import string
from random import randrange

class Matriculas:
    def __init__(self):
        self.totalPlacas=1000

    def generarAlMenos20PorCiento(self):
        prefijos=["D","PP","CF","A7","CC","B","OY","HC","A6","EC","N","PK","JA","XA","9B","HS"]
        pre=random.choice(prefijos)
        veintePorciento=self.totalPlacas*.2
        treintaPorciento=self.totalPlacas*.3

        numRandom = randrange(int(veintePorciento), int(treintaPorciento))

        self.totalPlacas-=numRandom
        matriculas=[]
        for i in range(numRandom):
            suf=""
            letras=5
            if(len(pre)==2):
                letras=4
            for i in range(letras):
                suf+=random.choice(string.ascii_letters)
            word=pre+suf
            word.upper()
            matriculas.append(word)
        return matriculas

    def generatePlaca(self):
        prefijos=["D","PP","CF","A7","CC","B","OY","HC","A6","EC","N","PK","JA","XA","9B","HS"]
        pre=random.choice(prefijos)

        suf=""
        letras=5
        if(len(pre)==2):
            letras=4
        for i in range(letras):
            suf+=random.choice(string.ascii_letters)
        word=pre+suf
        word.upper()
        return word

mt=Matriculas()

f = open("aeropuerto.txt", "w")

for i in range(0,3):
    matriculas=mt.generarAlMenos20PorCiento()
    for matricula in matriculas:
        f.write(matricula +"\n")

for i in range(mt.totalPlacas):
    w=mt.generatePlaca()
    f.write(w+"\n")
f.close()