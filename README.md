# DSAA

Practising and solving Data Structures & Algorithms problems. Not really problems, just me trying to learn C and some other low level languages. Java might be an exception... no pun intended. But I still find it hard so don't critisize.

## Building

I don't even know why I'm documenting this code... probably because I'm afraid I'll hit my head and get amnesia. In that case, hi. I'm Manan, Manan. Better known online as `mentix02`. Really, you've used this one username so often, a Google search will yeild all your profiles. Unknowingly, you've performed great search engine optimisation. It's a pity to see all your memory go away. But I'm sure your typing speed if fast as ever since muscle memory is nearly impossible to destroy. Sorry, I'm just ranting. 

Back to the point, I've made this `Makefile` that runs a Python script (`python3`) to compile the source code for different files. Just type - 

```sh
$ make # for C files
$ make cpp # for C++ files
$ make java # for Java files
```

Make sure you've got Python installed. Although, the script is compatible with `python2`, it's highly suggested to run `python3`.

## Running

Once you're compiled the source code using the `make` command, it'll be great to actually see the results. Since the creators of C and C++ respectively weren't idiots, they designed their compilers such that they would yeild an executable after running it over the source code and not actually a `.class` file that will then need to be interpreted by a whole virtual machine (that commonly goes by the name of `JVM`). I'm kidding - I'm just bitter towards Java because I don't understand it fully myself as is apparent from the code I've written. 

Once again, back to the point - after compiling the files for C or C++, all you need to do to run the executables is by typing the path to the file name without the extension in the `bin/` directory - 

```sh
$ bin/c/hello # for C programs
$ bin/cpp/hello # for C++ programs
```

Once again, Java manages to stand out and you can't just run them directly. You need to use the `java` command to interpret the bytecode generated. But oh no no, you can't run it directly from some other directory. Nope, that would've been too easy :') You need to manually `cd` into the `bin/java/` directory and run it over there - 

```sh
$ cd bin/java/
$ java Hello 
```

### Further Reading

If you've gotten this far, congrats. You're an intelligent lad. I dunno where this repo will land up. Either I'll be uploading all my assignments in college over here or I'll just use it as a testing place for any cool things I write instead of just dumping everything in `/tmp/`. I genuinly don't know. I'll probably add some more languages that are compiled and seem interesting to me. One that I definitely won't add is Go since I feel like I'm already pretty decent at it. Rust is something I've given a shot in the past but abandoned after a few programs. But it already has its `cargo` system. I don't know. We'll see. Thanks for reading.
