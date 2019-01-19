#!/usr/bin/env python3
import os


def remove_extension(path):
    return path[:path.rfind('.')]


files = os.listdir('src/')

for file in files:
    os.system('gcc -Wall -o bin/{} -g src/{} -lm'.format(remove_extension(file), file))

print('compiled {} files'.format(len(files)))
