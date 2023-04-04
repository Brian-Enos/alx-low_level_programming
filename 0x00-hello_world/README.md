# **Introduction to C programming**
## **Introduction**
>C programming is low-level programming language used to develop system software and application software.
>It is a procedural language that has a simple syntax and powerful features. C is widely used in developing operating systems, compilers, and embedded systems due to its efficiency and versatility.


**This repository contals all the tasks i did  during the course of my software engineering journey at ALX**
## **Learning Objectives**

At the end of this project, i was expected to be able to explain to anyone, without the help of Google and know :


* Why C programming is awesome
* Who invented C
* Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
* What happens when you type gcc main.c
* What is an entry point
* What is main
* How to print text using printf, puts and putchar
* How to get the size of a specific type using the unary operator sizeof
* How to compile using gcc
* What is the default program name when compiling with gcc
* What is the official C coding style and how to check your code with betty-style
* How to find the right header to include in your source code when using a standard library function
* How does the main function influence the return value of the program

## **Requirements and Instructions**
* Allowed editors:
    * Vi
    * Vim
    *  Emacs

* All my files were compiled on Ubuntu 20.04 LTS using: ***gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89***
* All my files were to end with a new line
* **A README.md** file at the root of the repo, containing a description of the repository was mandatory
* **A README.md** file, at the root of the folder of this project, containing a description of the project was mandatory
* There were to be no errors and no warnings during compilation
* I was not allowed to use system

* My code was to use the Betty style. It will be checked using [ betty-style.pl ](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)

## **Running Shell Scripts**
* Allowed editors: 
    * Vim
    * Vi
    * Emacs
* All my scripts were tested on Ubuntu 20.04 LTS
* All my scripts were to  be exactly two lines long ***($ wc -l file should print 2)***
* All your files should end with a new line
* The first line of all my files were to  be exactly ***#!/bin/bash***


## **Installing Betty Linter**

* Go to the [Betty](https://github.com/holbertonschool/Betty) repository
* Clone the repo to your local machine
* cd into the Betty directory
* Install the linter with sudo ./install.sh
* emacs or vi a new file called betty, and copy the script below:


```
#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done
```

* Once saved, exit file and change permissions to apply to all users with ***chmod a+x betty***
* Move the betty file into ***/bin/ directory*** or somewhere else in your ***$PATH*** with ***sudo mv betty /bin/***

## **Running Betty**
* To run the Betty linter just with command: **betty filename_to_run**

  
 ## **Note**

* I'm always exploring new ways to optimize code and improve system performance, and I'm happy to share my knowledge with others.
* I hope that my examples and projects will be useful to those looking to learn more about low-level programming or those looking to improve their skills in this field.

* Please feel free to contribute to this repository or reach out to me with any questions or suggestions.


  
  
## **Thank you for visiting this repository, see you around!** :smiling_face_with_three_hearts:



# **Connect with me on:** 

[Hash Node](https://brianenosotieno.hashnode.dev)
                        
[Twitter](https://twitter.com/brian_tatling) 
                        
[Linked In](https://www.linkedin.com/in/brian-enos/)

## **A Famous Programming Quote**

***"When done well, software is invisible," Bjarne Stroustrup*** :muscle: :muscle: :muscle:
## **Happy Coding Engineers!** :computer: :computer: :computer:
<img align="left" alt="Coding" width="400" src= "https://camo.githubusercontent.com/e20822b4282c07ffd010cd05f855a6561d3b62358ca9e607e4901288dd748fcb/68747470733a2f2f63646e2e6472696262626c652e636f6d2f75736572732f323133313939332f73637265656e73686f74732f343934383733362f74686f75676874776f726b732d6769665f6472696262626c652e676966">
