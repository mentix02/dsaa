c:
	@mkdir -p bin/c
	@rm -f bin/c/*
	@python compile.py

cpp:
	@mkdir -p bin/cpp
	@rm -f bin/cpp/*
	@python compile.py --cpp

java:
	@mkdir -p bin/java
	@rm -f bin/java/*
	@python compile.py --java

crystal:
	@mkdir -p bin/crystal
	@rm -f bin/crystal/*
	@python compile.py --crystal

clean:
	@rm -r -f bin/
	@mkdir -p bin/c bin/cpp bin/java
