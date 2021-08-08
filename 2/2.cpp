// On Codecademy, this lesson covers compilation, so that's what I'll take notes on.

// What is compilation?
    // Compilation is the process by which the computer turns human-readable code into machine-runnable code.
    // Basically makes your wimpy code into something the computer can actually use.

// How do you compile something?
    // To compile a cpp file, you run this command in the termanal:
        // g++ XXX.cpp
    // Where XXX is the name of your .cpp file containing your source code.
    // This will create a XXX.out file, which can be run as such:
        // ./XXX.out
    // This will cause the termanal to search for and run the XXX.out file.
        // (Files without code, like this one, cannot be compiled.)

    // You can name the output file by running the command as such, instead:
        // g++ XXX.cpp -o NAMEHERE
        // Where XXX.cpp is the name of the source file you want to compile, and NAMEHERE is the name you want.
    // This will create a NAMEHERE file, which can be run as such:
        // ./NAMEHERE
