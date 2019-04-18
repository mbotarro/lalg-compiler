#!/usr/bin/python3
import os
import sys

if len(sys.argv) < 2:
    sys.exit(0)

os.system("clear")
os.system("flex exemplo%s.l" % sys.argv[1])
os.system("gcc -g lex.yy.c -lfl -o out")

print("Exemplo %s:" % sys.argv[1])
os.system("cat exemplo%s.l" % sys.argv[1])

print("\n\nInput: ")
os.system("./out <input.txt")
print("\n\n\n")
