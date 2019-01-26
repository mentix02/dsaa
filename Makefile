c:
    @mkdir -p bin
    @rm -f bin/c/*
    @python compile.py

cpp:
    @mkdir -p bin
    @rm -f bin/cpp/*
    @python compile.py --cpp

java:
    @mkdir -p bin
    @rm -f bin/java/*
    @python compile.py --java

clean:
    @rm -r -f bin/
    @mkdir -p bin/c bin/cpp bin/java
