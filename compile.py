#!/usr/bin/env python3
import os
import time
import argparse


parser = argparse.ArgumentParser(description='python script to compile source code from different directories')

parser.add_argument('--cpp', action='store_const', help='flag specifier \
                    indicating c++ source code', const=True, default=False)
parser.add_argument('--java', action='store_const', help='flag specifier \
                    indicating java source code', const=True, default=False)

args = parser.parse_args()

working_source_string = 'working with {} source'

if args.cpp:
    print(working_source_string.format('cpp'))
    files = os.listdir('src/cpp/')
elif args.java:
    print(working_source_string.format('java'))
    files = os.listdir('src/java/')
else:
    print(working_source_string.format('c'))
    files = os.listdir('src/c/')


def remove_extension(path):
    return path[:path.rfind('.')]


t1 = time.time()
for file in files:
    if args.cpp:
        os.system('g++ -Wall -o bin/cpp/{} -g src/cpp/{}'.format(remove_extension(file), file))
    elif args.java:
        os.system('javac src/java/*.java')
        os.system('mv src/java/*.class bin/java/')
        break
    else:
        os.system('gcc -Wall -o bin/c/{} -g src/c/{} -lm'.format(remove_extension(file), file))
t2 = time.time()

print('compiled {} files in {} seconds'.format(len(files), t2-t1))
