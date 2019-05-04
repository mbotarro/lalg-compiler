#!/usr/bin/python3
import re
import os
import sys
import filecmp
from termcolor import colored


path = "."
if len(sys.argv) >= 2:
    path = sys.argv[1]
    sys.exit(1)


print(os.listdir(path))
for arq in os.listdir(path)[::-1]:
    # Se o arquivo encontrado for um arquivo no formato test1.txt (numero variante)
    if(re.match('test[0-9]*.txt', arq) != None):
        idxTest = arq.split("test")[1]
        # Nome do arquivo de output
        outfile = "out" + idxTest

        # Rodando o teste para o arquivo
        cmd = (path + "/../out < " + arq + " >" + outfile)
        os.system(cmd) 

        diffResult = os.system("diff out" + idxTest + " exp" + idxTest + " 1>/dev/null")
        print("_" * 100)
        print("\nResultado " + idxTest.split(".txt")[0], end=" ")
        if diffResult == 0:
            print(colored('OK\n', 'green'))
        else:
            print(colored('Difere', 'red')) 
            os.system("sdiff out" + idxTest + " exp" + idxTest)
            
            

